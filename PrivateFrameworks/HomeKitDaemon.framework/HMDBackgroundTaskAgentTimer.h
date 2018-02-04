/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackgroundTaskAgentTimer : NSObject <HMFLogging> {
    NSString * _timerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timerID;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_startTimer:(id)arg1 home:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_stopTimer:(id /* block */)arg1;
- (id)description;
- (id)initWithTimerID:(id)arg1;
- (id)logIdentifier;
- (id)timerID;

@end
