/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKBezierPathView : UIView

+ (id)_pathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (Class)layerClass;

- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2;
- (id)initWithOvalInSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStrokeColor:(id)arg1 width:(double)arg2;

@end
