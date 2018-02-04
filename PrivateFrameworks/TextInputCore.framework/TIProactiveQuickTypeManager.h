/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIProactiveQuickTypeManager : NSObject <TIProactiveQuickTypeManaging> {
    <_ICPredictionManaging> * _inputContextManager;
    NSDate * _lastSuggestionTime;
    TIProactiveTrigger * _lastTriggerForSuggestion;
    NSString * _maxLengthProactiveCandidate;
    unsigned long long  _textBeforeLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buildSecureCandidateForTestFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;
+ (id)buildSecureCandidateFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;
+ (id)proactiveTriggerForTextContentType:(id)arg1;
+ (void)setSharedTIProactiveQuickTypeManager:(id)arg1;
+ (id)sharedTIProactiveQuickTypeManager;
+ (id)singletonInstance;

- (void)addToTypologyTrace:(id /* block */)arg1 withTriggerSource:(id)arg2 withTriggerType:(id)arg3 withTriggerSubType:(id)arg4 withPredictionResults:(id)arg5 withFirstTrigger:(id)arg6;
- (void)dealloc;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(id /* block */)arg11;
- (id)getLastSuggestionTime;
- (id)getMeCardEmailAddresses;
- (id)init;
- (id)initWithICManager:(id)arg1;
- (bool)isAutoCompleteEnabled;
- (bool)isAutoPopupEnabled;
- (bool)isEnabled;
- (void)loggingProactiveEngagementMetric:(unsigned long long)arg1 withLocale:(id)arg2 fieldType:(id)arg3;
- (unsigned long long)matchProactiveCandidateToUserInput:(id)arg1 userInput:(id)arg2;
- (id)renderItems:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5;
- (void)reset;
- (void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
- (void)suggestionNotAccepted:(id)arg1;
- (void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;

@end
