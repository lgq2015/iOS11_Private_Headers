/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXTapticTimeManager : NSObject {
    NSDate * _dateOverride;
    NSMutableArray * _enqueuedSoundDelays;
    NSMutableArray * _enqueuedSounds;
    bool  _is24Hour;
    NSLocale * _localeOverride;
    id /* block */  _queueCallback;
    NSMutableDictionary * _soundToPatterns;
    unsigned int  _ssIDHapticFast;
    unsigned int  _ssIDHapticMorse;
    unsigned int  _ssIDHapticSlow;
}

@property (nonatomic, retain) NSDate *dateOverride;
@property (nonatomic, retain) NSLocale *localeOverride;
@property (nonatomic, copy) id /* block */ queueCallback;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_atomToLegacyVibePattern:(id)arg1;
- (void)_clearQueue;
- (id)_convertSoundToStringName:(unsigned int)arg1;
- (id)_dateComponentsForClockTime;
- (void)_dequeueSound;
- (void)_enqueueHours:(unsigned long long)arg1 encoding:(long long)arg2;
- (void)_enqueueMinutes:(unsigned long long)arg1 encoding:(long long)arg2;
- (void)_handleTestingQueueCallback;
- (bool)_is24HourTime;
- (void)_localeDidChange:(id)arg1;
- (long long)_numberOfTapHoursForClockTime;
- (long long)_numberOfTapMinutesForClockTime;
- (long long)_numberOfTapsForHourNumber:(long long)arg1;
- (void)_updateIs24HourTime;
- (id)dateOverride;
- (void)dealloc;
- (id)init;
- (id)localeOverride;
- (void)outputHours:(long long)arg1;
- (void)outputHoursAndMinutes:(long long)arg1;
- (void)outputMinutes:(long long)arg1;
- (id /* block */)queueCallback;
- (void)setDateOverride:(id)arg1;
- (void)setLocaleOverride:(id)arg1;
- (void)setQueueCallback:(id /* block */)arg1;

@end
