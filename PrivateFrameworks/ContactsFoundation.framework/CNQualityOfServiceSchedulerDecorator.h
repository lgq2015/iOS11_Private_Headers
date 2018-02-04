/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNQualityOfServiceSchedulerDecorator : NSObject <CNScheduler> {
    unsigned long long  _qualityOfService;
    <CNScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long qualityOfService;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (id)initWithScheduler:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (unsigned long long)qualityOfService;
- (id)scheduler;
- (double)timestamp;

@end
