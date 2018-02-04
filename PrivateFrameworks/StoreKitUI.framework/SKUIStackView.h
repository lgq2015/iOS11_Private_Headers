/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackView : UIView {
    UIImage * _image;
    long long  _stackViewStyle;
    NSMutableArray * _stackViews;
    UIWindow * _window;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) long long stackViewStyle;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centerInPerspectiveTargetViewCoordinates;
- (id)_initSKUIStackView;
- (struct CGSize { double x1; double x2; })_levelInsetSize;
- (struct CGSize { double x1; double x2; })_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint { double x1; double x2; })arg1 perspectiveTargetView:(id)arg2;
- (struct UIOffset { double x1; double x2; })_relativeOffsetForMinimumRelativeOffset:(struct UIOffset { double x1; double x2; })arg1 maximumRelativeOffset:(struct UIOffset { double x1; double x2; })arg2 normalizedDistanceFromVanishingPoint:(struct CGSize { double x1; double x2; })arg3;
- (struct UIOffset { double x1; double x2; })_relativeOffsetOfItemAtIndex:(long long)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_sizeOfItemAtIndex:(double)arg1;
- (long long)_stackDepth;
- (void)didMoveToWindow;
- (id)image;
- (id)initWithStackViewStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)performCompressionAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (long long)stackViewStyle;

@end