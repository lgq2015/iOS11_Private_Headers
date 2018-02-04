/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximityBackupAction : SASProximityAction {
    NSDate * _completionDate;
    NSError * _error;
    bool  _finishedBackup;
    double  _percentComplete;
    bool  _shouldStartBackup;
    unsigned long long  _timeRemaining;
}

@property (retain) NSDate *completionDate;
@property (retain) NSError *error;
@property bool finishedBackup;
@property double percentComplete;
@property bool shouldStartBackup;
@property unsigned long long timeRemaining;

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)completionDate;
- (id)error;
- (bool)finishedBackup;
- (double)percentComplete;
- (id)requestPayload;
- (void)setCompletionDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishedBackup:(bool)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setShouldStartBackup:(bool)arg1;
- (void)setTimeRemaining:(unsigned long long)arg1;
- (bool)shouldStartBackup;
- (unsigned long long)timeRemaining;

@end
