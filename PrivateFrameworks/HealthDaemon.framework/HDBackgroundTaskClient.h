/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBackgroundTaskClient : NSObject {
    id /* block */  _taskHandler;
}

- (void).cxx_destruct;
- (void)deliverTask:(id)arg1 taskName:(id)arg2 onQueue:(id)arg3;
- (id)initWithTaskHandler:(id /* block */)arg1;

@end
