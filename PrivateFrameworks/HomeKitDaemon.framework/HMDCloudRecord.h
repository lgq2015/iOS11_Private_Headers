/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudRecord : HMFObject {
    NSData * _cachedData;
    HMDCloudZone * _cloudZone;
    bool  _controllerIdentifierChanged;
    bool  _decryptionFailed;
    bool  _encryptionFailed;
    NSUUID * _objectID;
    CKRecord * _record;
    bool  _recordCreated;
    CKRecordID * _recordID;
    NSString * _recordName;
}

@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic) HMDCloudZone *cloudZone;
@property (nonatomic) bool controllerIdentifierChanged;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) bool decryptionFailed;
@property (nonatomic) bool encryptionFailed;
@property (readonly) unsigned long long objectEncoding;
@property (nonatomic, retain) NSUUID *objectID;
@property (nonatomic, retain) CKRecord *record;
@property (getter=isRecordCached, nonatomic, readonly) bool recordCached;
@property (getter=isRecordCreated, nonatomic, readonly) bool recordCreated;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) NSString *recordType;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)cachedData;
- (void)clearData;
- (id)cloudZone;
- (bool)controllerIdentifierChanged;
- (id)data;
- (bool)decryptionFailed;
- (id)description;
- (bool)encodeObjectChange:(id)arg1;
- (bool)encryptionFailed;
- (id)extractObjectChange;
- (id)init;
- (id)initWithObjectID:(id)arg1 recordName:(id)arg2 cloudZone:(id)arg3;
- (bool)isRecordCached;
- (bool)isRecordCreated;
- (unsigned long long)objectEncoding;
- (id)objectID;
- (id)record;
- (id)recordID;
- (id)recordName;
- (id)recordType;
- (void)setCachedData:(id)arg1;
- (void)setCloudZone:(id)arg1;
- (void)setControllerIdentifierChanged:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDecryptionFailed:(bool)arg1;
- (void)setEncryptionFailed:(bool)arg1;
- (void)setObjectID:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (id)shortDescription;

@end
