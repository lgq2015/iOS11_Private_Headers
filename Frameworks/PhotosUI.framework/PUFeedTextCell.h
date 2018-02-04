/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedTextCell : PUFeedCell {
    UIButton * __button;
    UILabel * __detailLabel;
    UIImageView * __iconImageView;
    UILabel * __label;
    NSAttributedString * _attributedDetailText;
    NSAttributedString * _attributedText;
    long long  _buttonHorizontalAlignment;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _buttonOffset;
    double  _buttonPadding;
    long long  _buttonSize;
    long long  _buttonType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIImage * _iconImage;
    long long  _iconLocation;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _iconOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _iconPadding;
    long long  _numberOfDetailTextLines;
    long long  _numberOfTextLines;
    bool  _shouldUseOpaqueBackground;
    long long  _tappableArea;
    long long  _textAlignment;
    double  _textDetailTextSpacing;
}

@property (setter=_setButton:, nonatomic, retain) UIButton *_button;
@property (setter=_setDetailLabel:, nonatomic, retain) UILabel *_detailLabel;
@property (setter=_setIconImageView:, nonatomic, retain) UIImageView *_iconImageView;
@property (setter=_setLabel:, nonatomic, retain) UILabel *_label;
@property (nonatomic, retain) NSAttributedString *attributedDetailText;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic) long long buttonHorizontalAlignment;
@property (nonatomic) struct UIOffset { double x1; double x2; } buttonOffset;
@property (nonatomic) double buttonPadding;
@property (nonatomic) long long buttonSize;
@property (nonatomic) long long buttonType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic) long long iconLocation;
@property (nonatomic) struct UIOffset { double x1; double x2; } iconOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } iconPadding;
@property (nonatomic) long long numberOfDetailTextLines;
@property (nonatomic) long long numberOfTextLines;
@property (nonatomic) bool shouldUseOpaqueBackground;
@property (nonatomic) long long tappableArea;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double textDetailTextSpacing;

- (void).cxx_destruct;
- (id)_button;
- (void)_configureButton:(id)arg1 withType:(long long)arg2 size:(long long)arg3 animated:(bool)arg4;
- (id)_delegate;
- (id)_detailLabel;
- (void)_handleButton:(id)arg1;
- (id)_iconImageView;
- (id)_label;
- (id)_labelBackgroundColor;
- (struct CGSize { double x1; double x2; })_maximumPossibleTextSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (void)_setButton:(id)arg1;
- (void)_setDetailLabel:(id)arg1;
- (void)_setIconImageView:(id)arg1;
- (void)_setLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })_textSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (void)_updateButtonAnimated:(bool)arg1;
- (void)_updateDetailLabel;
- (void)_updateIconImageView;
- (void)_updateLabelsBackgroundColor;
- (id)attributedDetailText;
- (id)attributedText;
- (long long)buttonHorizontalAlignment;
- (struct UIOffset { double x1; double x2; })buttonOffset;
- (double)buttonPadding;
- (long long)buttonSize;
- (long long)buttonType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)iconImage;
- (long long)iconLocation;
- (struct UIOffset { double x1; double x2; })iconOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfDetailTextLines;
- (long long)numberOfTextLines;
- (void)setAttributedDetailText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setButtonHorizontalAlignment:(long long)arg1;
- (void)setButtonOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setButtonPadding:(double)arg1;
- (void)setButtonSize:(long long)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setButtonType:(long long)arg1 animated:(bool)arg2;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconLocation:(long long)arg1;
- (void)setIconOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setIconPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNumberOfDetailTextLines:(long long)arg1;
- (void)setNumberOfTextLines:(long long)arg1;
- (void)setShouldUseOpaqueBackground:(bool)arg1;
- (void)setTappableArea:(long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextDetailTextSpacing:(double)arg1;
- (bool)shouldRecognizerTap:(id)arg1;
- (bool)shouldUseOpaqueBackground;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)tappableArea;
- (long long)textAlignment;
- (double)textDetailTextSpacing;

@end
