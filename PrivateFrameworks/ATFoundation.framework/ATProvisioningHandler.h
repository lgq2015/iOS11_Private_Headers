/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {
    int  _endpointType;
    NSString * _expectedRequestCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_paramsForRequest:(id)arg1;
- (void)_processProvisioningRequest:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_processProvisioningResponse:(id)arg1 toCommand:(id)arg2 onMessageLink:(id)arg3;
- (void)_processProvisioningResponse:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_sendProvisioningRequest:(id)arg1 OnMessageLink:(id)arg2;
- (id)initAsEndpointType:(int)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasOpened:(id)arg1;

@end
