/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPTextMagnifierTimeWeightedPoint : NSObject {
    long long  m_index;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } point; 
        double time; 
    }  m_points;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } weightedPoint;

- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)clearHistory;
- (struct CGSize { double x1; double x2; })displacementInInterval:(double)arg1;
- (struct CGSize { double x1; double x2; })displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (double)distanceCoveredInInterval:(double)arg1;
- (double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (bool)historyCovers:(double)arg1;
- (struct CGPoint { double x1; double x2; })weightedPoint;

@end
