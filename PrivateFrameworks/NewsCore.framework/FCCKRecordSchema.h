/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKRecordSchema : NSObject {
    NSString * _clientRecordType;
    NSDictionary * _fieldSchemasByName;
    NSString * _serverRecordType;
}

@property (nonatomic, readonly, copy) NSString *clientRecordType;
@property (nonatomic, readonly) bool hasEncryptedFields;
@property (nonatomic, readonly, copy) NSString *serverRecordType;

+ (id)recordWithClientType:(id)arg1 serverType:(id)arg2 fields:(id)arg3;

- (void).cxx_destruct;
- (id)clientRecordType;
- (bool)hasEncryptedFields;
- (id)init;
- (id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3;
- (bool)isFieldEncrypted:(id)arg1;
- (bool)isFieldKnown:(id)arg1;
- (id)serverRecordType;

@end
