/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKUIBehaviorPad : CKUIBehavior

- (struct CGSize { double x1; double x2; })attachmentBrowserDefaultSizeForSquare;
- (double)attachmentBrowserGridInterItemSpacing;
- (bool)canPresentOverKeyboard;
- (bool)canShowContactPhotosInConversationList;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contactPhotoTranscriptInsets;
- (double)conversationListMinimumWidthForHiddenContactImage;
- (unsigned long long)defaultConversationViewingMessageCount;
- (struct CGSize { double x1; double x2; })documentIconSize;
- (double)entryViewMaxHandWritingPluginShelfHeight;
- (id)fullscreenPickerActionLayoutAxisPrioritiesForWidth:(double)arg1;
- (bool)lowClearanceInLandscape;
- (double)maxPrimaryColumnWidthForInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minTranscriptMarginInsets;
- (unsigned long long)numberOfButtonsInPhotoPicker;
- (double)photoPickerMaxPopoverPhotoHeight;
- (double)photoPickerPopoverWidth;
- (bool)photoPickerShouldZoomOnSelection;
- (bool)presentForwardingUIModally;
- (bool)presentsFullscreenInViewService;
- (bool)presentsQuickLookController;
- (double)resumeToConversationListTimeInterval;
- (bool)shouldAlignRecipientGlyphsWithMargins;
- (bool)shouldOnlyResumeToConversationListAfterTimeout;
- (bool)shouldPopoverSuggestionsBanner;
- (bool)shouldRefreshAlternateAddressesSheet;
- (bool)shouldShowDisclosureChevronInRecipientAtoms;
- (bool)shouldSuppressRotationInNewCompose;
- (bool)showMMSSetup;
- (bool)showPendingInConversationList;
- (bool)showsConversationListCellChevronImage;
- (unsigned long long)suggestedAppStripLimit;
- (unsigned long long)supportedInterfaceOrientations;
- (double)transcriptContactImageDiameter;
- (double)transcriptHeaderViewMaxRows;
- (bool)usesPopovers;
- (bool)usesUncollapsedSplitview;

@end
