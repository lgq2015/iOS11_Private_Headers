/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSNovDetector : NSObject {
    void * _novDetect;
}

- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)dealloc;
- (id)getAnalyzedResultForPhraseId:(unsigned int)arg1;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)reset;
- (void)resetBest;

@end
