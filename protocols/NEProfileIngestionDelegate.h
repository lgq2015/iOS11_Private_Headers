/* made by EzioChiu.
 */

@protocol NEProfileIngestionDelegate

@required

+ (NSString *)getServiceIDForPayload:(NSDictionary *)arg1;
+ (void)profileMigrationComplete;

- (NSArray *)copyManagedConfigurationIDs;
- (bool)createConfigurationFromPayload:(id <NEProfilePayloadBaseDelegate>)arg1 payloadType:(NSString *)arg2;
- (bool)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (NEConfiguration *)findConfigurationByConfigurationID:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByName:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByPayloadUUID:(NSString *)arg1;
- (NSArray *)getCertificatesForConfigurationWithIdentifier:(NSString *)arg1;
- (NEConfiguration *)ingestedConfiguration;
- (id)initWithNameAndType:(NSString *)arg1 payloadType:(NSString *)arg2;
- (bool)isInstalled:(NSString *)arg1;
- (bool)loadConfigurationsForceReloadFromDisk;
- (bool)lockConfigurations;
- (bool)removeConfiguration:(NEConfiguration *)arg1;
- (bool)removeConfigurationWithIdentifier:(NSString *)arg1;
- (bool)removeIngestedConfiguration;
- (bool)saveIngestedConfiguration;
- (NEConfiguration *)setAsideConfigurationName:(NSString *)arg1 unsetAside:(bool)arg2;
- (void)unlockConfigurations;
- (bool)updateAppLayerVPNMappingRules:(NSDictionary *)arg1;
- (bool)updateDefaultAfterAddingConfiguration;
- (bool)updateDefaultAfterDeletingConfiguration;
- (bool)updateManagedAppRules:(NSArray *)arg1;

@end
