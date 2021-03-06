/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFRemoteRequestWatcher : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _requestHandler;
    int  _requestToken;
    id /* block */  _speechRequestHandler;
    int  _speechRequestToken;
}

- (void).cxx_destruct;
- (void)_setupRequestListener;
- (void)_setupSpeechRequestListener;
- (void)dealloc;
- (id)init;
- (void)setNewRequestHandler:(id /* block */)arg1;
- (void)setNewSpeechRequestHandler:(id /* block */)arg1;

@end
