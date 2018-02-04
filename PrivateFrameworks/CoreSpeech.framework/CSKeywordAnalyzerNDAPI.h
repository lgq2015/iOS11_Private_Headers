/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSKeywordAnalyzerNDAPI : NSObject {
    unsigned long long  _activeChannel;
    unsigned int  _activePhraseId;
    <CSKeywordAnalyzerNDAPIScoreDelegate> * _delegate;
    bool  _isStartSampleCountMarked;
    unsigned long long  _lastSampleFed;
    CSNovDetector * _novDetector;
    unsigned long long  _sampleFedWrapAroundOffset;
    unsigned long long  _startAnalyzeSampleCount;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhraseId;
@property (nonatomic) <CSKeywordAnalyzerNDAPIScoreDelegate> *delegate;

- (void).cxx_destruct;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (unsigned long long)activeChannel;
- (unsigned int)activePhraseId;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)delegate;
- (id)getAnalyzedResult;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)reset;
- (void)resetBest;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setActivePhraseId:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;

@end
