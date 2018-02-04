/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSLegaleseFetchOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    NSURL * _endpointURL;
    long long  _format;
    int  _requestCompletionFlag;
    VSOptional * _result;
    SSRequest * _storeServicesRequest;
}

@property (nonatomic, retain) VSAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSURL *endpointURL;
@property (nonatomic, readonly) long long format;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) SSRequest *storeServicesRequest;

- (void).cxx_destruct;
- (void)_finishWithData:(id)arg1 orError:(id)arg2;
- (void)_finishWithResponse:(id)arg1;
- (bool)_isFirstToFinish;
- (id)auditToken;
- (void)cancel;
- (id)endpointURL;
- (void)executionDidBegin;
- (long long)format;
- (id)init;
- (id)initWithFormat:(long long)arg1 endpointURL:(id)arg2;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setStoreServicesRequest:(id)arg1;
- (id)storeServicesRequest;

@end
