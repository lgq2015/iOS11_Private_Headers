/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDatabaseVacuum : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _timer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSTimer *timer;

+ (id)activeVacuum;
+ (id)activeVacuumQueue;
+ (id)lastVacuumDate;
+ (void)setActiveVacuum:(id)arg1;
+ (void)setLastVacuumDate:(id)arg1;
+ (void)startDatabaseVacuumPolicy;

- (void).cxx_destruct;
- (id)init;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)startDatabaseVacuumPolicy;
- (void)stopDatabaseVacuumPolicy;
- (id)timer;
- (void)timerFired:(id)arg1;
- (void)vacuum;

@end
