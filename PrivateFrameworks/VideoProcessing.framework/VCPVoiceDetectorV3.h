/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVoiceDetectorV3 : VCPAudioAnalyzer {
    VCPEndPointDetector * _musicDetector;
    VCPEndPointDetector * _voiceDetector;
}

- (void).cxx_destruct;
- (id)audioFormatRequirements;
- (void)dealloc;
- (int)finalize:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (int)initializeAudioUnit:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (int)loadModel;
- (int)processAudioSamples;
- (int)sampleBatchSize:(double)arg1;

@end
