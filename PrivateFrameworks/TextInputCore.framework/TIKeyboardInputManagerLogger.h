/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging> {
    NSString * _inputModeIdentifier;
    TITypologyLog * _typologyLog;
    TITypologyStatistic * _typologyStatistic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inputModeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) TITypologyLog *typologyLog;
@property (nonatomic, retain) TITypologyStatistic *typologyStatistic;

+ (id)generateStructuredDataReportForTypologyLog:(id)arg1;
+ (void)pruneTypologyLogsToMaxNumBytes:(long long)arg1 satisfyingPredicate:(id /* block */)arg2;
+ (bool)shouldSubmitStructuredDataReportForTypologyLog:(id)arg1;
+ (void)submitAggregrateDictionaryReport:(id)arg1 inputModeIdentifier:(id)arg2;
+ (void)submitStructuredDataReportForTypologyLog:(id)arg1;
+ (void)writeHumanReadableTraceForTypologyLog:(id)arg1;
+ (id)writePropertyList:(id)arg1 withFilename:(id)arg2;
+ (id)writeToFileWithTypologyLog:(id)arg1;

- (void)backgroundWriteLogsAndSubmitReport;
- (void)dealloc;
- (void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg1;
- (id)init;
- (id)inputModeIdentifier;
- (void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2;
- (void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2;
- (void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3;
- (void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(bool)arg2 granularity:(int)arg3 keyboardState:(id)arg4;
- (void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2;
- (void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4;
- (void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4;
- (void)logReceivedCandidateRejected:(id)arg1;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (void)logReceivedSetOriginalInput:(id)arg1;
- (void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2;
- (void)logReceivedTextAccepted:(id)arg1;
- (void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3;
- (void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3;
- (void)logToHumanReadableTrace:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setInputModeIdentifier:(id)arg1;
- (void)setTypologyLog:(id)arg1;
- (void)setTypologyStatistic:(id)arg1;
- (bool)shouldWriteToSyslogForKeyboardState:(id)arg1;
- (bool)shouldWriteToTypologyLogForKeyboardState:(id)arg1;
- (id)typologyLog;
- (id)typologyStatistic;
- (id)writeToFile;

@end
