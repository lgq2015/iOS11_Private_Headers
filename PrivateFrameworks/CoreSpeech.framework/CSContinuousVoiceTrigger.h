/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSContinuousVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate> {
    unsigned long long  _analyzedSampleCount;
    CSAsset * _currentAsset;
    <CSVoiceTriggerDelegate> * _delegate;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    float  _keywordThreshold;
    long long  _mode;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpeechManager * _speechManager;
    unsigned long long  _triggerEndSampleCount;
    unsigned long long  _twoShotDecisionWaitSamples;
    float  _twoShotThreshold;
}

@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long triggerEndSampleCount;
@property (nonatomic) unsigned long long twoShotDecisionWaitSamples;
@property (nonatomic) float twoShotThreshold;

- (void).cxx_destruct;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)_shotAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (unsigned long long)analyzedSampleCount;
- (id)currentAsset;
- (id)delegate;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (id)keywordAnalyzer;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (float)keywordThreshold;
- (long long)mode;
- (id)queue;
- (void)reset;
- (void)setAnalyzedSampleCount:(unsigned long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeywordAnalyzer:(id)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setMode:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setTriggerEndSampleCount:(unsigned long long)arg1;
- (void)setTwoShotDecisionWaitSamples:(unsigned long long)arg1;
- (void)setTwoShotThreshold:(float)arg1;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)startDetectTwoShot:(id)arg1;
- (unsigned long long)triggerEndSampleCount;
- (unsigned long long)twoShotDecisionWaitSamples;
- (float)twoShotThreshold;

@end
