/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIConfigurationButton : UIButton {
    unsigned long long  _style;
}

- (id)initWithStyle:(unsigned long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)tintColorDidChange;

@end
