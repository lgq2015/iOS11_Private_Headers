/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate> {
    NSString * _clientName;
    NSMutableArray * _currentConfigurations;
    NEConfiguration * _ingestedConfiguration;
    NEConfigurationManager * _manager;
    NSString * _payloadType;
}

@property (readonly) NSString *clientName;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NEConfiguration *ingestedConfiguration;
@property (readonly) NEConfigurationManager *manager;
@property (readonly) NSString *payloadType;

+ (id)getServiceIDForPayload:(id)arg1;
+ (void)profileMigrationComplete;

- (void).cxx_destruct;
- (id)clientName;
- (id)copyManagedConfigurationIDs;
- (bool)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
- (id)currentConfigurations;
- (void)dealloc;
- (bool)enableAlwaysOnVpn;
- (bool)enableAlwaysOnVpnInternal:(bool)arg1;
- (void)enableDefaultService;
- (id)findConfigurationByConfigurationID:(id)arg1;
- (id)findConfigurationByName:(id)arg1;
- (id)findConfigurationByPayloadUUID:(id)arg1;
- (id)findMostSpecificAppRuleForBundleID:(id)arg1 config:(id)arg2;
- (id)getCertificatesForConfigurationWithIdentifier:(id)arg1;
- (id)ingestedConfiguration;
- (id)initWithName:(id)arg1;
- (id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
- (bool)isInstalled:(id)arg1;
- (bool)loadConfigurationsForceReloadFromDisk;
- (bool)loadConfigurationsWithRefreshOption:(bool)arg1;
- (bool)lockConfigurations;
- (id)manager;
- (id)payloadType;
- (bool)removeConfiguration:(id)arg1;
- (bool)removeConfigurationWithIdentifier:(id)arg1;
- (bool)removeIngestedConfiguration;
- (id)resolveConfigurationNameConflict:(id)arg1;
- (bool)saveConfiguration:(id)arg1;
- (bool)saveIngestedConfiguration;
- (id)setAsideConfigurationName:(id)arg1 unsetAside:(bool)arg2;
- (void)setCurrentConfigurations:(id)arg1;
- (void)setIngestedConfiguration:(id)arg1;
- (void)unlockConfigurations;
- (bool)updateAppLayerVPNMappingRules:(id)arg1;
- (bool)updateDefaultAfterAddingConfiguration;
- (bool)updateDefaultAfterDeletingConfiguration;
- (bool)updateManagedAppRules:(id)arg1;

@end