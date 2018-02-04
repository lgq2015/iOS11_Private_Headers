/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMScheduler : NSObject

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)schedulerWithDispatchQueue:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;

@end
