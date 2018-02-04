/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaStreamStats : NSObject {
    double  _lastRecordingTime;
    unsigned int  _maxBitrateKbps;
    unsigned short  _maxFrameDurationMillis;
    double  _maxFramerate;
    unsigned int  _minBitrateKbps;
    double  _minFramerate;
    struct tagHANDLE { int x1; } * _summerHandle;
}

@property (nonatomic, readonly) unsigned int bitrateKbps;
@property (nonatomic, readonly) double framerate;
@property (nonatomic) unsigned int maxBitrateKbps;
@property (nonatomic) unsigned short maxFrameDurationMillis;
@property (nonatomic) double maxFramerate;
@property (nonatomic) unsigned int minBitrateKbps;
@property (nonatomic) double minFramerate;

- (unsigned int)bitrateKbps;
- (void)dealloc;
- (double)framerate;
- (unsigned int)getBitrateKbpsSinceTime:(double)arg1;
- (double)getFramerateSinceTime:(double)arg1;
- (id)init;
- (unsigned int)maxBitrateKbps;
- (unsigned short)maxFrameDurationMillis;
- (double)maxFramerate;
- (unsigned int)minBitrateKbps;
- (double)minFramerate;
- (void)recordDataWithSize:(double)arg1 atTime:(double)arg2;
- (void)setMaxBitrateKbps:(unsigned int)arg1;
- (void)setMaxFrameDurationMillis:(unsigned short)arg1;
- (void)setMaxFramerate:(double)arg1;
- (void)setMinBitrateKbps:(unsigned int)arg1;
- (void)setMinFramerate:(double)arg1;
- (void)updateMinMaxSinceTime:(double)arg1;

@end
