/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertSystemSoundController : NSObject <TLAlertPlaybackBackEndController, TLBacklightObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    NSMapTable * _alertSystemSoundContexts;
    unsigned long long  _backlightObservationRequestsCount;
    long long  _backlightStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned int)_componentSuppressionFlagsForAlert:(id)arg1;
+ (id)_descriptionForAlertComponentsSuppressionFlags:(unsigned int)arg1;
+ (id)_optionsForSystemSoundAlert:(id)arg1;
+ (void)_reportPlaybackFailureWithPlaybackCompletionContext:(id)arg1;
+ (unsigned int)_soundBehaviorForAlert:(id)arg1;
+ (id)_soundForAlert:(id)arg1 toneIdentifierForDeemphasizingAlert:(id)arg2;
+ (id)_toneIdentifierForDeemphasizingAlert:(id)arg1;
+ (id)_vibrationPatternForAlert:(id)arg1;

- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (void)_beginRequiringBacklightObservation;
- (void)_didCompletePlaybackForAlert:(id)arg1;
- (void)_endRequiringBacklightObservation;
- (void)_notifyOfPlaybackCompletionWithContext:(id)arg1;
- (void)_performBlockOnAccessQueue:(id /* block */)arg1;
- (void)_playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_playAlert:(id)arg1 withSoundID:(unsigned int)arg2;
- (void)_prepareForDealloc;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_willBeginPlayingAlert:(id)arg1 withSoundID:(unsigned int)arg2;
- (void)backlightStatusDidChange:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id /* block */)arg4;

@end
