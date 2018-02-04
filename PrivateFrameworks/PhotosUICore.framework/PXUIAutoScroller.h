/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIAutoScroller : PXAutoScroller {
    CADisplayLink * __displayLink;
}

@property (setter=_setDisplayLink:, nonatomic, retain) CADisplayLink *_displayLink;

- (void).cxx_destruct;
- (id)_displayLink;
- (void)_handleDisplayLink:(id)arg1;
- (void)_setDisplayLink:(id)arg1;
- (bool)autoscrollWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRepeating;
- (void)stopRepeating;
- (void)updateWithGestureRecognizer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollView:(id)arg1;

@end
