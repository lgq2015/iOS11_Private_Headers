/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSATasking : NSObject

+ (id)applyTasking:(id)arg1 taskId:(id)arg2 fromBlob:(id)arg3;
+ (void)checkTaskingRelevance;
+ (id)getAvailableTaskingRoutings;
+ (id)getDefaultTasking;
+ (id)getInstalledTaskIds;
+ (void)initialize;
+ (id)normalizeInstructions:(id)arg1;
+ (bool)preference:(id)arg1 alreadySetInInstructions:(id)arg2;
+ (void)proxyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4;
+ (id)selectConfigFromBlob:(id)arg1;
+ (void)setCRKeyToRandomValue;
+ (bool)shouldApplyPreference:(id)arg1;

@end
