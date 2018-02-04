/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertContext : NSObject {
    bool  _beingInterrupted;
    long long  _playbackBackEnd;
    NSObject<OS_dispatch_source> * _timeoutTimerSource;
}

@property (getter=isBeingInterrupted, nonatomic) bool beingInterrupted;
@property (nonatomic) long long playbackBackEnd;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimerSource;

- (void).cxx_destruct;
- (bool)isBeingInterrupted;
- (long long)playbackBackEnd;
- (void)setBeingInterrupted:(bool)arg1;
- (void)setPlaybackBackEnd:(long long)arg1;
- (void)setTimeoutTimerSource:(id)arg1;
- (id)timeoutTimerSource;

@end
