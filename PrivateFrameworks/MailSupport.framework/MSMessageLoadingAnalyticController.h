/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSMessageLoadingAnalyticController : NSObject {
    MSDiagnosticManager * _diagnosticManager;
    id /* block */  _endedRecordingHandler;
    unsigned long long  _maxLoadingTimeSeconds;
    NSMutableDictionary * _messageLoadTimes;
    NSObject<OS_dispatch_queue> * _serialMessageLoadingTimerQueue;
    id /* block */  _startedRecordingHandler;
}

@property (nonatomic, retain) MSDiagnosticManager *diagnosticManager;
@property (nonatomic, copy) id /* block */ endedRecordingHandler;
@property (nonatomic) unsigned long long maxLoadingTimeSeconds;
@property (nonatomic, readonly, copy) NSDictionary *messageLoadTimes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue;
@property (nonatomic, copy) id /* block */ startedRecordingHandler;

- (void).cxx_destruct;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1;
- (void)_commonInitWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;
- (void)_endRecordingForMessage:(id)arg1;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1;
- (void)_startTimeoutForMessage:(id)arg1;
- (id)diagnosticManager;
- (void)endAllRecording;
- (void)endRecordingForMessage:(id)arg1;
- (id /* block */)endedRecordingHandler;
- (id)initWithDiagnosticManager:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;
- (unsigned long long)maxLoadingTimeSeconds;
- (id)messageLoadTimes;
- (id)serialMessageLoadingTimerQueue;
- (void)setDiagnosticManager:(id)arg1;
- (void)setEndedRecordingHandler:(id /* block */)arg1;
- (void)setMaxLoadingTimeSeconds:(unsigned long long)arg1;
- (void)setSerialMessageLoadingTimerQueue:(id)arg1;
- (void)setStartedRecordingHandler:(id /* block */)arg1;
- (void)startRecordingForMessage:(id)arg1;
- (id /* block */)startedRecordingHandler;

@end
