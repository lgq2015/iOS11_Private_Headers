/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMLayoutItem : NSObject

@property (nonatomic, readonly) double bottom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double left;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFrame;
@property (nonatomic, readonly) double right;
@property (nonatomic, readonly) double top;
@property (nonatomic, readonly) double width;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingFrameForItems:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingFrameForItems:(id)arg1;

- (double)_floatValueForMetric:(long long)arg1;
- (long long)_metricTypeForMetric:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectValueForMetric:(long long)arg1;
- (double)bottom;
- (id)description;
- (double)height;
- (double)left;
- (bool)metric:(long long)arg1 inProximityOfMetric:(long long)arg2 item:(id)arg3 threshold:(double)arg4;
- (double)right;
- (double)top;
- (double)width;

@end
