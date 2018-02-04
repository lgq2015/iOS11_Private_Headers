/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKZoneSchema : NSObject {
    NSString * _clientZoneName;
    bool  _isDefaultZone;
    NSDictionary * _recordSchemasByClientType;
    NSDictionary * _recordSchemasByServerType;
    NSString * _serverZoneName;
    bool  _shouldUseSecureContainer;
    bool  _shouldUseZoneWidePCS;
    NSDictionary * _staticClientRecordNamesByServerName;
    NSArray * _staticRecordNamesEligibleForMigration;
    NSDictionary * _staticServerRecordNamesByClientName;
    bool  _supportsRecordFieldEncryption;
    bool  _supportsRecordNameEncryption;
}

@property (nonatomic, readonly, copy) NSArray *allClientRecordTypes;
@property (nonatomic, readonly, copy) NSString *clientZoneName;
@property (nonatomic, readonly) bool isDefaultZone;
@property (nonatomic, readonly, copy) NSString *serverZoneName;
@property (nonatomic, readonly) bool shouldUseSecureContainer;
@property (nonatomic, readonly) bool shouldUseZoneWidePCS;
@property (nonatomic, readonly, copy) NSArray *staticRecordNamesEligibleForMigration;
@property (nonatomic, readonly) bool supportsRecordFieldEncryption;
@property (nonatomic, readonly) bool supportsRecordNameEncryption;

+ (id)defaultZoneWithRecords:(id)arg1 staticRecordNames:(id)arg2 staticRecordNameMigrationBlacklist:(id)arg3 shouldUseSecureContainer:(bool)arg4;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 staticRecordNames:(id)arg4 shouldEncryptRecordNames:(bool)arg5 shouldUseZoneWidePCS:(bool)arg6 shouldUseSecureContainer:(bool)arg7;

- (void).cxx_destruct;
- (id)allClientRecordTypes;
- (id)clientRecordNameForServerRecordName:(id)arg1;
- (id)clientZoneName;
- (void)enumerateRecordSchemasWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithClientZoneName:(id)arg1 serverZoneName:(id)arg2 recordSchemas:(id)arg3 staticRecordNames:(id)arg4 staticRecordNameMigrationBlacklist:(id)arg5 shouldEncryptRecordNames:(bool)arg6 shouldUseZoneWidePCS:(bool)arg7 shouldUseSecureContainer:(bool)arg8;
- (bool)isDefaultZone;
- (bool)isKnownClientRecordName:(id)arg1;
- (bool)isKnownServerRecordName:(id)arg1;
- (id)schemaForRecordWithClientType:(id)arg1;
- (id)schemaForRecordWithServerType:(id)arg1;
- (id)serverRecordNameForClientRecordName:(id)arg1;
- (id)serverZoneName;
- (bool)shouldDecryptServerRecordName:(id)arg1;
- (bool)shouldEncryptClientRecordName:(id)arg1;
- (bool)shouldUseSecureContainer;
- (bool)shouldUseZoneWidePCS;
- (id)staticRecordNamesEligibleForMigration;
- (bool)supportsRecordFieldEncryption;
- (bool)supportsRecordNameEncryption;

@end
