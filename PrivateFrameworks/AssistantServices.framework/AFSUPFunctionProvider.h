/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {
    NSDateFormatter * _dateFormatter;
    NSDateFormatter * _timeFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldAutomaticallyProvideFunctions;

- (void).cxx_destruct;
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;
- (id)_currentLongDate:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentTime:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (id)_deviceModel;
- (id)_lowercaseString:(id)arg1;
- (id)_siriUsageDescription:(id)arg1;
- (id)_speechRecognitionUsageDescription:(id)arg1;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)stringForExpression:(id)arg1;

@end
