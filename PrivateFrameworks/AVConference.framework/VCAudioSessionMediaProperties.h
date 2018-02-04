/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioSessionMediaProperties : NSObject {
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
    }  _inputFormat;
    int  _operatingMode;
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
    }  _outputFormat;
    double  _preferredBlockSize;
    double  _preferredSampleRate;
    int  _processId;
    bool  _sessionActive;
    unsigned int  _vpOperatingMode;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } inputFormat;
@property (nonatomic) int operatingMode;
@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } outputFormat;
@property (nonatomic) double preferredBlockSize;
@property (nonatomic) double preferredSampleRate;
@property (nonatomic) int processId;
@property (getter=isSessionActive, nonatomic) bool sessionActive;
@property (nonatomic) unsigned int vpOperatingMode;

- (id)description;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })inputFormat;
- (bool)isEqual:(id)arg1;
- (bool)isSessionActive;
- (int)operatingMode;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })outputFormat;
- (double)preferredBlockSize;
- (double)preferredSampleRate;
- (int)processId;
- (void)setInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setOutputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setPreferredBlockSize:(double)arg1;
- (void)setPreferredSampleRate:(double)arg1;
- (void)setProcessId:(int)arg1;
- (void)setSessionActive:(bool)arg1;
- (void)setVpOperatingMode:(unsigned int)arg1;
- (unsigned int)vpOperatingMode;

@end
