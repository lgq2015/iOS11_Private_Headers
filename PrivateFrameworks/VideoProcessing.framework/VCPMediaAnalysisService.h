/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSObject<OS_dispatch_queue> * _managementQueue;
    int  _nextRequestID;
    NSMutableDictionary * _progressBlocks;
}

+ (id)errorWithDescription:(id)arg1;
+ (id)sharedAnalysisService;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)cancelRequest:(int)arg1;
- (id)connection;
- (id)init;
- (void)invalidate;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(bool)arg2 progessHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
