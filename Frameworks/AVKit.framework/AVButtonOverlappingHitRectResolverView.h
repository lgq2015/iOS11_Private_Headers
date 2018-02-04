/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVButtonOverlappingHitRectResolverView : UIView

+ (void)_collectAVButtonsInSubviewsOfView:(id)arg1 buttons:(id)arg2;

- (void)_visualizeHitView:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
