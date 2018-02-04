/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSASystemConfiguration : OSAProxyConfiguration {
    bool  _appleInternal;
    NSSet * _logBlacklist;
    NSDictionary * _logConfig;
    bool  _multiUserMode;
    NSString * _pairedWatchOS;
}

@property (readonly) bool appleInternal;
@property (readonly) bool multiUserMode;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)appleInternal;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (id)automatedContextURL;
- (id)automatedDeviceGroup;
- (id)awdReporterKey;
- (id)buildVersion;
- (id)crashReporterKey;
- (id)currentTaskingIDByRouting;
- (id)experimentGroup;
- (id)identifier;
- (id)internalKey;
- (bool)isFile:(id)arg1 validForLETransfer:(id)arg2 reasonableSize:(long long)arg3 internalTypes:(id)arg4;
- (bool)isFile:(id)arg1 validForSubmission:(id)arg2 reasonableSize:(long long)arg3 to:(id)arg4 internalTypes:(id)arg5;
- (bool)isProxy;
- (id)modelCode;
- (bool)multiUserMode;
- (void)onceConfig;
- (id)osTrain;
- (id)pairedWatchOS;
- (id)productBuildString;
- (id)productNameVersionBuildString;
- (id)productReleaseString;
- (id)productVersion;
- (id)releaseType;
- (void)saveToPath:(id)arg1;
- (id)seedGroup;
- (id)serialNumber;
- (void)sysVersionData;
- (id)systemId;
- (id)targetAudience;
- (id)uiCountryCode;

@end
