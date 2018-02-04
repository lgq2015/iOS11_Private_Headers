/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDPathIntersection : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  mPoint;
    long long  mSegment;
    long long  mSegmentB;
    double  mT;
    double  mTB;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (nonatomic, readonly) long long segment;
@property (nonatomic, readonly) long long segmentB;
@property (nonatomic, readonly) double t;
@property (nonatomic, readonly) double tB;

- (long long)compareSegmentAndT:(id)arg1;
- (long long)compareT:(id)arg1;
- (id)description;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGPoint { double x1; double x2; })point;
- (long long)segment;
- (long long)segmentB;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)t;
- (double)tB;

@end
