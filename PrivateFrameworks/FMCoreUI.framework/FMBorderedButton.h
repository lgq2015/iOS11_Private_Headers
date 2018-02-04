/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMBorderedButton : FM_Workaround_30408319_Button {
    UIColor * _borderColor;
    bool  _hairlineBorder;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) bool hairlineBorder;

- (void).cxx_destruct;
- (void)_bbUpdateLayer;
- (void)awakeFromNib;
- (id)borderColor;
- (double)borderWidth;
- (double)cornerRadius;
- (bool)hairlineBorder;
- (void)prepareForInterfaceBuilder;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHairlineBorder:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)tintColorDidChange;

@end
