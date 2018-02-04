/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBigEmojiBalloonView : CKTextBalloonView

- (id)accessibilityIdentifier;
- (void)addFilter:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)detachInvisibleInkEffectView;
- (bool)hasBackground;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)setGradientReferenceView:(id)arg1;
- (void)setHasOverlay:(bool)arg1 autoDismiss:(bool)arg2;
- (void)setImage:(id)arg1;

@end
