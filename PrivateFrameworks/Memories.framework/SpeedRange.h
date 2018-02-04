/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface SpeedRange : NSObject <NSCopying> {
    SpeedRange * _accurate;
    SpeedRange * _accurateNext;
    SpeedRanges * _container;
    SpeedRange * _next;
    SpeedRange * _prev;
    double  _rate;
    int  _startClip;
    int  _startMedia;
}

@property (nonatomic) SpeedRange *accurate;
@property (nonatomic, readonly) int accurateDurationClip;
@property (nonatomic) SpeedRange *accurateNext;
@property (nonatomic, readonly) int accurateStartClip;
@property (nonatomic) SpeedRanges *container;
@property (nonatomic, readonly) int durationClip;
@property (nonatomic, readonly) int durationMedia;
@property (nonatomic, readonly) bool isFreeze;
@property (nonatomic) int leftEdge;
@property (nonatomic) SpeedRange *next;
@property (nonatomic) SpeedRange *prev;
@property (nonatomic) double rate;
@property (nonatomic) int rightEdge;
@property (nonatomic) int startClip;
@property (nonatomic) int startMedia;

+ (id)speedRangeWithRate:(float)arg1 startMedia:(int)arg2 startClip:(int)arg3;

- (void).cxx_destruct;
- (id)accurate;
- (int)accurateDurationClip;
- (id)accurateNext;
- (int)accurateStartClip;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })applySpeed:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)container;
- (int)convertToMediaTimeAndUnrampedClipTime:(int*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)durationClip;
- (int)durationMedia;
- (id)insertFreezeAtClipTime:(int)arg1;
- (bool)isFreeze;
- (int)leftEdge;
- (id)next;
- (id)prev;
- (double)rate;
- (int)rightEdge;
- (void)rippleClipTimeDown;
- (void)setAccurate:(id)arg1;
- (void)setAccurateNext:(id)arg1;
- (void)setAndRippleLeftEdge:(int)arg1;
- (void)setContainer:(id)arg1;
- (void)setLeftEdge:(int)arg1;
- (void)setNext:(id)arg1;
- (void)setPrev:(id)arg1;
- (void)setRate:(double)arg1;
- (void)setRightEdge:(int)arg1;
- (void)setStartClip:(int)arg1;
- (void)setStartMedia:(int)arg1;
- (id)splitRangeAtClipTime:(int)arg1;
- (int)startClip;
- (int)startMedia;

@end
