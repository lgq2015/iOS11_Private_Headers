/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUILabeledRoundButtonViewController : UIViewController {
    UIControl * _button;
    CCUILabeledRoundButton * _buttonContainer;
    bool  _enabled;
    UIImage * _glyphImage;
    CCUICAPackageDescription * _glyphPackageDescription;
    NSString * _glyphState;
    UIColor * _highlightColor;
    bool  _inoperative;
    bool  _labelsVisible;
    NSString * _subtitle;
    bool  _toggleStateOnTap;
    bool  _useLightStyle;
}

@property (nonatomic, retain) UIControl *button;
@property (nonatomic, retain) CCUILabeledRoundButton *buttonContainer;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, copy) NSString *glyphState;
@property (nonatomic, retain) UIColor *highlightColor;
@property (getter=isInoperative, nonatomic) bool inoperative;
@property (nonatomic) bool labelsVisible;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool toggleStateOnTap;
@property (nonatomic) bool useLightStyle;

- (void).cxx_destruct;
- (id)button;
- (id)buttonContainer;
- (void)buttonTapped:(id)arg1;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (id)glyphState;
- (id)highlightColor;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (bool)isEnabled;
- (bool)isInoperative;
- (bool)labelsVisible;
- (void)loadView;
- (void)setButton:(id)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setInoperative:(bool)arg1;
- (void)setLabelsVisible:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToggleStateOnTap:(bool)arg1;
- (void)setUseLightStyle:(bool)arg1;
- (id)subtitle;
- (bool)toggleStateOnTap;
- (bool)useLightStyle;

@end
