/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataXPCSession : NSObject <GEODataSession> {
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    GEODataXPCSessionTaskQueue * _taskQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEODataXPCSessionTaskQueue *taskQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConnectionManager:(id)arg1;
- (void)restartTask:(id)arg1;
- (id)sessionIsolation;
- (void)startTask:(id)arg1;
- (id)taskQueue;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

@end
