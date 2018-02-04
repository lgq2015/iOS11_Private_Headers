/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface _NAImmediateScheduler : NSObject <NAScheduler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;

@end
