/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADBackgroundTaskScheduler : ADSingleton

+ (void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2;
+ (id)sharedInstance;
+ (void)unregisterTaskDelegate:(id)arg1;

- (void)addBackgroundTask:(id)arg1;
- (void)cancelBackgroundTask:(id)arg1;
- (void)checkOnTask:(id)arg1;
- (void)handleXPCActivity:(id)arg1 withID:(id)arg2;
- (id)init;

@end
