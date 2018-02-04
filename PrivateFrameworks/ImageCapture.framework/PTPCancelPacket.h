/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCancelPacket : NSObject {
    unsigned int  _transactionID;
}

- (id)contentForTCP;
- (id)description;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithTransactionID:(unsigned int)arg1;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;

@end
