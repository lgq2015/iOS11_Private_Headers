/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAssetClusteringVideoSegment : NSObject <MiroMediaItem, NSCopying> {
    double  _duration;
    float  _frameRate;
    MiroMetadataRange * _sourceRange;
    double  _startTime;
    MiroMetadataRange * _trimRange;
    PHAsset * _videoAsset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) float frameRate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double rangeScore;
@property (nonatomic, retain) MiroMetadataRange *sourceRange;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) MiroMetadataRange *trimRange;
@property (nonatomic, retain) PHAsset *videoAsset;

+ (id)videoSegmentFromAsset:(id)arg1 starting:(double)arg2 duration:(double)arg3;

- (void).cxx_destruct;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (double)duration;
- (float)frameRate;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (double)rangeScore;
- (id)rangeScoreExplanation;
- (void)setDuration:(double)arg1;
- (void)setFrameRate:(float)arg1;
- (void)setSourceRange:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTrimRange:(id)arg1;
- (void)setVideoAsset:(id)arg1;
- (id)sourceRange;
- (double)startTime;
- (id)trimRange;
- (id)videoAsset;

@end
