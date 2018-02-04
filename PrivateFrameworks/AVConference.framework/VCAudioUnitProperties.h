/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioUnitProperties : NSObject {
    bool  _allowAudioRecording;
    unsigned int  _audioUnitType;
    int  _deviceRole;
    struct VoiceIOFarEndVersionInfo { 
        unsigned char farEndHwModel[64]; 
        unsigned char farEndOSVersion[64]; 
        unsigned int farEndAUVersion; 
    }  _farEndVersionInfo;
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
    }  _format;
    bool  _isFarEndVersionInfoValid;
    int  _operatingMode;
    double  _remoteCodecSampleRate;
    unsigned int  _remoteCodecType;
    unsigned int  _samplesPerFrame;
    unsigned int  _vpOperatingMode;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic) unsigned int audioUnitType;
@property (nonatomic) int deviceRole;
@property (nonatomic) struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; } farEndVersionInfo;
@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } format;
@property (nonatomic, readonly) bool isFarEndVersionInfoValid;
@property (nonatomic) int operatingMode;
@property (nonatomic) double remoteCodecSampleRate;
@property (nonatomic) unsigned int remoteCodecType;
@property (nonatomic) unsigned int samplesPerFrame;
@property (nonatomic) unsigned int vpOperatingMode;

- (bool)allowAudioRecording;
- (unsigned int)audioUnitType;
- (id)description;
- (int)deviceRole;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })farEndVersionInfo;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })format;
- (bool)isFarEndVersionInfoValid;
- (int)operatingMode;
- (double)remoteCodecSampleRate;
- (unsigned int)remoteCodecType;
- (unsigned int)samplesPerFrame;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAudioUnitType:(unsigned int)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })arg1;
- (void)setFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setRemoteCodecSampleRate:(double)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1;
- (void)setSamplesPerFrame:(unsigned int)arg1;
- (void)setVpOperatingMode:(unsigned int)arg1;
- (unsigned int)vpOperatingMode;

@end
