/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentNonceResponse : PKPaymentWebServiceResponse {
    NSData * _nonceData;
}

@property (nonatomic, copy) NSData *nonceData;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)nonceData;
- (void)setNonceData:(id)arg1;

@end
