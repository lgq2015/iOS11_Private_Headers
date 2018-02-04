/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage {
    bool  _compressed;
    NSData * _data;
    bool  _expectsPeerResponse;
    NSDate * _expiryDate;
    unsigned short  _isResponse;
    NSString * _messageUUID;
    unsigned long long  _payloadLength;
    unsigned long long  _payloadOffset;
    NSString * _peerResponseIdentifier;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned short  _type;
    bool  _wantsAppAck;
}

@property (nonatomic) bool compressed;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool expectsPeerResponse;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, readonly) unsigned short isResponse;
@property (nonatomic, readonly) NSString *messageUUID;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) bool wantsAppAck;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (bool)compressed;
- (id)data;
- (bool)expectsPeerResponse;
- (id)expiryDate;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(bool)arg3 wantsAppAck:(bool)arg4 compressed:(bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9;
- (unsigned short)isResponse;
- (id)messageUUID;
- (id)peerResponseIdentifier;
- (unsigned int)sequenceNumber;
- (void)setCompressed:(bool)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;
- (unsigned short)type;
- (bool)wantsAppAck;

@end
