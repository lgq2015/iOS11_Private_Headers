/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPBoundingBox : NSObject {
    float  _confidence;
    float  _flag;
    float  _maxX;
    float  _maxY;
    float  _minX;
    float  _minY;
}

@property float confidence;
@property float flag;
@property float maxX;
@property float maxY;
@property float minX;
@property float minY;

- (float)area;
- (float)computeIntersectionOverUnion:(id)arg1;
- (float)confidence;
- (float)flag;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCGRectWithClipWidth:(float)arg1 height:(float)arg2;
- (id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;
- (id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;
- (id)intersect:(id)arg1;
- (float)maxX;
- (float)maxY;
- (float)minX;
- (float)minY;
- (void)setConfidence:(float)arg1;
- (void)setFlag:(float)arg1;
- (void)setMaxX:(float)arg1;
- (void)setMaxY:(float)arg1;
- (void)setMinX:(float)arg1;
- (void)setMinY:(float)arg1;
- (id)union:(id)arg1;

@end
