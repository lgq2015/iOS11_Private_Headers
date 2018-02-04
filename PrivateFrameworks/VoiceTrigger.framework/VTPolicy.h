/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPolicy : NSObject <VTEventMonitorDelegate> {
    id /* block */  _callback;
    NSMutableArray * _conditions;
    NSMutableArray * _monitors;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultVoiceTriggerEnablePolicy;

- (void).cxx_destruct;
- (void)VTEventMonitorDidReceiveEvent:(id)arg1;
- (bool)_checkAllConditionsEnabled;
- (void)addConditions:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEnabled;
- (void)notifyCallback:(bool)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)subscribeEventMonitor:(id)arg1;

@end
