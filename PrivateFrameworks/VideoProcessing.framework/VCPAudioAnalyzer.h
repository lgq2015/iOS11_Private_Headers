/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPAudioAnalyzer : NSObject {
    struct AudioBufferList { 
        unsigned int mNumberBuffers; 
        struct AudioBuffer { 
            unsigned int mNumberChannels; 
            unsigned int mDataByteSize; 
            void *mData; 
        } mBuffers[1]; 
    }  _audioBufferList;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _audioStream;
    struct AudioTimeStamp { 
        double mSampleTime; 
        unsigned long long mHostTime; 
        double mRateScalar; 
        unsigned long long mWordClockTime; 
        struct SMPTETime { 
            short mSubframes; 
            short mSubframeDivisor; 
            unsigned int mCounter; 
            unsigned int mType; 
            unsigned int mFlags; 
            short mHours; 
            short mMinutes; 
            short mSeconds; 
            short mFrames; 
        } mSMPTETime; 
        unsigned int mFlags; 
        unsigned int mReserved; 
    }  _audioTimestamp;
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    int  _bufferedSamples;
    void * _inputBuffer;
    NSDictionary * _model;
    NSMutableArray * _musicDetections;
    int  _sampleBatchSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trackStart;
    NSMutableArray * _utteranceDetections;
    bool  _voiceActivity;
    NSMutableArray * _voiceDetections;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _voiceStart;
}

+ (id)voiceDetector;

- (void).cxx_destruct;
- (void)addDetectionFromTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 toTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 result:(id)arg3;
- (int)analyzeAsset:(id)arg1 cancel:(id /* block */)arg2 results:(id*)arg3;
- (id)audioFormatRequirements;
- (void)dealloc;
- (int)finalize:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)init;
- (int)initialize:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)initializeAudioUnit:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (int)loadModel;
- (int)processAudioSamples;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)sampleBatchSize:(double)arg1;

@end
