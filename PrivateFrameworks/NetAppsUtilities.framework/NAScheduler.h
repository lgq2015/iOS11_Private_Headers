/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NAScheduler : NSObject

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1;
+ (id)schedulerWithDispatchQueue:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;

@end
