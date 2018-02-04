/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSURL : NSObject <AFSecurityDigestibleChunksProviding, CKXPCSuitableString, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, PQLValuable, QLPreviewItem, SBFFileCacheFileIdentifier, SFJSONSerializable, TSUDownloadItem, UIItemProviderReading, UIItemProviderWriting> {
    NSURL * _baseURL;
    void * _clients;
    void * _reserved;
    NSString * _urlString;
}

@property (readonly, copy) NSURL *URLByDeletingLastPathComponent;
@property (readonly, copy) NSURL *URLByDeletingPathExtension;
@property (readonly, copy) NSURL *URLByResolvingSymlinksInPath;
@property (readonly, copy) NSURL *URLByStandardizingPath;
@property (getter=_pb_isDirectory, nonatomic, readonly) bool _pb_directory;
@property (getter=_pb_isFileProvider, nonatomic, readonly) bool _pb_isFileProvider;
@property (nonatomic, readonly) NSString *_sf_topLevelDomain;
@property (setter=_setTitle:, nonatomic, copy) NSString *_title;
@property (readonly, copy) NSString *absoluteString;
@property (readonly, copy) NSURL *absoluteURL;
@property (readonly) int addressBookUID;
@property (readonly, copy) NSURL *baseURL;
@property (nonatomic, readonly) NSString *br_lastEditorDeviceName;
@property (nonatomic, readonly) NSString *br_lastEditorName;
@property (nonatomic, readonly) NSPersonNameComponents *br_lastEditorNameComponents;
@property (readonly) int callService;
@property (nonatomic, readonly) bool ckAllowRetargeting;
@property (nonatomic, readonly) bool ckIsLaunchAppURL;
@property (nonatomic, readonly) bool ckIsUnitTestingURL;
@property (nonatomic, readonly) NSString *ckLaunchURLBalloonPluginBundleID;
@property (nonatomic, readonly) NSDictionary *ckLaunchURLBalloonPluginPayload;
@property (nonatomic, readonly) NSString *ckLaunchURLPostComposeDismissal;
@property (nonatomic, readonly) bool ckShouldShowComposeUI;
@property (nonatomic, readonly) bool ckShouldShowDigitalTouchCanvas;
@property (nonatomic, readonly) NSArray *ckSuggestedReplies;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *downloadTaskDescription;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (readonly, copy) NSURL *filePathURL;
@property (readonly) const char *fileSystemRepresentation;
@property (getter=isFileURL, readonly) bool fileURL;
@property (readonly) bool forceAssist;
@property (readonly, copy) NSString *fragment;
@property (readonly) bool hasDirectoryPath;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *host;
@property (getter=isiWorkURL, readonly) bool iWorkURL;
@property (nonatomic, readonly) NSString *ic_UTI;
@property (nonatomic, readonly) long long ic_fileSize;
@property (nonatomic, readonly) bool isAppStoreURL;
@property (readonly) bool isBasebandLogURL;
@property (readonly) bool isEmergencyCallURL;
@property (readonly) bool isEmergencyURL;
@property (nonatomic, readonly) bool isMapURL;
@property (nonatomic, readonly) bool isNewsURL;
@property (nonatomic, readonly) bool isSupportedAsAttachment;
@property (readonly) bool isVoicemailURL;
@property (nonatomic, readonly) bool isWebURL;
@property (nonatomic, readonly) bool isiTunesURL;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly, copy) NSString *lastPathComponent;
@property (setter=ls_setPreferredLocalizations:, retain) NSArray *ls_preferredLocalizations;
@property (nonatomic, readonly) NSString *mpUniversalTrackIDBaseID;
@property (nonatomic, readonly) long long mpUniversalTrackIDType;
@property (nonatomic, readonly) bool needsDownload;
@property (readonly) NSString *originatingUIIdentifier;
@property (readonly, copy) NSString *parameterString;
@property (readonly, copy) NSString *password;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *pathComponents;
@property (readonly, copy) NSString *pathExtension;
@property (readonly) NSString *phoneNumber;
@property (readonly, copy) NSNumber *port;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly, copy) NSString *query;
@property (readonly, copy) NSString *relativePath;
@property (readonly, copy) NSString *relativeString;
@property (readonly, copy) NSString *resourceSpecifier;
@property (readonly, copy) NSString *scheme;
@property (nonatomic, readonly) NSString *sf_absoluteStringWithoutFragment;
@property (nonatomic, readonly) LSAppLink *sf_appLink;
@property (nonatomic, readonly) bool sf_isFacetimeURL;
@property (nonatomic, readonly) bool sf_isOfflineReadingListURL;
@property (nonatomic, readonly) bool sf_isWebSearchURL;
@property (nonatomic, readonly) bool ssb_hasUserInfo;
@property (nonatomic, readonly) bool ssb_isSafeURL;
@property (readonly, copy) NSURL *standardizedURL;
@property (readonly) Class superclass;
@property (readonly) bool suppressAssist;
@property (nonatomic, readonly) long long totalBytesExpectedToBeDownloaded;
@property (nonatomic, readonly) NSString *tsu_UTI;
@property (nonatomic, readonly) NSURL *uniquedURL;
@property (readonly, copy) NSString *user;
@property (readonly) bool wasAlreadyAssisted;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)__unurl;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (bool)supportsSecureCoding;
+ (bool)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)bookmarkDataWithAliasRecord:(id)arg1;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4;
- (bool)checkResourceIsReachableAndReturnError:(id*)arg1;
- (id)filePathURL;
- (id)fileReferenceURL;
- (bool)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)isFileReferenceURL;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (id)resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (bool)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setResourceValues:(id)arg1 error:(id*)arg2;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (bool)_isSafeDirectoryForDownloads:(int)arg1;
- (bool)_isSafeFileForBackgroundUpload:(int)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKSharingURLSubscheme;
- (id)CKXPCSuitableString;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (bool)cs_addDocumentTracking;
- (bool)cs_isInMobileDocuments;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)fp_containerPrefixURL;
+ (id)fp_homeDirectory;
+ (id)fp_localStoragePrefixURL;
+ (id)fp_supportDirectory;

- (id)fp_addDocumentTrackingWithError:(id*)arg1;
- (void)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id*)arg2;
- (void)fp_coordinatedDeleteWithHandler:(id /* block */)arg1;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 error:(id*)arg2;
- (bool)fp_createSubFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_deleteWithCompletionHandler:(id /* block */)arg1;
- (id)fp_existingURLOfChildWithName:(id)arg1;
- (unsigned long long)fp_fileSize;
- (void)fp_hideExtension:(bool)arg1;
- (bool)fp_importUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_isFolder;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (bool)fp_makeWritableWithError:(id*)arg1;
- (bool)fp_matchesFileProviderURL;
- (bool)fp_matchesLocalStorageURL;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 byCopying:(bool)arg2 error:(id*)arg3;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id*)arg2;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(bool)arg4 completionHandler:(id /* block */)arg5;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (bool)fp_renameWithNewName:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_reparentUnderFolder:(id)arg1 allowBouncing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_reparentUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fp_shortDescription;
- (bool)fp_trashUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fp_withReadWriteAccess:(id /* block */)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithComponents:(/* Warning: unhandled struct encoding: '{?=@@@@q@@@}' */ struct { id x1; id x2; long long x3; id x4; id x5; })arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
+ (id)fileURLWithPathComponents:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(bool)arg2;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)URLByDeletingLastPathComponent;
- (id)URLByDeletingPathExtension;
- (id)URLByResolvingSymlinksInPath;
- (id)URLByStandardizingPath;
- (id)_URLArchive;
- (id)_URLByEscapingSpacesAndControlChars;
- (unsigned long long)_cfTypeID;
- (struct __CFURL { }*)_cfurl;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(bool)arg1;
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_freeClients;
- (id)_hostString;
- (bool)_isAbsolute;
- (bool)_isDeallocating;
- (void)_performWithPhysicalURL:(id /* block */)arg1;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (bool)_tryRetain;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (/* Warning: unhandled struct encoding: '{?=@@@@q@@@}' */ struct { id x1; id x2; long long x3; id x4; id x5; })_web_URLComponents;
- (bool)_web_isJavaScriptURL;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)absoluteString;
- (id)absoluteURL;
- (id)baseURL;
- (bool)checkPromisedItemIsReachableAndReturnError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (const char *)fileSystemRepresentation;
- (id)fragment;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)hasDirectoryPath;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFileURL;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (id)lastPathComponent;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)parameterString;
- (id)password;
- (id)path;
- (id)pathComponents;
- (id)pathExtension;
- (id)port;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)query;
- (id)relativePath;
- (id)relativeString;
- (oneway void)release;
- (id)resourceSpecifier;
- (id)retain;
- (unsigned long long)retainCount;
- (id)scheme;
- (id)standardizedURL;
- (id)user;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_valueForFirstInstanceOfParameterNamed:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (long long)_mpUTITypeFromMRUTIType:(unsigned int)arg1;
- (id)mpUniversalTrackIDBaseID;
- (long long)mpUniversalTrackIDType;

// Image: /System/Library/Frameworks/Messages.framework/Messages

- (id)__ms_UTI;
- (bool)__ms_conformsToUTI:(id)arg1;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)LS_iCloudFamilyURLWithComponents:(id)arg1;
+ (id)ls_bizURL:(id)arg1;

- (id)LS_nooverride:(id)arg1;
- (bool)LS_pathHasCaseInsensitivePrefix:(id)arg1;
- (bool)conformsToOverridePatternWithKey:(id)arg1;
- (id)fmfURL;
- (id)fmipURL;
- (id)iCloudEmailPrefsURL;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)iTunesStoreURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (bool)isiWorkURL;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)ls_preferredLocalizations;
- (void)ls_setPreferredLocalizations:(id)arg1;
- (id)mapsURL;
- (id)photosURL;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (bool)_QLIsPackageURL;
- (bool)_QLNeedsCoordination;
- (bool)_QLNeedsDownload;
- (id)_QLSingleFileSizeForURL:(id)arg1;
- (id)_QLUrlFileSize;
- (id)previewItemURL;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (bool)_sf_canCreateURLsFromDropSession:(id)arg1;
+ (void)_sf_urlsFromDragItems:(id)arg1 completionHandler:(id /* block */)arg2;

- (id)_sf_topLevelDomain;
- (id)sf_absoluteStringWithoutFragment;
- (id)sf_appLink;
- (bool)sf_isFacetimeURL;
- (bool)sf_isOfflineReadingListURL;
- (bool)sf_isWebSearchURL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)SLTwitterAccessTokenURL;
+ (id)SLTwitterAccountGenerateURL;
+ (id)SLTwitterAccountSettingsURL;
+ (id)SLTwitterCleanupPushDestinationsURL;
+ (id)SLTwitterDirectMessageURL;
+ (id)SLTwitterFriendsURL;
+ (id)SLTwitterFriendshipsURL;
+ (id)SLTwitterImageLimitsURL;
+ (id)SLTwitterNearbyPlacesURL;
+ (id)SLTwitterRequestTokenURL;
+ (id)SLTwitterRetweetURLForTweetID:(id)arg1;
+ (id)SLTwitterTCoLengthURL;
+ (id)SLTwitterUpdateMultiPartStatusURL;
+ (id)SLTwitterUpdateStatusURL;
+ (id)SLTwitterUserInfoURL;
+ (id)SLTwitterUsersLookupURL;
+ (id)SLTwitterVerifyCredentialsURL;
+ (id)URLForFacebookGraphAPIWithDomain:(id)arg1 path:(id)arg2;
+ (id)URLForFacebookGraphAPIWithPath:(id)arg1;
+ (id)URLForFacebookPageAtPath:(id)arg1;
+ (id)URLForFacebookRESTMethod:(id)arg1;
+ (bool)_isBetaSwitchEnabledForKey:(struct __CFString { }*)arg1;

- (bool)isAppStoreURL;
- (bool)isAssetURL;
- (bool)isMusicStoreURL;
- (bool)loadingInUIWebViewWillLaunchAnotherApp;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)ui_cloudDocsContainerURL;
+ (id)ui_incomingDirectory:(bool)arg1;

- (id)_NSItemProviderArchive_customArchiveDictionary;
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;
- (void)_domain:(id*)arg1 subdomain:(id*)arg2;
- (void)_setTitle:(id)arg1;
- (id)_title;
- (bool)isAccountURL;
- (bool)isHTTPOrHTTPSURL;
- (bool)isInternalUIKitURL;
- (bool)isJavaScriptURL;
- (bool)isSpringboardHandledURL;
- (bool)isWebcalURL;
- (id)phobosURL;
- (id)radarWebURL;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (id)ui_bookmarkForExportWithError:(id*)arg1;
- (bool)ui_canOpenInPlace;
- (id)ui_downloadOperationForActivity:(id)arg1;
- (bool)ui_hasReadSandboxExtended;
- (bool)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (bool)ui_isFileProviderURL;
- (bool)ui_isUnfulfilledPromiseURL;
- (id)ui_issueReadSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (void)ui_scheduleForCleanup;
- (void)ui_setIsFileProviderURL:(bool)arg1;
- (void)ui_setSourceIsManaged:(bool)arg1;
- (bool)ui_sourceIsManaged;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (unsigned long long)un_fileSize;
- (id)un_resourceTypeHint;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_web_URLWithWTFString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
+ (id)_web_URLWithWTFString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1 relativeToURL:(id)arg2;

- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })_web_originalDataAsWTFString;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)_af_URLWithMessageIdentifier:(id)arg1;

- (id)_af_messageIdentifierValue;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)isAMOSCommittedIdentifier;
- (bool)isAMOSIdentifier;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (bool)afui_hasMapItemScheme;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

+ (id)_bcs_URLWithUserTypedString:(id)arg1;
+ (id)_bcs_appStoreSearchURLWithScheme:(id)arg1;
+ (id)_bcs_searchURLWithQuery:(id)arg1;

- (id)_bcs_displayString;
- (id)_bcs_fullURLDisplayString;
- (bool)_bcs_isDataDetectorURL;
- (bool)_bcs_isHTTPFamilyURL;
- (bool)_bcs_isMapsURL;

// Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary

- (id)identifierFromPermlink;

// Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV

- (bool)bdv_isEqualToDAVURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (bool)MD5:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (int)classicPortForScheme:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;

- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutPassword;
- (id)URLWithoutUsername;
- (bool)absoluteURLisEqual:(id)arg1;
- (id)initWithDirtyString:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (bool)isEqualToURL:(id)arg1;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (id)queryParameters;
- (id)serverURL;
- (id)unquotedPassword;
- (id)uri;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)URLWithAddressBookUID:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;

- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (bool)cal_caseInsensitiveHasScheme:(id)arg1;
- (id)cal_emailAddressString;
- (bool)cal_hasSchemeMailto;
- (bool)cal_hasSchemeTel;
- (bool)cal_isEquivalentToEmailAddress:(id)arg1;
- (bool)cal_isEquivalentToPhoneNumber:(id)arg1;
- (id)cal_phoneNumberString;
- (id)cal_resourceSpecifierNoLeadingSlashes;
- (bool)compareToLocalString:(id)arg1;
- (bool)compareToLocalURL:(id)arg1;
- (id)hostWithoutWWW;
- (id)initWithCalDirtyString:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (bool)isEqualToURL:(id)arg1;
- (bool)isEqualToURLIgnoringScheme:(id)arg1;
- (bool)isOnRemoteFileSystem;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)pathWithoutTrailingRemovingSlash;
- (id)queryParameters;
- (id)serverURL;
- (id)unquotedPassword;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)_caseSensitiveQueryKeysAndValues;
- (id)configurationRequest;
- (bool)isConfigurationURL;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2;
+ (id)ckURLForResource:(id)arg1 withExtension:(id)arg2;

- (bool)ckAllowRetargeting;
- (bool)ckIsLaunchAppURL;
- (bool)ckIsSMSPrivateURLScheme;
- (bool)ckIsUnitTestingURL;
- (id)ckLaunchURLBalloonPluginBundleID;
- (id)ckLaunchURLBalloonPluginPayload;
- (id)ckLaunchURLPostComposeDismissal;
- (bool)ckShouldShowComposeUI;
- (bool)ckShouldShowDigitalTouchCanvas;
- (id)ckSuggestedReplies;
- (id)ckWillNotLaunchComposeUIURL;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_uniqueTemporaryDirectoryURL;

- (id)crk_escapedPath;
- (bool)crk_isBundle;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(id /* block */)arg2;
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id*)arg2;
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(bool)arg3;

- (bool)_br_isInSyncedLocationStrictly:(bool)arg1;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id*)arg1;
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id*)arg3;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id*)arg4;
- (void)br_addPhysicalProperty;
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)br_bookmarkableStringWithEtag:(bool)arg1 completion:(id /* block */)arg2;
- (void)br_bookmarkableStringWithEtag:(bool)arg1 onlyAllowItemKnowByServer:(bool)arg2 completion:(id /* block */)arg3;
- (id)br_cachedBookmarkData;
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id*)arg2;
- (id)br_cloudDocsContainer;
- (id)br_containerID;
- (id)br_containerIDIfIsDesktopOrDocumentsURL;
- (id)br_containerIDIfIsDocumentsContainerURL;
- (void)br_containerIDsWithExternalReferencesWithHandler:(id /* block */)arg1;
- (id)br_debugDescription;
- (id)br_externalDocumentPropertiesWithError:(id*)arg1;
- (bool)br_getTagNames:(id*)arg1 error:(id*)arg2;
- (void)br_isConflictedWithHandler:(id /* block */)arg1;
- (bool)br_isDocumentsContainer;
- (bool)br_isExternalDocumentReference;
- (bool)br_isInCloudDocsPrivateStorages;
- (bool)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
- (bool)br_isInLocalHomeDirectory;
- (bool)br_isInMobileDocuments;
- (bool)br_isInSharedDocsContainer;
- (bool)br_isInSyncedDesktop;
- (bool)br_isInSyncedDocuments;
- (bool)br_isInSyncedLocation;
- (bool)br_isInTrash;
- (bool)br_isPCSChained;
- (bool)br_isParentOfURL:(id)arg1;
- (bool)br_isParentOfURL:(id)arg1 strictly:(bool)arg2;
- (bool)br_isPromiseURL;
- (bool)br_isStrictlyInSyncedLocation;
- (bool)br_isSymLink;
- (id)br_itemID;
- (id)br_lastEditorDeviceName;
- (id)br_lastEditorName;
- (id)br_lastEditorNameComponents;
- (id)br_logicalURL;
- (bool)br_mightBeBRAlias;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_pathRelativeToSyncedRootURL:(id)arg1;
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;
- (id)br_physicalURL;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (id)br_realpathURL;
- (bool)br_setAccessTime:(unsigned long long)arg1 error:(id*)arg2;
- (bool)br_setTagNames:(id)arg1 error:(id*)arg2;
- (id)br_typeIdentifierWithError:(id*)arg1;
- (bool)br_wouldBeExcludedFromSync;
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)brc_applicationBundleID;
- (id)brc_applicationContainerID;
- (id)brc_applicationName;
- (id)brc_attributesValues:(id)arg1 lookup:(id)arg2;
- (id)brc_iWorkPathExtension;

// Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI

- (id)_ui_extendedAttributeForKey:(id)arg1;
- (void)_ui_setExtendedAttribute:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)CNFQueryDictionary;
- (id)URLByAppendingCNFQueryDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)_SYTemporaryFileURL:(id*)arg1;
+ (id)_SYURLForNewTemporaryFile:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_dialRequestURLWithHandle:(id)arg1 contact:(id)arg2 faceTime:(bool)arg3 video:(bool)arg4 ttyType:(long long)arg5;
+ (id)_cnui_faceTimeAudioURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeAudioURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_skypeTextURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeTextURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLWithHandle:(id)arg1;
+ (id)_cnui_telephonyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_walletPayURLFutureWithHandle:(id)arg1;
+ (id)_cnui_walletPayURLWithHandle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

+ (id)CDVDefaultPortForScheme:(id)arg1;
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;

- (id)CDVFileSystemSafePath;
- (bool)CDVIsEqualToURL:(id)arg1;
- (bool)CDVIsSafeRedirectForRequestURL:(id)arg1;
- (id)CDVPassword;
- (id)CDVRawLastPathComponent;
- (id)CDVRawLastPathComponentPreservingEscapes;
- (id)CDVRawPath;
- (id)CDVServerURL;
- (id)CDVServerURLWithPath:(bool)arg1;
- (id)CDVURLByDeletingLastPathComponent;
- (id)CDVURLWithPassword:(id)arg1;
- (id)CDVURLWithPath:(id)arg1;
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(bool)arg7;
- (id)CDVURLWithUser:(id)arg1;
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)sf_asPunchout;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)da_URLWithDirtyString:(id)arg1;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (int)da_classicPortForScheme:(id)arg1;

- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutUsername;
- (bool)da_isEqualToDAVURL:(id)arg1;
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
- (id)da_pathWithoutTrailingRemovingSlash;
- (id)da_rawPath;
- (id)da_urlByRemovingUsername;
- (id)da_urlBySettingHost:(id)arg1;
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingPath:(id)arg1;
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingPort:(id)arg1;
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingScheme:(id)arg1;
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingUsername:(id)arg1;
- (id)da_urlForLogging;
- (id)uri;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

+ (id)dd_URLWithPotentiallyInvalidURLString:(id)arg1;

- (id)dd_emailFromMailtoScheme;
- (bool)dd_isAnySimpleTelephonyScheme;
- (bool)dd_isMaps;
- (id)dd_phoneNumberFromTelScheme;
- (id)dd_phoneNumberFromTelSchemeAndExtractBody:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (id)fm_preferencesPathURLForDomain:(id)arg1;
- (id)preferencesPathURLForDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (bool)_gkIsSecure;
- (bool)_gkIsValidServerURL;
- (id)_gkQueryDictionary;
- (id)_gkURLByAddingQueryParameters:(id)arg1;
- (id)_gkURLByReplacingSchemeWithScheme:(id)arg1;
- (id)cacheKeyRepresentation;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

- (void)chmod:(unsigned short)arg1;
- (id)gs_URLByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (id)gs_issueExtension:(const char *)arg1 error:(id*)arg2;
- (id)gs_issueReadExtensionIfNeededForPid:(int)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__imURLByAppendingQueryString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (bool)__im_conformsToDomain:(id)arg1 domainExtension:(id)arg2;

// Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination

- (id)urlByAppendingPathComponents:(id)arg1 lastIsDirectory:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_URLWithData:(id)arg1 baseURL:(id)arg2;
+ (id)_lp_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;

- (id)_lp_components;
- (id)_lp_componentsNoCopy;
- (id)_lp_highLevelDomain;
- (bool)_lp_isHTTPFamilyOrLinkPresentationTestingURL;
- (id)_lp_originalData;
- (id)_lp_pathComponentAtIndex:(unsigned long long)arg1;
- (id)_lp_simplifiedDisplayString;
- (id)_lp_userVisibleString;
- (id)_lp_valueForQueryKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_hostNilForEmpty;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)generateImportedKenBurnsIdentifierURL;
+ (id)generateRecordedKenBurnsIdentifierURL;
+ (id)localIdentifierURLForAsset:(id)arg1;
+ (id)localIdentifierURLForAssetRepresentation:(id)arg1;
+ (id)perThreadPhotosQueryDateFormatter;
+ (id)photosIdentifierURLWithQuery:(id)arg1;
+ (id)pluginEditedAssetURL;

- (bool)isAdjustedVersion;
- (bool)isAssetsLibraryPersistentURL;
- (bool)isImported;
- (bool)isKenBurnsFileURL;
- (bool)isKenBurnsIdentifierURL;
- (bool)isMediaPlayerPersistentURL;
- (bool)isPhotoKitCompatibleIdentifierURL;
- (bool)isPhotosIdentifierURL;
- (bool)isPluginEditedAssetURL;
- (bool)isRecorded;
- (bool)isSFXorThemeMusicURL;
- (bool)isSharedMediaURL;
- (id)kenBurnsIdentifier;
- (id)localIdentifier;
- (id)localIdentifierURLByRemovingModificationDate;
- (id)localIdentifierURLWithModificationDate:(id)arg1;
- (long long)mediaType;
- (id)modificationDate;
- (id)modificationDateString;
- (id)shortQuery;
- (id)standardizedQuery;
- (id)valueForQueryKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_firstPartNumber;
- (bool)mf_isResourceURL;
- (bool)mf_isValidAttachmentURL;
- (id)mf_lastPartNumber;
- (id)mf_partNumbers;
- (unsigned int)mf_rowID;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_URLWithResourceID:(id)arg1;
+ (id)fc_fileURLForWidgetReferralItemWithName:(id)arg1;
+ (id)fc_safeURLWithString:(id)arg1;

- (bool)_isFeldsparOldArticleURL;
- (bool)_isFeldsparOldChannelURL;
- (bool)_isFeldsparOldTopicURL;
- (id)fc_NewsArticleID;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByDeletingQuery;
- (id)fc_feldsparTagID;
- (bool)fc_isEqualToURL:(id)arg1;
- (bool)fc_isFeldsparInterstitialPreviewURL;
- (bool)fc_isFeldsparTagURL;
- (bool)fc_isNewsArticleURL;
- (bool)fc_isNewsURL;
- (bool)fc_isResourceURL;
- (id)fc_resourceID;

// Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal

+ (id)nss_NewsURLForArticleID:(id)arg1;
+ (id)nss_NewsURLForArticleID:(id)arg1 internal:(bool)arg2;
+ (id)nss_NewsURLForArticleID:(id)arg1 title:(id)arg2;
+ (id)nss_NewsURLForForYou;
+ (id)nss_NewsURLForWebLinkURL:(id)arg1;
+ (id)nss_NewsURLWithPathComponents:(id)arg1 internal:(bool)arg2;

- (id)nss_URLWithCampaignID:(id)arg1;
- (id)nss_campaignID;
- (bool)nss_isNewsURL;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)dedupedURLWithProhibitedNames:(id)arg1;
- (id)ic_UTI;
- (long long)ic_fileSize;
- (bool)isAppStoreURL;
- (bool)isMapURL;
- (bool)isNewsURL;
- (bool)isSupportedAsAttachment;
- (bool)isWebURL;
- (bool)isiTunesURL;
- (id)queryComponents;
- (id)uniquedURL;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)URLWithPackagePart:(id)arg1;
+ (bool)canHandleDownloadTask:(id)arg1;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (bool)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3 error:(id*)arg4;

- (bool)_isShareRole:(out bool*)arg1 role:(id)arg2 error:(id*)arg3;
- (id)downloadTaskDescription;
- (id)downloadURL;
- (id)initWithPackagePart:(id)arg1;
- (bool)isInternalToPackage;
- (long long)totalBytesExpectedToBeDownloaded;
- (id)tsu_UTI;
- (bool)tsu_conformsToAnyUTI:(id)arg1;
- (bool)tsu_conformsToUTI:(id)arg1;
- (id)tsu_displayName;
- (bool)tsu_displayName:(out id*)arg1 error:(id*)arg2;
- (id)tsu_documentIdentifier;
- (unsigned long long)tsu_fileSize;
- (bool)tsu_fileSize:(out unsigned long long*)arg1 error:(id*)arg2;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (bool)tsu_isDocumentUploaded;
- (bool)tsu_isDocumentUploaded:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isFileSizeTooLargeForSharing;
- (bool)tsu_isShareCollaborator;
- (bool)tsu_isShareCollaborator:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isShareOwner;
- (bool)tsu_isShareOwner:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isShared;
- (bool)tsu_isShared:(out bool*)arg1 error:(id*)arg2;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(id /* block */)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(id /* block */)arg1;
- (bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id*)arg1;
- (id)tsu_shareOwnerName;
- (bool)tsu_shareOwnerName:(out id*)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (bool)isAppleURL;

// Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard

- (bool)_pb_isDirectory;
- (bool)_pb_isFileProvider;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)userCachesDirectoryURL:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_tempDirectoryFileURLWithFileName:(id)arg1 subdirectory:(id)arg2 fileExtension:(id)arg3;
+ (id)px_tempDirectoryFileURLWithSubdirectory:(id)arg1 fileExtension:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })safari_hostAndPortRangeFromUserTypedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing

- (bool)ssb_hasUserInfo;
- (bool)ssb_isSafeURL;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)safari_URLWithUserTypedString:(id)arg1;
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(id /* block */)arg2;

- (id)_safari_URLByReplacingComponent:(long long)arg1 includingSeparators:(bool)arg2 withString:(id)arg3;
- (id)_safari_URLByReplacingComponent:(long long)arg1 withString:(id)arg2;
- (id)safari_URLByDeletingPort;
- (id)safari_URLByDeletingScheme;
- (id)safari_URLByDeletingUserAndPassword;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (id)safari_URLByReplacingQueryWithString:(id)arg1;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;
- (id)safari_URLWithUniqueFilename;
- (id)safari_canonicalURL;
- (id)safari_displayNameWithTitle:(id)arg1;
- (bool)safari_hasCharactersBeyondPath;
- (bool)safari_hasSameOriginAsURL:(id)arg1;
- (bool)safari_hasScheme:(id)arg1;
- (bool)safari_hasUserOrPassword;
- (bool)safari_isDataURL;
- (bool)safari_isHTTPFamilyURL;
- (id)safari_originalDataAsString;
- (id)safari_path;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
- (id)safari_userVisibleString;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)absoluteStringWithoutQueryParameters;
- (id)baseDomainURL;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

+ (id)_sp_URLFromFileID:(id)arg1 filename:(id)arg2 parentFileID:(id)arg3 documentID:(id)arg4;
+ (id)sp_URLFromFileID:(id)arg1 filename:(id)arg2 parentFileID:(id)arg3 documentID:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (id)dictionaryRepresentation;
- (id)jsonData;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

- (id)URLByReallyResolvingSymlinksInPath;
- (bool)sd_containsOrIsItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)sd_strictlyContainsItemAtURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (bool)sx_canHandleNavigationAction:(id)arg1;
+ (id)sx_sanitizedURLForWebView:(id)arg1 navigationAction:(id)arg2;

- (bool)_sx_isFeldsparURL;
- (id)sx_sanitizedURL;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)_contentModificationDate:(id)arg1;
+ (id)_displayName:(id)arg1;
+ (bool)_hasUnresolvedConflict:(id)arg1;
+ (bool)_isDownloaded:(id)arg1;
+ (bool)_isDownloading:(id)arg1;
+ (bool)_isInCloud:(id)arg1;
+ (bool)_isUploaded:(id)arg1;
+ (bool)_isUploading:(id)arg1;
+ (long long)isHostnameReachable:(id)arg1;
+ (id)parseURLParams:(id)arg1;

- (id)contentModificationDate;
- (id)displayName;
- (bool)hasUnresolvedConflict;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isInCloud;
- (bool)isUploaded;
- (bool)isUploading;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)fileCacheStableDataRepresentation;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)_ss_URLByRemovingQueryParameter:(id)arg1;
- (bool)_ss_hasQueryParameter:(id)arg1;
- (id)_ss_valueForQueryParameter:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isStoreServicesURL;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)URLExceptPrivate;
- (bool)isAssetsLibraryURL;
- (bool)isOnNonHFSVolume;
- (bool)isUbiquitous;
- (id)pathExceptPrivate;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (bool)canHandleDownloadTask:(id)arg1;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3;
+ (id)filePathURLWithEscapes:(id)arg1;
+ (id)improperlyEscapedString:(id)arg1;
+ (id)properlyEscapedString:(id)arg1;
+ (id)relativeURLWithEscapes:(id)arg1;

- (id)downloadTaskDescription;
- (id)downloadURL;
- (bool)isRelative;
- (long long)totalBytesExpectedToBeDownloaded;
- (id)tsu_UTI;
- (bool)tsu_conformsToUTI:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (long long)tv_imageURLType;
- (bool)tv_isAppIconURL;
- (bool)tv_isResourceURL;
- (id)tv_resourceName;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)launchQueryForValue:(id)arg1;
+ (id)tp_inCallServiceURLWithReason:(long long)arg1;

- (bool)tp_isInCallServiceURLWithReason:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(bool)arg2;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(bool)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5 audioOnly:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3 forceAssist:(bool)arg4 suppressAssist:(bool)arg5 wasAssisted:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(bool)arg2;

- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)_destinationIDConvertingNumbersToLatin:(bool)arg1;
- (bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;
- (bool)_hasScheme:(id)arg1;
- (bool)_isPhoneNumberID:(id)arg1;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (int)addressBookUID;
- (int)callService;
- (id)faceTimeDestinationAccount;
- (bool)forceAssist;
- (id)formattedPhoneNumber;
- (bool)hasNoPromptOption;
- (bool)hasTelephonyScheme;
- (bool)isBasebandLogURL;
- (bool)isDialCallURL;
- (bool)isEmergencyCallURL;
- (bool)isEmergencyURL;
- (bool)isFaceTimeAudioPromptURL;
- (bool)isFaceTimeAudioURL;
- (bool)isFaceTimePromptURL;
- (bool)isFaceTimeURL;
- (bool)isLaunchForIncomingCallURL;
- (bool)isShowInCallUIURL;
- (bool)isTelephonyPromptURL;
- (bool)isTelephonyURL;
- (bool)isVoicemailURL;
- (bool)isWebSafeTelephoneURL;
- (id)numberQualifiedForAddressBook;
- (id)originatingUIIdentifier;
- (id)phoneNumber;
- (id)queryParameters;
- (bool)suppressAssist;
- (id)telephonyParameterDictionary;
- (id)tuQueryParameters;
- (bool)wasAlreadyAssisted;
- (id)webSafeTelephoneURL;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (id)rc_URLByAppendingStringToLastComponentBasename:(id)arg1;
- (id)rc_URLByFixingUpPersistentMediaRecordingsDirectory;
- (id)rc_URLByReplacingPathExtensionWithExtension:(id)arg1;
- (id)rc_URLByStandardizingResolvedPath;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_inMemoryAddress;

- (bool)wf_URLHasParameter:(id)arg1;
- (id)wf_URLWithTracking:(id)arg1;
- (bool)wf_isInMemoryAddress;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (bool)_webBookmarks_isHTTPFamilyURL;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

- (bool)WF_hostnameIsIPAddress;
- (id)WF_normalizedRelativePath;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_uniqueWebDataURL;
+ (id)_webkit_URLWithUserTypedString:(id)arg1;
+ (id)_webkit_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)uniqueURLWithRelativePart:(id)arg1;

- (id)_web_URLByRemovingUserInfo;
- (const char *)_web_URLCString;
- (id)_web_dataForURLComponentType:(long long)arg1;
- (id)_web_hostData;
- (id)_web_hostString;
- (bool)_web_isEmpty;
- (id)_web_originalData;
- (id)_web_originalDataAsString;
- (id)_web_schemeData;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_userVisibleString;
- (id)_webkit_URLByRemovingFragment;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_canonicalize;
- (bool)_webkit_isFileURL;
- (bool)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (bool)isStoreServicesURL;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)icqURLForIndex:(long long)arg1;

- (long long)icqIndex;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_queryParametersDictionaryFromString:(id)arg1;

- (id)ic_URLByAppendingQueryItems:(id)arg1;
- (id)ic_URLByAppendingQueryParameters:(id)arg1;
- (id)ic_queryParametersDictionary;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (id)_URLQueryParameterValueAllowedCharacterSet;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(bool)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(bool)arg2;
+ (id)unescapedStringForString:(id)arg1;

- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)copyQueryStringDictionaryWithUnescapedValues:(bool)arg1;
- (void)enumerateQueryWithBlock:(id /* block */)arg1;
- (bool)isSafeExternalURL;
- (id)sanitizedURL;
- (id)schemeSwizzledURL;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)urlBySettingQueryStringDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)termsAndConditionsURL;

- (long long)storeURLType;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_fileURLWithPath:(id)arg1;

- (bool)_isShareRole:(out bool*)arg1 role:(id)arg2 error:(id*)arg3;
- (id)tsp_URLExceptPrivate;
- (id)tsp_embeddedUTI;
- (id)tsp_fileIdentifier;
- (bool)tsp_getIsUbiquitousValue:(bool*)arg1 promised:(bool)arg2 error:(id*)arg3;
- (bool)tsp_isIWorkAVAssetURL;
- (bool)tsp_isUbiquitous;
- (bool)tsp_matchesURL:(id)arg1;
- (bool)tsp_matchesURL:(id)arg1 canCompareFileID:(bool)arg2;
- (id)tsp_pathExceptPrivate;
- (id)tsu_UTI;
- (bool)tsu_conformsToAnyUTI:(id)arg1;
- (bool)tsu_conformsToUTI:(id)arg1;
- (id)tsu_displayName;
- (bool)tsu_displayName:(out id*)arg1 error:(id*)arg2;
- (id)tsu_documentIdentifier;
- (id)tsu_fileProviderBookmarkableString;
- (unsigned long long)tsu_fileSize;
- (bool)tsu_fileSize:(out unsigned long long*)arg1 error:(id*)arg2;
- (id)tsu_fileSystemTypeName;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (bool)tsu_isDocumentUploaded;
- (bool)tsu_isDocumentUploaded:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isFileSizeTooLargeForSharing;
- (bool)tsu_isOnAPFSVolume;
- (bool)tsu_isOnForeignVolume;
- (bool)tsu_isOnSameVolumeAs:(id)arg1;
- (bool)tsu_isShareCollaborator;
- (bool)tsu_isShareCollaborator:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isShareOwner;
- (bool)tsu_isShareOwner:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isShared;
- (bool)tsu_isShared:(out bool*)arg1 error:(id*)arg2;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(id /* block */)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(id /* block */)arg1;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id*)arg1;
- (id)tsu_shareOwnerName;
- (bool)tsu_shareOwnerName:(out id*)arg1 error:(id*)arg2;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
