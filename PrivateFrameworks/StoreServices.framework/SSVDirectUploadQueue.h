/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVDirectUploadQueue : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    int  _daemonLaunchToken;
    SSXPCConnection * _inboundConnection;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    SSXPCConnection * _outboundConnection;
    NSArray * _uploadKinds;
    NSMutableArray * _uploads;
}

@property (readonly, copy) NSArray *uploadKinds;

- (void).cxx_destruct;
- (void)_establishInboundConnection;
- (void)_handleAddUploadsMessage:(id)arg1;
- (void)_handleChangeUploadsMessage:(id)arg1;
- (void)_handleInboundMessage:(id)arg1 connection:(id)arg2;
- (void)_handleRemoveUploadsMessage:(id)arg1;
- (id)_outboundConnection;
- (void)_sendObserversUploadsDidChange;
- (void)_sendSimpleMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addUploadObserver:(id)arg1;
- (void)cancelAllUploadsWithCompletionBlock:(id /* block */)arg1;
- (void)cancelUploads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)getUploadsWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithUploadKinds:(id)arg1;
- (void)pauseAllUploadsWithCompletionBlock:(id /* block */)arg1;
- (void)pauseUploads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)removeUploadObserver:(id)arg1;
- (void)resumeAllUploadsWithCompletionBlock:(id /* block */)arg1;
- (void)resumeUploads:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)uploadKinds;

@end
