/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {
    CKTypingView * _typingView;
}

@property (nonatomic, retain) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;
@property (nonatomic, retain) CKTypingView *typingView;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)indicatorLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)arg1;
- (void)performRemoval:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setIndicatorLayer:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setTypingView:(id)arg1;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimation;
- (void)stopPulseAnimation;
- (id)typingView;

@end
