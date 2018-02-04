/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {
    NSArray * _moreInfoURLs;
    NSURL * _passURL;
    bool  _willProvisionWithAuthenticationDisabled;
}

@property (nonatomic, readonly, copy) NSArray *moreInfoURLs;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, readonly) bool willProvisionWithAuthenticationDisabled;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)moreInfoURLs;
- (id)passURL;
- (void)setPassURL:(id)arg1;
- (bool)willProvisionWithAuthenticationDisabled;

@end
