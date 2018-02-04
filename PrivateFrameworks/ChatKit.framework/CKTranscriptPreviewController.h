/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate> {
    CKTranscriptCollectionView * _collectionView;
    CKConversation * _conversation;
    NSObject<CKTranscriptPreviewControllerDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    double  _transcriptWidth;
}

@property (nonatomic, retain) CKTranscriptCollectionView *collectionView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKTranscriptPreviewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (readonly) Class superclass;
@property (nonatomic) double transcriptWidth;

- (void).cxx_destruct;
- (id)collectionView;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)loadView;
- (id)previewActions;
- (void)setCollectionView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTranscriptWidth:(double)arg1;
- (id)textInputContextIdentifier;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyleExpanded:(bool)arg2 forChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (double)transcriptWidth;
- (void)viewDidLayoutSubviews;

@end
