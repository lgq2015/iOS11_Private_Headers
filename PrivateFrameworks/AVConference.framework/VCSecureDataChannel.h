/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSecureDataChannel : NSObject {
    id  _delegate;
    unsigned int  _localCallID;
    unsigned long long  _maxUDPPayloadSize;
    unsigned int  _remoteCallID;
    VCTransport * _transport;
    struct _tls_record_s { } * tlsRecord;
}

@property (nonatomic) <VCSecureDataChannelDelegate> *delegate;
@property (nonatomic, readonly) long long maxEncryptedDataSize;
@property (nonatomic) unsigned long long maxUDPPayloadSize;
@property (nonatomic, readonly) long long maxUnencryptedDataSize;

- (int)convertData:(id)arg1 toEncryptedData:(id*)arg2 encrypted:(bool)arg3;
- (int)convertEncryptedData:(id)arg1 toData:(id*)arg2 encrypted:(bool)arg3;
- (void)dealloc;
- (id)delegate;
- (id)initWithLocalCallID:(unsigned int)arg1 remoteCallID:(unsigned int)arg2 isCaller:(bool)arg3 sharedSecret:(id)arg4 error:(id*)arg5;
- (long long)maxEncryptedDataSize;
- (unsigned long long)maxUDPPayloadSize;
- (long long)maxUnencryptedDataSize;
- (int)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setMaxUDPPayloadSize:(unsigned long long)arg1;
- (int)setupWithSharedSecret:(id)arg1 isCaller:(bool)arg2 error:(id*)arg3;

@end
