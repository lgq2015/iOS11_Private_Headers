/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    int  _SecCMSError;
    struct SecCmsDigestContextStr { } * _digest;
    struct SecCmsEnvelopedDataStr { } * _envelopedData;
    bool  _isEncrypted;
    struct SecCmsMessageStr { } * _message;
    struct SecCmsSignedDataStr { } * _signedData;
    NSArray * _signers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int lastSecCMSError;
@property (nonatomic, readonly) NSArray *signers;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithPartData:(id)arg1 error:(id*)arg2;
- (bool)isContentEncrypted;
- (bool)isContentSigned;
- (int)lastSecCMSError;
- (id)signedData;
- (id)signers;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id*)arg2;

@end
