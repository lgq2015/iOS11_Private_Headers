/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmCache : NSObject {
    bool  _needsUpdate;
    MTAlarm * _nextAlarm;
    NSMutableArray * _orderedAlarms;
    <NAScheduler> * _serializer;
    MTAlarm * _sleepAlarm;
    id /* block */  _updateBlock;
}

@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) MTAlarm *nextAlarm;
@property (nonatomic, retain) NSMutableArray *orderedAlarms;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) MTAlarm *sleepAlarm;
@property (nonatomic, copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (void)getCachedAlarmsWithCompletion:(id /* block */)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)markNeedsUpdate;
- (bool)needsUpdate;
- (id)nextAlarm;
- (id)orderedAlarms;
- (id)serializer;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setNextAlarm:(id)arg1;
- (void)setOrderedAlarms:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id)sleepAlarm;
- (id /* block */)updateBlock;

@end
