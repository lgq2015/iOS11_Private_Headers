/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASAAudioFormat : NSObject {
    unsigned int  _bitsPerChannel;
    unsigned int  _bytesPerFrame;
    unsigned int  _bytesPerPacket;
    unsigned int  _channelsPerFrame;
    unsigned int  _formatFlags;
    unsigned int  _formatID;
    unsigned int  _framesPerPacket;
    double  _maximumSampleRate;
    double  _minimumSampleRate;
    double  _sampleRate;
}

@property (nonatomic) unsigned int bitsPerChannel;
@property (nonatomic) unsigned int bytesPerFrame;
@property (nonatomic) unsigned int bytesPerPacket;
@property (nonatomic) unsigned int channelsPerFrame;
@property (nonatomic) unsigned int formatFlags;
@property (nonatomic) unsigned int formatID;
@property (nonatomic) unsigned int framesPerPacket;
@property (nonatomic) double maximumSampleRate;
@property (nonatomic) double minimumSampleRate;
@property (nonatomic) double sampleRate;

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioStreamBasicDescription;
- (struct AudioStreamRangedDescription { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioValueRange { double x_2_1_1; double x_2_1_2; } x2; })audioStreamRangedDescription;
- (unsigned int)bitsPerChannel;
- (unsigned int)bytesPerFrame;
- (unsigned int)bytesPerPacket;
- (unsigned int)channelsPerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)formatFlags;
- (unsigned int)formatID;
- (unsigned int)framesPerPacket;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (id)initWithAudioStreamRangedDescription:(struct AudioStreamRangedDescription { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioValueRange { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (double)maximumSampleRate;
- (double)minimumSampleRate;
- (double)sampleRate;
- (void)setBitsPerChannel:(unsigned int)arg1;
- (void)setBytesPerFrame:(unsigned int)arg1;
- (void)setBytesPerPacket:(unsigned int)arg1;
- (void)setChannelsPerFrame:(unsigned int)arg1;
- (void)setFormatFlags:(unsigned int)arg1;
- (void)setFormatID:(unsigned int)arg1;
- (void)setFramesPerPacket:(unsigned int)arg1;
- (void)setMaximumSampleRate:(double)arg1;
- (void)setMinimumSampleRate:(double)arg1;
- (void)setSampleRate:(double)arg1;

@end
