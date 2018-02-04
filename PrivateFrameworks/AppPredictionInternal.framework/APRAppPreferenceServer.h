/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface APRAppPreferenceServer : NSObject <APRAppPreferenceInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 reply:(id /* block */)arg4;
- (void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)prewarmWithReply:(id /* block */)arg1;
- (void)sendFeedbackForIntent:(id)arg1 aprResponse:(id)arg2;

@end
