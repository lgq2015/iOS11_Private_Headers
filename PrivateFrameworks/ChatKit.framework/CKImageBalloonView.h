/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver> {
    CKAnimatedImage * _animatedImage;
    unsigned long long  _animationFrameOffset;
    NSArray * _frames;
    UIImageView * _irisBadgeView;
    bool  _isIrisAsset;
    CKBalloonImageView * _outlineMask;
    bool  _suppressMask;
    CKBalloonImageView * _tailMask;
}

@property (nonatomic, retain) CKAnimatedImage *animatedImage;
@property (nonatomic) unsigned long long animationFrameOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *irisBadgeView;
@property (nonatomic) bool isIrisAsset;
@property (nonatomic, retain) CKBalloonImageView *outlineMask;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressMask;
@property (nonatomic, retain) CKBalloonImageView *tailMask;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)animatedImage;
- (unsigned long long)animationFrameOffset;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)detachInvisibleInkEffectView;
- (void)didMoveToWindow;
- (id)frames;
- (id)imageForInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasResumed;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasUncovered;
- (id)irisBadgeView;
- (bool)isIrisAsset;
- (void)layoutSubviews;
- (bool)needsGroupOpacity;
- (id)outlineMask;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAnimatedImage:(id)arg1;
- (void)setAnimationFrameOffset:(unsigned long long)arg1;
- (void)setCanUseOpaqueMask:(bool)arg1;
- (void)setFrames:(id)arg1;
- (void)setHasTail:(bool)arg1;
- (void)setIrisBadgeView:(id)arg1;
- (void)setIsIrisAsset:(bool)arg1;
- (void)setOutlineMask:(id)arg1;
- (void)setSuppressMask:(bool)arg1;
- (void)setTailMask:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (bool)suppressMask;
- (id)tailMask;
- (void)updateAnimationTimerObserving;

@end
