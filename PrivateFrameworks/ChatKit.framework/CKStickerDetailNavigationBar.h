/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStickerDetailNavigationBar : UIVisualEffectView {
    UIButton * _closeButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _parentLayoutMargins;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } parentLayoutMargins;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)closeButton;
- (id)initWithEffect:(id)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })parentLayoutMargins;
- (void)setCloseButton:(id)arg1;
- (void)setParentLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
