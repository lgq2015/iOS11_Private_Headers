/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSoundPlayer : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    TURepeatingActor * _repeatingActor;
    unsigned int  _soundID;
}

@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) TURepeatingActor *repeatingActor;
@property (nonatomic) unsigned int soundID;

- (void).cxx_destruct;
- (id)init;
- (bool)isPlaying;
- (void)playSound:(unsigned int)arg1;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(id /* block */)arg4;
- (void)playSoundIndefinitely:(unsigned int)arg1 pauseDurationBetweenIterations:(double)arg2;
- (id)queue;
- (id)repeatingActor;
- (void)setQueue:(id)arg1;
- (void)setRepeatingActor:(id)arg1;
- (void)setSoundID:(unsigned int)arg1;
- (unsigned int)soundID;
- (void)stopPlaying;

@end
