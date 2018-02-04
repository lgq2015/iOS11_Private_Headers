/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingNavigationEvent : KNRecordingEvent {
    long long  mAnimationPhase;
    unsigned long long  mTargetEventIndex;
    TSUWeakReference * mTargetSlideNodeContextReference;
    NSUUID * mTargetSlideNodeUUID;
}

@property (nonatomic, readonly) long long animationPhase;
@property (nonatomic, readonly) unsigned long long targetEventIndex;
@property (nonatomic, readonly) KNSlideNode *targetSlideNode;

- (long long)animationPhase;
- (bool)canPrecedeDiscontinuity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg2 unarchiver:(id)arg3;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 targetSlideNode:(id)arg2 targetEventIndex:(unsigned long long)arg3 animationPhase:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isIgnoredWhenSeeking;
- (void)saveToArchive:(struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg1 archiver:(id)arg2;
- (unsigned long long)targetEventIndex;
- (id)targetSlideNode;

@end
