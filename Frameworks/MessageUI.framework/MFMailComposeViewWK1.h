/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeViewWK1 : MFMailComposeView {
    MFComposeBodyField * _bodyField;
    MFComposeTextContentView * _textView;
}

- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (void)_beginBlockingBodyScroll;
- (void)_beginPreventingScrollingToRevealSelection;
- (id)_bodyField;
- (void)_cancelAnimations;
- (void)_endBlockingBodyScroll;
- (void)_endPreventingScrollingToRevealSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_headerFrame;
- (void)_normalizeBodyFieldFrame;
- (void)_revealSelection;
- (void)_revealSelectionIfNeededWithChangingView:(id)arg1;
- (void)_setBodyShouldScrollToFirstResponder:(bool)arg1;
- (void)_setHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setUpContentView;
- (id)_textView;
- (void)_updateQuoteLevelMenu;
- (void)_updateTextViewHeightWithHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextViewOriginWithHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (void)resetContentSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setLoading:(bool)arg1;

@end
