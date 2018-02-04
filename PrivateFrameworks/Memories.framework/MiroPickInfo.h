/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPickInfo : NSObject <NSCopying> {
    unsigned long long  _clipCompareResultFlags;
    float  _distance;
    float  _imageDistance;
    <MiroMediaItem> * _item;
    unsigned long long  _pickOrder;
    float  _score;
    unsigned long long  _sourceOrder;
    float  _splitDistance;
    unsigned long long  _splitOrder;
}

@property (nonatomic, readonly) double biasedDuration;
@property (nonatomic, readonly) unsigned long long clipCompareResultFlags;
@property (nonatomic) float distance;
@property (nonatomic, readonly) double idealDuration;
@property (nonatomic, readonly) double idealDurationWithTrim;
@property (nonatomic, readonly) float imageDistance;
@property (nonatomic, readonly) <MiroMediaItem> *item;
@property (nonatomic, readonly) double maxPleasantDuration;
@property (nonatomic) unsigned long long pickOrder;
@property (nonatomic) float score;
@property (nonatomic) unsigned long long sourceOrder;
@property (nonatomic) float splitDistance;
@property (nonatomic) unsigned long long splitOrder;

+ (id)pickInfoWithItem:(id)arg1 score:(float)arg2 distance:(float)arg3 splitDistance:(float)arg4 pickOrder:(unsigned long long)arg5 sourceOrder:(unsigned long long)arg6 splitOrder:(unsigned long long)arg7 imageDistance:(float)arg8 clipCompareResultFlags:(unsigned long long)arg9;

- (void).cxx_destruct;
- (double)_idealDurationForBlueprint:(id)arg1 biased:(bool)arg2 max:(bool)arg3;
- (float)_speedForVideoSegment:(id)arg1;
- (double)biasedDuration;
- (unsigned long long)clipCompareResultFlags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)distance;
- (double)idealDuration;
- (double)idealDurationForBlueprint:(id)arg1 biased:(bool)arg2 maxPleasant:(bool)arg3 respectTrim:(bool)arg4;
- (double)idealDurationForBlueprint:(id)arg1 respectTrim:(bool)arg2;
- (double)idealDurationWithTrim;
- (float)imageDistance;
- (id)item;
- (double)maxPleasantDuration;
- (unsigned long long)pickOrder;
- (float)score;
- (void)setDistance:(float)arg1;
- (void)setPickOrder:(unsigned long long)arg1;
- (void)setScore:(float)arg1;
- (void)setSourceOrder:(unsigned long long)arg1;
- (void)setSplitDistance:(float)arg1;
- (void)setSplitOrder:(unsigned long long)arg1;
- (unsigned long long)sourceOrder;
- (float)splitDistance;
- (unsigned long long)splitOrder;
- (double)trimmedDuration;
- (double)voiceRangeDuration;

@end
