/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioPayload : NSObject {
    unsigned int  _bitrate;
    VCAudioPayloadConfig * _config;
    struct SoundDec_t { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; int x3; int x4; struct OpaqueAudioConverter {} *x5; char *x6; int x7; struct AudioStreamPacketDescription { long long x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct AudioBufferList {} *x9; struct AudioBufferList {} *x10; char *x11; char *x12; int x13; int x14; int x15; int x16; unsigned char x17; int x18; int x19; unsigned int x20; unsigned int x21; } * _encoder;
    bool  _shouldReset;
}

@property (nonatomic, readonly) unsigned int bitrate;
@property (nonatomic, readonly) VCAudioPayloadConfig *config;

- (unsigned int)bitrate;
- (id)config;
- (bool)createEncoderWithInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)dealloc;
- (id)description;
- (int)encodeAudio:(struct opaqueVCAudioBufferList { }*)arg1 numInputSamples:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4;
- (bool)getMagicCookie:(char *)arg1 withLength:(unsigned int*)arg2;
- (id)initWithConfig:(id)arg1;
- (bool)isDTXEmptyPacket:(unsigned int)arg1;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;
- (bool)setBitrate:(unsigned int)arg1;

@end
