﻿#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
using namespace System;
using namespace System;
ref class SharpSvnStrings;


/// <summary>
///   A strongly-typed resource class, for looking up localized strings, etc.
/// </summary>
// This class was auto-generated by the StronglyTypedResourceBuilder
// class via a tool like ResGen or Visual Studio.
// To add or remove a member, edit your .ResX file then rerun ResGen
// with the /str option, or rebuild your VS project.
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Resources.Tools.StronglyTypedResourceBuilder", L"2.0.0.0"), 
System::Diagnostics::DebuggerNonUserCodeAttribute, 
System::Runtime::CompilerServices::CompilerGeneratedAttribute]
ref class SharpSvnStrings {
    
    private: static ::System::Resources::ResourceManager^  resourceMan;
    
    private: static ::System::Globalization::CultureInfo^  resourceCulture;
    
    protected private: [System::Diagnostics::CodeAnalysis::SuppressMessageAttribute(L"Microsoft.Performance", L"CA1811:AvoidUncalledPrivateCode")]
    SharpSvnStrings();
    /// <summary>
    ///   Returns the cached ResourceManager instance used by this class.
    /// </summary>
    internal: [System::ComponentModel::EditorBrowsableAttribute(::System::ComponentModel::EditorBrowsableState::Advanced)]
    static property ::System::Resources::ResourceManager^  ResourceManager {
        ::System::Resources::ResourceManager^  get();
    }
    
    /// <summary>
    ///   Overrides the current thread's CurrentUICulture property for all
    ///   resource lookups using this strongly typed resource class.
    /// </summary>
    internal: [System::ComponentModel::EditorBrowsableAttribute(::System::ComponentModel::EditorBrowsableState::Advanced)]
    static property ::System::Globalization::CultureInfo^  Culture {
        ::System::Globalization::CultureInfo^  get();
        System::Void set(::System::Globalization::CultureInfo^  value);
    }
    
    /// <summary>
    ///   Looks up a localized string similar to All targets must either be Uri or Path.
    /// </summary>
    internal: static property System::String^  AllTargetsMustBeUriOrPath {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to This argument is not a valid path. A Uri was specified.
    /// </summary>
    internal: static property System::String^  ArgumentMustBeAPathNotAUri {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to The argyment must be a valid absolute repository Uri.
    /// </summary>
    internal: static property System::String^  ArgumentMustBeAValidRepositoryUri {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to Depth must be Empty, Files or Infinity in 1.4 compatible compilation.
    /// </summary>
    internal: static property System::String^  DepthMustBeRecursiveValue {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to The handler is not registered at this time.
    /// </summary>
    internal: static property System::String^  HandlerIsNotRegisteredAtThisTime {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to Invalid SvnRevisionType value specified.
    /// </summary>
    internal: static property System::String^  InvalidSvnRevisionTypeValue {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to Invalid Uri string.
    /// </summary>
    internal: static property System::String^  InvalidUri {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to One or more items in the list are null.
    /// </summary>
    internal: static property System::String^  ItemInListIsNull {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to {This line was not parsable as Utf8}.
    /// </summary>
    internal: static property System::String^  NonUtf8ConvertableLine {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to Revision number must be at least 0.
    /// </summary>
    internal: static property System::String^  RevisionNumberMustBeAtLeast0 {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to Revision type must be head, date or a specific revision number.
    /// </summary>
    internal: static property System::String^  RevisionTypeMustBeHeadDateOrSpecific {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to This function is not available from managed code. .
    /// </summary>
    internal: static property System::String^  SvnAuthManagedPlaceholder {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to Svn operation in progress; an SvnClient instance can handle only one command at a time.
    /// </summary>
    internal: static property System::String^  SvnClientOperationInProgress {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to The specified target is not a valid Path target.
    /// </summary>
    internal: static property System::String^  TheTargetIsNotAValidPathTarget {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to The specified target is not a valur Uri or Path target.
    /// </summary>
    internal: static property System::String^  TheTargetIsNotAValidUriOrPathTarget {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to The specified target is not a valid Uri target.
    /// </summary>
    internal: static property System::String^  TheTargetIsNotAValidUriTarget {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to The passed Uri is not absolute.
    /// </summary>
    internal: static property System::String^  UriIsNotAbsolute {
        System::String^  get();
    }
    
    /// <summary>
    ///   Looks up a localized string similar to The value {0} is not a valid {1}.
    /// </summary>
    internal: static property System::String^  VerifyEnumFailed {
        System::String^  get();
    }
};


inline SharpSvnStrings::SharpSvnStrings() {
}

inline ::System::Resources::ResourceManager^  SharpSvnStrings::ResourceManager::get() {
    if (System::Object::ReferenceEquals(resourceMan, nullptr)) {
        ::System::Resources::ResourceManager^  temp = (gcnew ::System::Resources::ResourceManager(L"SharpSvnStrings", SharpSvnStrings::typeid->Assembly));
        resourceMan = temp;
    }
    return resourceMan;
}

inline ::System::Globalization::CultureInfo^  SharpSvnStrings::Culture::get() {
    return resourceCulture;
}
inline System::Void SharpSvnStrings::Culture::set(::System::Globalization::CultureInfo^  value) {
    resourceCulture = value;
}

inline System::String^  SharpSvnStrings::AllTargetsMustBeUriOrPath::get() {
    return ResourceManager->GetString(L"AllTargetsMustBeUriOrPath", resourceCulture);
}

inline System::String^  SharpSvnStrings::ArgumentMustBeAPathNotAUri::get() {
    return ResourceManager->GetString(L"ArgumentMustBeAPathNotAUri", resourceCulture);
}

inline System::String^  SharpSvnStrings::ArgumentMustBeAValidRepositoryUri::get() {
    return ResourceManager->GetString(L"ArgumentMustBeAValidRepositoryUri", resourceCulture);
}

inline System::String^  SharpSvnStrings::DepthMustBeRecursiveValue::get() {
    return ResourceManager->GetString(L"DepthMustBeRecursiveValue", resourceCulture);
}

inline System::String^  SharpSvnStrings::HandlerIsNotRegisteredAtThisTime::get() {
    return ResourceManager->GetString(L"HandlerIsNotRegisteredAtThisTime", resourceCulture);
}

inline System::String^  SharpSvnStrings::InvalidSvnRevisionTypeValue::get() {
    return ResourceManager->GetString(L"InvalidSvnRevisionTypeValue", resourceCulture);
}

inline System::String^  SharpSvnStrings::InvalidUri::get() {
    return ResourceManager->GetString(L"InvalidUri", resourceCulture);
}

inline System::String^  SharpSvnStrings::ItemInListIsNull::get() {
    return ResourceManager->GetString(L"ItemInListIsNull", resourceCulture);
}

inline System::String^  SharpSvnStrings::NonUtf8ConvertableLine::get() {
    return ResourceManager->GetString(L"NonUtf8ConvertableLine", resourceCulture);
}

inline System::String^  SharpSvnStrings::RevisionNumberMustBeAtLeast0::get() {
    return ResourceManager->GetString(L"RevisionNumberMustBeAtLeast0", resourceCulture);
}

inline System::String^  SharpSvnStrings::RevisionTypeMustBeHeadDateOrSpecific::get() {
    return ResourceManager->GetString(L"RevisionTypeMustBeHeadDateOrSpecific", resourceCulture);
}

inline System::String^  SharpSvnStrings::SvnAuthManagedPlaceholder::get() {
    return ResourceManager->GetString(L"SvnAuthManagedPlaceholder", resourceCulture);
}

inline System::String^  SharpSvnStrings::SvnClientOperationInProgress::get() {
    return ResourceManager->GetString(L"SvnClientOperationInProgress", resourceCulture);
}

inline System::String^  SharpSvnStrings::TheTargetIsNotAValidPathTarget::get() {
    return ResourceManager->GetString(L"TheTargetIsNotAValidPathTarget", resourceCulture);
}

inline System::String^  SharpSvnStrings::TheTargetIsNotAValidUriOrPathTarget::get() {
    return ResourceManager->GetString(L"TheTargetIsNotAValidUriOrPathTarget", resourceCulture);
}

inline System::String^  SharpSvnStrings::TheTargetIsNotAValidUriTarget::get() {
    return ResourceManager->GetString(L"TheTargetIsNotAValidUriTarget", resourceCulture);
}

inline System::String^  SharpSvnStrings::UriIsNotAbsolute::get() {
    return ResourceManager->GetString(L"UriIsNotAbsolute", resourceCulture);
}

inline System::String^  SharpSvnStrings::VerifyEnumFailed::get() {
    return ResourceManager->GetString(L"VerifyEnumFailed", resourceCulture);
}
