/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICLearnMoreTextView : UITextView {
    NSString * _helpTopicID;
    NSString * _helpVersion;
    bool  _isShowingLearnMore;
    UIViewController * _parentViewController;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) NSString *helpTopicID;
@property (nonatomic, retain) NSString *helpVersion;
@property (nonatomic) bool isShowingLearnMore;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (bool)_accessibilityHasTextOperations;
- (bool)accessibilityActivate;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)awakeFromNib;
- (void)dealloc;
- (void)didTapLearnMore;
- (id)helpTopicID;
- (id)helpVersion;
- (bool)isShowingLearnMore;
- (id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
- (id)parentViewController;
- (void)resetTextView;
- (void)setAttributedText:(id)arg1 addLearnMore:(bool)arg2 letterpress:(bool)arg3;
- (void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 addLearnMore:(bool)arg4;
- (void)setHelpTopicID:(id)arg1;
- (void)setHelpVersion:(id)arg1;
- (void)setIsShowingLearnMore:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 addLearnMore:(bool)arg5;
- (void)sizeToFitWidthUsingHeightConstraint:(id)arg1;
- (void)tapGesture:(id)arg1;
- (id)tapGestureRecognizer;
- (void)updateForAccessibilityDarkerSystemColors;

@end
