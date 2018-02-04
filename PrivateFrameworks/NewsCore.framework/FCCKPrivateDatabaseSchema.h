/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateDatabaseSchema : NSObject {
    NSArray * _defaultZoneSchemas;
    NSDictionary * _zoneSchemasByClientName;
    NSDictionary * _zoneSchemasByServerName;
}

+ (id)databaseSchemaWithZones:(id)arg1;

- (void).cxx_destruct;
- (void)enumerateDefaultZoneSchemasWithBlock:(id /* block */)arg1;
- (void)enumerateZoneSchemasWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithSchemaDictionary:(id)arg1;
- (id)initWithZoneSchemas:(id)arg1;
- (id)schemaForZoneContainingClientRecordID:(id)arg1;
- (id)schemaForZoneContainingServerRecordID:(id)arg1;
- (id)schemaForZoneWithClientName:(id)arg1;
- (id)schemaForZoneWithServerName:(id)arg1;

@end
