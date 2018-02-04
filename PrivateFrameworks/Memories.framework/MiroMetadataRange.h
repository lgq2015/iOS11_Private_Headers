/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMetadataRange : NSObject {
    NSDictionary * _analysisDict;
    NSArray * _childRanges;
    int  _durationInFrames;
    unsigned long long  _flags;
    unsigned long long  _rating;
    double  _score;
    int  _startTimeInFrames;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSDictionary *analysisDict;
@property (nonatomic, retain) NSArray *childRanges;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) int durationInFrames;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long rating;
@property (nonatomic) double score;
@property (nonatomic) int startTimeInFrames;
@property (nonatomic) unsigned long long type;

+ (id)descriptionForFlags:(unsigned long long)arg1;
+ (id)descriptionForType:(unsigned long long)arg1;
+ (void)enumerateByAscendingTypes:(id)arg1 handler:(id /* block */)arg2;
+ (id)mergeRanges:(id)arg1 withRanges:(id)arg2;
+ (void)miro_computeAndSetStaticScoreWithFlags:(unsigned long long)arg1 forRanges:(id)arg2;
+ (double)miro_computeStaticScoreWithFlags:(unsigned long long)arg1;
+ (id)rangeWithRange:(id)arg1;
+ (id)rangeWithType:(unsigned long long)arg1;
+ (id)rangeWithVPMetadataRange:(id)arg1;

- (void).cxx_destruct;
- (id)_description;
- (id)_treeDescriptionWithDepthLevel:(unsigned long long)arg1;
- (id)analysisDict;
- (id)childRanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (int)durationInFrames;
- (int)durationOfOverlapWithRange:(id)arg1;
- (int)durationOfOverlapWithStart:(int)arg1 duration:(int)arg2;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)rating;
- (double)score;
- (void)setAnalysisDict:(id)arg1;
- (void)setChildRanges:(id)arg1;
- (void)setDurationInFrames:(int)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setRating:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (void)setStartTimeInFrames:(int)arg1;
- (void)setType:(unsigned long long)arg1;
- (int)startTimeInFrames;
- (unsigned long long)type;

@end
