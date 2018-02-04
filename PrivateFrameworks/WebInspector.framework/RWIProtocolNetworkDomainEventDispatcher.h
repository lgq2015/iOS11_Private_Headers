/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

- (void)dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(bool*)arg4;
- (void)loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id*)arg3 metrics:(id*)arg4;
- (void)requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7;
- (void)requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 initiator:(id)arg7 redirectResponse:(id*)arg8 type:(long long*)arg9 targetId:(id*)arg10;
- (void)responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6;
- (void)webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2;
- (void)webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2;
- (void)webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3;
- (void)webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 walltime:(double)arg3 request:(id)arg4;

@end
