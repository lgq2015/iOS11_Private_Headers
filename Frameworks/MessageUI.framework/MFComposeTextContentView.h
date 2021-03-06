/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTextContentView : UITextContentView {
    bool  _keepScrollPosition;
    long long  _preventScrollSelectionToVisible;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollPosition;
}

- (bool)becomeFirstResponder;
- (void)beginPreventingScrollSelectionToVisible;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)decreaseQuoteLevel;
- (id)enclosingScrollView;
- (void)endPreventingScrollSelectionToVisible;
- (void)ensureSelection;
- (void)increaseQuoteLevel;
- (id)keyCommands;
- (bool)resignFirstResponder;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)showQuoteLevelOptions;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;

@end
