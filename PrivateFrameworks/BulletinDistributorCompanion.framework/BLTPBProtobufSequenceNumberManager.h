/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBProtobufSequenceNumberManager : NSObject {
    NSUUID * _currentSessionIdentifier;
    BLTCircularBitBuffer * _duplicateEntries;
    unsigned long long  _recvSequenceNumber;
    NSUUID * _recvSessionIdentifier;
    unsigned long long  _sendSequenceNumber;
    NSLock * _sequenceNumberAccess;
    NSURL * _sequenceNumbersURL;
    NSString * _serviceName;
    unsigned long long  _sessionState;
}

@property (nonatomic, readonly) NSUUID *currentSessionIdentifier;
@property (nonatomic, readonly) NSUUID *recvSessionIdentifier;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic) unsigned long long sessionState;

- (void).cxx_destruct;
- (bool)_isSequenceNumberInOrder:(unsigned long long)arg1;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1;
- (id)_sequenceNumbersURL;
- (void)_writeSequenceNumbersToStore;
- (id)currentSessionIdentifier;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 duplicateCapacity:(unsigned long long)arg2;
- (unsigned long long)nextSendSequenceNumber;
- (id)recvSessionIdentifier;
- (id)serviceName;
- (unsigned long long)sessionState;
- (long long)setRecvSequenceNumber:(unsigned long long)arg1 recvSessionIdentifier:(id)arg2 force:(bool)arg3;
- (void)setSessionState:(unsigned long long)arg1;

@end
