/* made by EzioChiu.
 */

@protocol HUQuickControlSliderGestureTransformerDelegate <NSObject>

@required

- (void)gestureDidEndForGestureTransformer:(HUQuickControlSliderGestureTransformer *)arg1;
- (void)gestureTransformer:(HUQuickControlSliderGestureTransformer *)arg1 sliderValueDidChange:(double)arg2;

@end
