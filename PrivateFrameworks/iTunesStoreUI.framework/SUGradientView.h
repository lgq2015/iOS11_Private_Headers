/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUGradientView : UIView {
    struct CGGradient { } * _cgGradient;
    SUGradient * _gradient;
}

@property (nonatomic, copy) SUGradient *gradient;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)gradient;
- (void)setGradient:(id)arg1;

@end
