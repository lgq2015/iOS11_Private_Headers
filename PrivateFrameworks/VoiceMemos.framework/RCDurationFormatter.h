/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCDurationFormatter : NSObject {
    NSNumberFormatter * _defaultFormatter;
    NSNumberFormatter * _nonPaddedHourFormatter;
    NSMutableDictionary * _positionalParameterFormatStrings;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1;
+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1;
+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1;
+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)_onQueuePositionalFormatStringForStyle:(long long)arg1;
- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3;
- (id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)reloadLocalizedFormatStrings;
- (id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3;
- (id)stringFromDuration:(double)arg1 style:(long long)arg2;

@end
