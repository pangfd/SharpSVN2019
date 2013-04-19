﻿using NUnit.Framework;
using SharpGit.Plumbing;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SharpGit.Tests
{
    [TestFixture]
    public class GitClientTests
    {
        string GetTempPath()
        {
            return Path.Combine(Path.GetTempPath(), "gittest-"+Guid.NewGuid().ToString("N"));
        }

        [Test]
        public void MinVersion()
        {
            Assert.That(GitClient.Version, Is.GreaterThanOrEqualTo(new Version(0, 17)));

            Assert.That(GitClient.SharpGitVersion, Is.GreaterThanOrEqualTo(new Version(0, 1700)));
            Assert.That(GitClient.AdministrativeDirectoryName, Is.EqualTo(".git"));
        }

        [Test]
        public void UseGitClient()
        {
            string dir = GetTempPath();
            using (GitRepository repo = GitRepository.Create(dir))
            using (GitClient git = new GitClient())
            {
                string file = Path.Combine(dir, "newfile");
                string subDir = Path.Combine(dir, "dir");
                string fileInSubDir = Path.Combine(subDir, "file2");
                string file3 = Path.Combine(dir, "other");
                string file4 = Path.Combine(dir, "q.ignored");
                File.WriteAllText(file, "Some body");
                Directory.CreateDirectory(subDir);
                File.WriteAllText(fileInSubDir, "Some other body");
                File.WriteAllText(file3, "file3");
                File.WriteAllText(file4, "file4");

                git.Add(file);
                git.Add(fileInSubDir);

                int ticked = 0;
                Assert.That(git.Status(dir, new GitStatusArgs(),
                    delegate(object sender, GitStatusEventArgs e)
                    {
                        switch (e.RelativePath)
                        {
                            case "newfile":
                                //Assert.That(e.IndexStatus, Is.EqualTo(GitStatus.Added));
                                Assert.That(e.IndexStatus, Is.EqualTo(GitStatus.Added));
                                Assert.That(e.WorkingDirectoryStatus, Is.EqualTo(GitStatus.Normal));
                                Assert.That(e.Ignored, Is.False);
                                break;
                            case "dir/file2":
                                Assert.That(e.IndexStatus, Is.EqualTo(GitStatus.Added));
                                Assert.That(e.WorkingDirectoryStatus, Is.EqualTo(GitStatus.Normal));
                                Assert.That(e.Ignored, Is.False);
                                break;
                            case "other":
                                Assert.That(e.IndexStatus, Is.EqualTo(GitStatus.Normal));
                                Assert.That(e.WorkingDirectoryStatus, Is.EqualTo(GitStatus.New));
                                Assert.That(e.Ignored, Is.False);
                                break;
                            case "q.ignored":
                                // TODO: Make this ignored
                                Assert.That(e.IndexStatus, Is.EqualTo(GitStatus.Normal));
                                Assert.That(e.WorkingDirectoryStatus, Is.EqualTo(GitStatus.New));
                                Assert.That(e.Ignored, Is.False);
                                break;
                            default:
                                Assert.Fail("Invalid node found");
                                break;
                        }

                        Assert.That(e.FullPath, Is.EqualTo(Path.GetFullPath(Path.Combine(dir, e.RelativePath))));
                        ticked++;
                    }), Is.True);

                Assert.That(ticked, Is.EqualTo(4), "Ticked");
            }

        }

        [Test]
        public void CreateGitRepository()
        {
            string dir = GetTempPath();
            using (GitRepository repo = GitRepository.Create(dir))
            {
                Assert.That(repo, Is.Not.Null);
                Assert.That(repo.IsEmpty, Is.True);
                Assert.That(repo.IsBare, Is.False);
                Assert.That(repo.RepositoryPath, Is.EqualTo(Path.Combine(dir, GitClient.AdministrativeDirectoryName)));
                Assert.That(repo.WorkingPath, Is.EqualTo(dir));

                GitConfiguration config = repo.Configuration;

                Assert.That(config, Is.Not.Null);
                repo.SetConfiguration(config);

                GitIndex index = repo.Index;
                Assert.That(index, Is.Not.Null);
                repo.SetIndex(index);

                GitObjectDatabase odb = repo.ObjectDatabase;
                Assert.That(odb, Is.Not.Null);
                repo.SetObjectDatabase(odb);
            }
        }
    }
}
