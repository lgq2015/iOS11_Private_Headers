/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKValueAddedServiceWebService : NSObject <NSURLConnectionDataDelegate> {
    NSDictionary * _merchantPayload;
    PKPass * _pass;
    NSURLSession * _urlSession;
    PKValueAddedServiceTransaction * _valueAddedTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *merchantPayload;
@property (nonatomic, readonly) PKPass *pass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)downloadMerchantPayloadWithCompletion:(id /* block */)arg1;
- (void)downloadPassWithCompletion:(id /* block */)arg1;
- (id)initWithValueAddedServiceTransaction:(id)arg1;
- (id)merchantPayload;
- (id)pass;

@end
