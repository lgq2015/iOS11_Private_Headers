/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPluginBalloonView : CKBalloonView {
    IMBalloonPluginDataSource * _dataSource;
    bool  _isInteractive;
    bool  _mayReparentPluginViews;
    CKBalloonImageView * _outlineMask;
    UIView<CKTranscriptPluginView> * _pluginView;
    bool  _suppressMask;
    CKInteractiveBalloonImageView * _tailMask;
}

@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (nonatomic) bool isInteractive;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskFrame;
@property (nonatomic) bool mayReparentPluginViews;
@property (nonatomic, retain) CKBalloonImageView *outlineMask;
@property (nonatomic, retain) UIView<CKTranscriptPluginView> *pluginView;
@property (nonatomic, readonly) bool shouldMaskWhenOpaque;
@property (nonatomic) bool suppressMask;
@property (nonatomic, retain) CKInteractiveBalloonImageView *tailMask;

- (void).cxx_destruct;
- (void)_pluginViewReadyForSnapshot:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;
- (id)dataSource;
- (void)detachInvisibleInkEffectView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageForInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (bool)isInteractive;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskFrame;
- (bool)mayReparentPluginViews;
- (id)outlineMask;
- (id)pluginView;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setCanUseOpaqueMask:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsInteractive:(bool)arg1;
- (void)setMayReparentPluginViews:(bool)arg1;
- (void)setOutlineMask:(id)arg1;
- (void)setPluginView:(id)arg1;
- (void)setSuppressMask:(bool)arg1;
- (void)setTailMask:(id)arg1;
- (bool)shouldMaskWhenOpaque;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (bool)suppressMask;
- (id)tailMask;

@end
