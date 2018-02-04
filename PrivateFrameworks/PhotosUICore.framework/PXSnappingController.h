/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSnappingController : NSObject {
    double  __accumulatedOffset;
    bool  __hasEnteredAttractionThreshold;
    bool  __hasEnteredRetentionThreshold;
    double  __previousOffset;
    bool  __previousOffsetInvalid;
    bool  _accumulateOffsetWhileSnapped;
    double  _attractionOffsetThreshold;
    double  _attractionVelocityThreshold;
    double  _retentionOffsetThreshold;
    bool  _snappedToTarget;
    double  _snappingTarget;
}

@property (setter=_setAccumulatedOffset:, nonatomic) double _accumulatedOffset;
@property (setter=_setHasEnteredAttractionThreshold:, nonatomic) bool _hasEnteredAttractionThreshold;
@property (setter=_setHasEnteredRetentionThreshold:, nonatomic) bool _hasEnteredRetentionThreshold;
@property (setter=_setPreviousOffset:, nonatomic) double _previousOffset;
@property (getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:, nonatomic) bool _previousOffsetInvalid;
@property (nonatomic) bool accumulateOffsetWhileSnapped;
@property (nonatomic) double attractionOffsetThreshold;
@property (nonatomic) double attractionVelocityThreshold;
@property (nonatomic) double retentionOffsetThreshold;
@property (getter=isSnappedToTarget, nonatomic, readonly) bool snappedToTarget;
@property (nonatomic, readonly) double snappingTarget;

- (double)_accumulatedOffset;
- (bool)_hasEnteredAttractionThreshold;
- (bool)_hasEnteredRetentionThreshold;
- (bool)_isOffset:(double)arg1 inThreshold:(double)arg2;
- (bool)_isPreviousOffsetInvalid;
- (double)_previousOffset;
- (void)_reset;
- (void)_setAccumulatedOffset:(double)arg1;
- (void)_setBoolPointer:(inout bool*)arg1 toValue:(bool)arg2;
- (void)_setHasEnteredAttractionThreshold:(bool)arg1;
- (void)_setHasEnteredRetentionThreshold:(bool)arg1;
- (void)_setPreviousOffset:(double)arg1;
- (void)_setPreviousOffsetInvalid:(bool)arg1;
- (bool)accumulateOffsetWhileSnapped;
- (double)attractionOffsetThreshold;
- (double)attractionVelocityThreshold;
- (void)didSnapByAttraction;
- (id)init;
- (id)initWithSnappingTarget:(double)arg1;
- (void)interactionBegan;
- (void)interactionEnded;
- (bool)isSnappedToTarget;
- (double)retentionOffsetThreshold;
- (void)setAccumulateOffsetWhileSnapped:(bool)arg1;
- (void)setAttractionOffsetThreshold:(double)arg1;
- (void)setAttractionVelocityThreshold:(double)arg1;
- (void)setRetentionOffsetThreshold:(double)arg1;
- (double)snappingTarget;
- (void)updateOffset:(inout double*)arg1 withVelocity:(double)arg2 shouldSnap:(out bool*)arg3 shouldBreak:(out bool*)arg4;

@end
