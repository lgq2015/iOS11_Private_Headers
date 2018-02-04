/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QLCharts.framework/QLCharts
 */

@interface OIPieSliceCGRenderer : NSObject <OIPieSliceRenderer> {
    struct __OIChart { } * _chart;
}

@property struct __OIChart { }*chart;

- (struct __OIChart { }*)chart;
- (void)dealloc;
- (id)initWithChart:(struct __OIChart { }*)arg1;
- (void)renderPieSliceFromSeries:(struct __OISeries { }*)arg1 radius:(double)arg2 angle:(double)arg3 newAngle:(double)arg4 xOffset:(double)arg5 yOffset:(double)arg6 thickness:(double)arg7;
- (void)setChart:(struct __OIChart { }*)arg1;

@end
