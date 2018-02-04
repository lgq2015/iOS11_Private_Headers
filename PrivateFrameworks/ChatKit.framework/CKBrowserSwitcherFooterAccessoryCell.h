/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView {
    double  _maxHeight;
    double  _minHeight;
    UIView * _seperatorView;
}

@property (nonatomic) double maxHeight;
@property (nonatomic) double minHeight;
@property (nonatomic, retain) UIView *seperatorView;

+ (id)reuseIdentifier;
+ (id)supplementryViewKind;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxHeight;
- (double)minHeight;
- (id)seperatorView;
- (void)setMaxHeight:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setSeperatorView:(id)arg1;

@end
