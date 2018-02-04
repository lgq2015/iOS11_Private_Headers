/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
 */

@interface APRAppPreferenceClient : NSObject <APRAppPreferenceInterface> {
    NSXPCConnection * _xpcConnection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 reply:(id /* block */)arg4;
- (void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 reply:(id /* block */)arg3;
- (void)getAppPredictionsForIntent:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)prewarmWithReply:(id /* block */)arg1;
- (void)sendFeedbackForIntent:(id)arg1 aprResponse:(id)arg2;

@end
