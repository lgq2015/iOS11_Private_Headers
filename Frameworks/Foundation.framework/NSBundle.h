/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBundle : NSObject {
    id  _cfBundle;
    unsigned long long  _flags;
    id  _initialPath;
    id  _lock;
    Class  _principalClass;
    unsigned long long  _reserved2;
    id  _reserved3;
    id  _resolvedPath;
}

@property (readonly, copy) NSURL *appStoreReceiptURL;
@property (readonly, copy) NSString *builtInPlugInsPath;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } ccui_prototypeModuleSize;
@property (nonatomic, readonly, copy) NSString *cx_displayName;
@property (nonatomic, readonly) bool cx_hasVoIPBackgroundMode;
@property (readonly, copy) NSString *developmentLocalization;
@property (readonly, copy) NSArray *executableArchitectures;
@property (readonly, copy) NSString *executablePath;
@property (readonly, copy) NSURL *executableURL;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (getter=isLoaded, readonly) bool loaded;
@property (readonly, copy) NSArray *localizations;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class principalClass;
@property (readonly, copy) NSString *privateFrameworksPath;
@property (readonly, copy) NSURL *privateFrameworksURL;
@property (readonly, copy) NSString *resourcePath;
@property (readonly, copy) NSURL *resourceURL;
@property (readonly, copy) NSString *sharedFrameworksPath;
@property (readonly, copy) NSURL *sharedFrameworksURL;
@property (readonly, copy) NSString *sharedSupportPath;
@property (readonly, copy) NSURL *sharedSupportURL;
@property (readonly, copy) NSString *xct_bundleLinkageInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)bundleForClass:(Class)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)debugDescription;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id /* block */)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;
+ (id)loadedBundles;
+ (id)mainBundle;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (void)setSystemLanguages:(id)arg1;

- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (void)__static;
- (struct __CFBundle { }*)_cfBundle;
- (struct __CFBundle { }*)_cfBundleIfPresent;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_regionsArray;
- (id)appStoreReceiptURL;
- (id)builtInPlugInsPath;
- (id)builtInPlugInsURL;
- (id)bundleIdentifier;
- (id)bundleLanguages;
- (id)bundlePath;
- (id)bundleURL;
- (Class)classNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)developmentLocalization;
- (id)executableArchitectures;
- (id)executablePath;
- (id)executableURL;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id /* block */)arg2;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateResourceCache;
- (bool)isLoaded;
- (bool)load;
- (bool)loadAndReturnError:(id*)arg1;
- (id)localizations;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)preferredLocalizations;
- (bool)preflightAndReturnError:(id*)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (Class)principalClass;
- (id)privateFrameworksPath;
- (id)privateFrameworksURL;
- (id)resourcePath;
- (id)resourceURL;
- (void)setPreservationPriority:(double)arg1 forTag:(id)arg2;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (id)sharedFrameworksPath;
- (id)sharedFrameworksURL;
- (id)sharedSupportPath;
- (id)sharedSupportURL;
- (bool)unload;
- (unsigned long long)versionNumber;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)URLForMovieResource:(id)arg1;
- (id)imageForResource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (id)cx_displayName;
- (bool)cx_hasVoIPBackgroundMode;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkitBundle;

- (id)_mapkit_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)mediaPlayerBundle;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_PhotosUIFrameworkBundle;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (bool)mainBundleRequiresStatusBarHidden;
+ (bool)mainBundleSupportsBackgroundAudio;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_rpFrameworkBundle;
+ (id)_rpLocalizedAppNameFromBundleID:(id)arg1;
+ (id)_rpLocalizedStringFromFrameworkBundleWithKey:(id)arg1;
+ (id)baseIdentifier:(id)arg1;
+ (id)fallbackBundle;
+ (id)localizedBundle;

- (id)_rpLocalizedAppName;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_typologyBundle;
+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (void)pushNibPath:(id)arg1;

- (id)dataForResourceName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)un_safeBundleWithURL:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_bundleForProcessIdentifier:(int)arg1;
+ (id)vs_frameworkBundle;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

+ (id)afui_assistantUIFrameworkBundle;

- (id)_assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (bool)assistantLanguageIsRTL;
- (id)assistantUILocale;
- (id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)assistantUILocalizedStringFromSiriLanguageForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringFromSystemLanguageForKey:(id)arg1 table:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

+ (id)bs_baseBoardUIBundle;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (id)cat_localizedStringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI

- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })ccui_prototypeModuleSize;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)ccui_bundleForModuleInstance:(id)arg1;

- (void)ccui_associateWithModuleInstance:(id)arg1;
- (id)ccui_displayName;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)_coreroutineBundle;
+ (id)_coreroutine_LocalizedStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id)fuseUIBundle;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkBundleWithIdentifier:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;
+ (bool)_gkMainBundleIsGameCenterSystemProcess;

- (id)_gkBundleShortVersion;
- (id)_gkBundleVersion;
- (id)_gkFrameworkVersionDescription;
- (bool)_gkIsBadgingEnabled;
- (bool)_gkIsDaemon;
- (bool)_gkIsGameCenter;
- (bool)_gkIsGameCenterExtension;
- (bool)_gkIsPreferences;
- (id)_gkLocalizedName;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForImageWithName:(id)arg1;
- (id)_gkPathForInviteSound;
- (id)_gkPathForMessageImage;
- (id)_gkPathForSoundWithName:(id)arg1;
- (id)_gkPreferredLanguage;
- (bool)_gkShouldAddQuickActions;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)__geoBundle;

// Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit

+ (id)HLPBundle;
+ (void)removeHLPBundle;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)_cachedMainBundleResourcePath;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)xct_bundleLinkageInfo;
- (id)xct_frameworkBundleVersion;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

+ (id)mediaControlsBundle;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

+ (id)mediaPlayerUIBundle;

// Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial

+ (id)mediaSocialBundle;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)localizedFont:(id)arg1;
+ (id)localizedFontName:(id)arg1;
+ (float)localizedFontSize:(id)arg1;
+ (id)localizedString:(id)arg1;
+ (id)localizedString:(id)arg1;
+ (float)localizedValue:(id)arg1;
+ (id)nonLocalizedString:(id)arg1;
+ (id)nonLocalizedString:(id)arg1;
+ (id)nonLocalizedString:(id)arg1 valueIfMissing:(id)arg2;
+ (id)nonLocalizedString:(id)arg1 valueIfMissing:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

+ (id)nanoMediaBridgeUIBundle;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

+ (id)nanoMusicSyncBundle;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigationBundle;
+ (bool)_navigation_isRunningInSiri;

- (id)_navigation_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (id)localizedDocumentStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)PKSanitizedBundleIdentifier;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_personaUIBundle;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_PhotosUICoreFrameworkBundle;

// Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit

+ (id)pk_PlacesKitFrameworkBundle;

// Image: /System/Library/PrivateFrameworks/SAML.framework/SAML

+ (id)saml_frameworkBundle;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_safariSharedBundle;

- (bool)safari_primaryLocalizationIsEnglish;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)coreFrameworkBundle;
+ (id)localeForString:(id)arg1;
+ (id)localizedCoreStringForKey:(id)arg1;
+ (id)localizedScreenReaderStringForKey:(id)arg1 table:(id)arg2;
+ (id)screenReaderFrameworkBundle;

- (id)bundleLocale;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 locale:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

+ (id)_brailleTableBundles;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)brailleTableIdentifiers;
+ (long long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (bool)doesBrailleTableSupportContractions:(id)arg1;
+ (bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;

- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriUILocalizedStringForKey:(id)arg1;
- (id)siriUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)siriUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore

- (id)suic_localizedStringForKey:(id)arg1;
- (id)suic_localizedStringForKey:(id)arg1 table:(id)arg2;
- (id)suic_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_imageNamed:(id)arg1;
- (id)tv_launchImage;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (id)accessibilityBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityInternalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityLocalBundleWithLastPathComponent:(id)arg1;

- (void)_accessibilityInitializeContainerLogic;
- (void)_loadAXBundleForBundleOffMainThread;
- (id)accessibilityBundlePath;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (id)__vkBundle;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_mediaAnalysisBundle;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

+ (id)videosExtrasBundle;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (id)webui_localizedDisplayName;

// Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport

+ (id)blj_localizedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)pathForITunesResource:(id)arg1 ofType:(id)arg2;

- (id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)localizedDocumentStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4;

// Image: /bootstrap/Library/SBInject/AnemoneCore.dylib

+ (id)anemoneBundleWithFile:(id)arg1;

- (id)pathForResource:(id)arg1 ofType:(id)arg2;

@end
