/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeSubjectView : MFComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {
    unsigned int  _delegateRespondsToTextChange;
    unsigned int  _delegateRespondsToWillRemoveContent;
    bool  _needsExclusionPathUpdate;
    UIButton * _notifyButton;
    unsigned int  _notifyButtonSelected;
    unsigned int  _showNotifyButton;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *notifyButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;

- (bool)_canBecomeFirstResponder;
- (id)_textContainerExclusionPathsWithNotifyButton:(bool)arg1;
- (void)_updateExclusionPathsIfNeeded;
- (void)_updateTextContainerInsets;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (bool)endEditing:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEndEditingText:(id)arg1;
- (bool)isNotifyButtonSelected;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (void)layoutSubviews;
- (id)notifyButton;
- (void)notifyButtonClicked:(id)arg1;
- (void)refreshPreferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNotifyButtonSelected:(bool)arg1;
- (void)setShowNotifyButton:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updateNotifyButton;

@end
