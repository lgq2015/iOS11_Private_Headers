/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation {
    ICSecureKeyDeliveryRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) ICSecureKeyDeliveryRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
