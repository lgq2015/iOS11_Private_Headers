/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSUserDefaults : NSObject {
    struct __CFString { } * _container_;
    struct __CFString { } * _identifier_;
    id  _kvo_;
    void * _reserved;
}

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (struct __CFString { }*)_container;
- (struct __CFString { }*)_identifier;
- (bool)_observingCFPreferences;
- (void)_setContainer:(struct __CFURL { }*)arg1;
- (void)_setIdentifier:(struct __CFString { }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
+ (id)standardUserDefaults;

- (id)URLForKey:(id)arg1;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (void)addSuiteNamed:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (void)finalize;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)initWithSuiteName:(id)arg1;
- (id)initWithUser:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (bool)objectIsForcedForKey:(id)arg1;
- (bool)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)registerDefaults:(id)arg1;
- (oneway void)release;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removePersistentDomainForName:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)searchList;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setObservationInfo:(void*)arg1;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (void)setSearchList:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (id)valueForKey:(id)arg1;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_copyCompositionServicesPreferenceValueForKey:(id)arg1;
+ (void)mf_setCompositionServicesPreferenceValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_safariDefaults;

- (id)_sf_dateForKey:(id)arg1;
- (bool)_sf_javaScriptCanOpenWindowsAutomatically;
- (bool)_sf_javaScriptEnabled;
- (void)_sf_registerSafariDefaults;
- (void)_sf_setShouldAutomaticallyDownloadReadingListItems:(bool)arg1;
- (bool)_sf_shouldAutomaticallyDownloadReadingListItems;
- (id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_sf_warnAboutFraudulentWebsites;

// Image: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager

- (id)DOC_roleSpecificKeyForKey:(id)arg1 configuration:(id)arg2;
- (void)DOC_setObject:(id)arg1 forRoleKey:(id)arg2 configuation:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akDataForColor:(id)arg1;
+ (id)akDataForFont:(id)arg1;
+ (id)akDataForTextAttributes:(id)arg1;

- (id)akColorForKey:(id)arg1;
- (id)akFontForKey:(id)arg1;
- (void)akSetColor:(id)arg1 forKey:(id)arg2;
- (void)akSetFont:(id)arg1 forKey:(id)arg2;
- (void)akSetTextAttributes:(id)arg1 forKey:(id)arg2;
- (id)akTextAttributesForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_defaultExists:(id)arg1;
- (id)bs_domain;
- (void)bs_setDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

+ (id)CNFObjectForKey:(id)arg1;
+ (unsigned long long)CNFRegEmailValidationTimeout;
+ (id)CNFRegSavedAccountName;
+ (id)CNFRegServerURLOverride;
+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;
+ (void)setCNFRegEmailValidationTimeout:(unsigned long long)arg1;
+ (void)setCNFRegSavedAccountName:(id)arg1;
+ (void)setCNFRegServerURLOverride:(id)arg1;
+ (void)setShouldShowCNFRegistrationServerLogs:(bool)arg1;
+ (void)setShouldShowCNFRegistrationSettingsUI:(bool)arg1;
+ (bool)shouldShowCNFRegistrationServerLogs;
+ (bool)shouldShowCNFRegistrationSettingsUI;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (bool)boolValueSafeForKey:(id)arg1;
- (bool)boolValueSafeForKey:(id)arg1 status:(int*)arg2;
- (double)doubleValueSafeForKey:(id)arg1;
- (double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2;
- (long long)int64ValueSafeForKey:(id)arg1;
- (long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2;
- (id)stringValueSafeForKey:(id)arg1;
- (id)stringValueSafeForKey:(id)arg1 status:(int*)arg2;
- (const char *)utf8ValueSafeForKey:(id)arg1;
- (const char *)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (void)fu_backupStandardUserDefaultsKey:(id)arg1;
+ (void)fu_backupStandardUserDefaultsKey:(id)arg1 useContainer:(bool)arg2;
+ (id)fu_npsManager;
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1;
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1 useContainer:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (bool)delayedSynchronize;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)_IMAgentObjectForKey:(id)arg1;
+ (id)_IMAppObjectForKey:(id)arg1;
+ (id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_cloudBookmarksDefaults;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (bool)boolForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (long long)integerForSettingKey:(id)arg1 withDefaultValue:(long long)arg2;
- (id)stringForSettingKey:(id)arg1 withDefaultValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)arrayForKeyInCurrentRole:(id)arg1;
- (bool)boolForKey:(id)arg1 inRole:(id)arg2;
- (bool)boolForKeyInCurrentRole:(id)arg1;
- (id)dataForKey:(id)arg1 inRole:(id)arg2;
- (id)dataForKeyInCurrentRole:(id)arg1;
- (id)dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)dictionaryForKeyInCurrentRole:(id)arg1;
- (double)doubleForKey:(id)arg1 inRole:(id)arg2;
- (double)doubleForKeyInCurrentRole:(id)arg1;
- (float)floatForKey:(id)arg1 inRole:(id)arg2;
- (float)floatForKeyInCurrentRole:(id)arg1;
- (long long)integerForKey:(id)arg1 inRole:(id)arg2;
- (long long)integerForKeyInCurrentRole:(id)arg1;
- (id)keyForRole:(id)arg1;
- (id)objectForKey:(id)arg1 inRole:(id)arg2;
- (id)objectForKeyInCurrentRole:(id)arg1;
- (id)p_currentRole;
- (void)removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (void)removeObjectForKeyInCurrentRole:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setBool:(bool)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setInteger:(long long)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (id)stringForKey:(id)arg1 inRole:(id)arg2;
- (id)stringForKeyInCurrentRole:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)tu_defaults;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_webkit_preferredLanguageCode;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

+ (id)webui_defaults;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (void)tsu_registerDefaults;

- (id)tsk_arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_arrayForKeyInCurrentRole:(id)arg1;
- (bool)tsk_boolForKey:(id)arg1 inRole:(id)arg2;
- (bool)tsk_boolForKeyInCurrentRole:(id)arg1;
- (id)tsk_dataForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dataForKeyInCurrentRole:(id)arg1;
- (id)tsk_dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dictionaryForKeyInCurrentRole:(id)arg1;
- (double)tsk_doubleForKey:(id)arg1 inRole:(id)arg2;
- (double)tsk_doubleForKeyInCurrentRole:(id)arg1;
- (float)tsk_floatForKey:(id)arg1 inRole:(id)arg2;
- (float)tsk_floatForKeyInCurrentRole:(id)arg1;
- (long long)tsk_integerForKey:(id)arg1 inRole:(id)arg2;
- (long long)tsk_integerForKeyInCurrentRole:(id)arg1;
- (id)tsk_keyForRole:(id)arg1;
- (id)tsk_objectForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_objectForKeyInCurrentRole:(id)arg1;
- (void)tsk_removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (void)tsk_removeObjectForKeyInCurrentRole:(id)arg1;
- (void)tsk_setBool:(bool)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setBool:(bool)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setInteger:(long long)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setInteger:(long long)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (id)tsk_stringForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_stringForKeyInCurrentRole:(id)arg1;
- (id)tskp_currentRole;

@end
