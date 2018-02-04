/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicReadWriteLogEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSArray * _characteristicsToRead;
    HAPAccessory * _hapAccessory;
    HMDAccessory * _hmdAccessory;
    bool  _isLocal;
    bool  _isTimedWrite;
    bool  _isWriteOperation;
    NSUUID * _transactionId;
    unsigned long long  _triggerSource;
}

@property (nonatomic, readonly) NSArray *characteristicsToRead;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HAPAccessory *hapAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDAccessory *hmdAccessory;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) bool isTimedWrite;
@property (nonatomic, readonly) bool isWriteOperation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *transactionId;
@property (nonatomic, readonly) unsigned long long triggerSource;

+ (id)characteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isLocal:(bool)arg5 transactionId:(id)arg6;
+ (id)characteristicWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isTimedWrite:(bool)arg5 isLocal:(bool)arg6 transactionId:(id)arg7;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)characteristicsToRead;
- (id)hapAccessory;
- (id)hmdAccessory;
- (id)initReadWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isWriteOperation:(bool)arg5 isTimedWrite:(bool)arg6 isLocal:(bool)arg7 transactionId:(id)arg8;
- (bool)isLocal;
- (bool)isTimedWrite;
- (bool)isWriteOperation;
- (id)metricForAWD;
- (id)transactionId;
- (unsigned long long)triggerSource;

@end
