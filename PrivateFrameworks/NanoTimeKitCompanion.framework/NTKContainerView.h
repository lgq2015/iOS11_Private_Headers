/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKContainerView : UIView {
    <NTKContainerViewLayoutDelegate> * _layoutDelegate;
}

@property (nonatomic) <NTKContainerViewLayoutDelegate> *layoutDelegate;

- (void).cxx_destruct;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setLayoutDelegate:(id)arg1;

@end
