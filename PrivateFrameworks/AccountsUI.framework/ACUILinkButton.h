/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUILinkButton : UIButton {
    NSString * _acui_titleString;
}

@property (retain) NSString *acui_titleString;

- (void).cxx_destruct;
- (id)_highlightedStringAttributes;
- (id)_normalStringAttributes;
- (id)acui_titleString;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setAcui_titleString:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end
