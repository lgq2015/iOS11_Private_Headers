/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPGaplessInfo : NSObject {
    unsigned long long  _durationInFrames;
    unsigned int  _encodingDelayInFrames;
    unsigned int  _encodingDrainInFrames;
    unsigned int  _heuristicInfo;
    unsigned long long  _lastPacketsResync;
}

@property (nonatomic) unsigned long long durationInFrames;
@property (nonatomic) unsigned int encodingDelayInFrames;
@property (nonatomic) unsigned int encodingDrainInFrames;
@property (nonatomic) unsigned int heuristicInfo;
@property (nonatomic) unsigned long long lastPacketsResync;

- (unsigned long long)durationInFrames;
- (unsigned int)encodingDelayInFrames;
- (unsigned int)encodingDrainInFrames;
- (unsigned int)heuristicInfo;
- (unsigned long long)lastPacketsResync;
- (void)setDurationInFrames:(unsigned long long)arg1;
- (void)setEncodingDelayInFrames:(unsigned int)arg1;
- (void)setEncodingDrainInFrames:(unsigned int)arg1;
- (void)setHeuristicInfo:(unsigned int)arg1;
- (void)setLastPacketsResync:(unsigned long long)arg1;

@end
