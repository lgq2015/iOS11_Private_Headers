/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUTiltWheelTriangleView : UIView {
    int  _wheelOrientation;
}

@property (nonatomic) int wheelOrientation;

+ (Class)layerClass;

- (void)_updateBaseShape;
- (void)layoutSubviews;
- (void)setWheelOrientation:(int)arg1;
- (void)tintColorDidChange;
- (int)wheelOrientation;

@end
