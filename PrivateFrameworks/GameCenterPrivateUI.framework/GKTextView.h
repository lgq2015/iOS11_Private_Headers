/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTextView : UITextView {
    GKTextStyle * __baseStyle;
    GKTextStyle * _appliedStyle;
    GKLabel * _placeholderLabel;
}

@property (nonatomic, retain) GKTextStyle *_baseStyle;
@property (nonatomic, retain) GKTextStyle *appliedStyle;
@property (nonatomic, retain) NSAttributedString *attributedPlaceholderText;
@property (nonatomic) GKLabel *placeholderLabel;
@property (nonatomic, retain) NSString *placeholderText;

+ (void)initialize;

- (id)_baseStyle;
- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)attributedPlaceholderText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)insertDictationResultPlaceholder;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)placeholderText;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)replayAndApplyStyle;
- (void)setAppliedStyle:(id)arg1;
- (void)setAttributedPlaceholderText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setText:(id)arg1;
- (void)set_baseStyle:(id)arg1;
- (void)textStorageDidChangeNotification:(id)arg1;
- (void)updatePlaceholderVisibility;

@end
