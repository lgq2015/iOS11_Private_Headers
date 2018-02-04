/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKTextField : UIView {
    UIImageView * _backgroundImageView;
    long long  _blurEffectStyle;
    NSMutableArray * _constraints;
    UILabel * _entryDescription;
    UITextField * _entryField;
    long long  _rowIdentifier;
    long long  _textFieldStyle;
    bool  _usesVibrancy;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic) long long blurEffectStyle;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) UILabel *entryDescription;
@property (nonatomic, readonly) UITextField *entryField;
@property (nonatomic) long long rowIdentifier;
@property (nonatomic) long long textFieldStyle;
@property (nonatomic) bool usesVibrancy;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

+ (id)_backgroundImageForRowIdentifier:(long long)arg1 blurEffectStyle:(long long)arg2;
+ (id)_cachedImageForRowIdentifier:(long long)arg1 blurEffectStyle:(long long)arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_fieldTextColor;
- (void)_setupAlertStyleViews;
- (void)_setupBackgroundView;
- (void)_setupInlineEntryStyleViews;
- (void)_setupLabelAndFieldStyles;
- (void)_updateFonts:(id)arg1;
- (id)backgroundImageView;
- (long long)blurEffectStyle;
- (id)constraints;
- (void)dealloc;
- (id)entryDescription;
- (id)entryField;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (long long)rowIdentifier;
- (void)setBackgroundImageView:(id)arg1;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setRowIdentifier:(long long)arg1;
- (void)setTextFieldStyle:(long long)arg1;
- (void)setUsesVibrancy:(bool)arg1;
- (void)setVisualEffectView:(id)arg1;
- (long long)textFieldStyle;
- (bool)usesVibrancy;
- (id)visualEffectView;

@end
