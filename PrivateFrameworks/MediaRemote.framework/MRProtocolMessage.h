/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRProtocolMessage : NSObject {
    NSError * _error;
    NSString * _identifier;
    MSVMultiCallback * _messagePurgedCallbacks;
    MSVMultiCallback * _messageSentCallbacks;
    NSData * _protobufData;
    unsigned long long  _timestamp;
    PBCodable * _underlyingCodableMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long encryptionType;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) MSVMultiCallback *messagePurgedCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *messageSentCallbacks;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) bool shouldLog;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) PBCodable *underlyingCodableMessage;

+ (unsigned long long)currentProtocolVersion;
+ (id)protocolMessageWithProtobufData:(id)arg1;

- (void)dealloc;
- (id)description;
- (unsigned long long)encryptionType;
- (id)error;
- (id)identifier;
- (id)init;
- (id)initWithUnderlyingCodableMessage:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (id)messagePurgedCallbacks;
- (id)messageSentCallbacks;
- (unsigned long long)priority;
- (id)protobufData;
- (void)setError:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingCodableMessage:(id)arg1;
- (bool)shouldLog;
- (unsigned long long)timestamp;
- (unsigned long long)type;
- (id)underlyingCodableMessage;

@end
