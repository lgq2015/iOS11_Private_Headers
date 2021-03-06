/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController {
    SAUISnippet * _snippet;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)_backingSnippetViewController;
- (void)_setVirgin:(bool)arg1;
- (id)attributedSubtitle;
- (void)endEditingAndCorrect:(bool)arg1;
- (id)headerPunchOut;
- (id)initWithSnippet:(id)arg1;
- (bool)isCancelled;
- (bool)isConfirmed;
- (bool)isFullPadWidth;
- (id)navigationTitle;
- (bool)removedAfterDialogProgresses;
- (id)requestContext;
- (id)sashItem;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderPunchOut:(id)arg1;
- (void)setIsFullPadWidth:(bool)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setSnippet:(id)arg1;
- (void)setSnippetPunchOut:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setWantsConfirmationInsets:(bool)arg1;
- (void)siriDidDeactivate;
- (void)siriDidLayoutSnippetView;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriWillLayoutSnippetView;
- (id)snippet;
- (id)snippetPunchOut;
- (id)subtitle;
- (Class)transparentHeaderViewClass;
- (bool)usePlatterStyle;
- (bool)wantsConfirmationInsets;
- (bool)wantsToManageBackgroundColor;
- (void)wasAddedToTranscript;
- (void)willCancel;
- (void)willConfirm;

@end
