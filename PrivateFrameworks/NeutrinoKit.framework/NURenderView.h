/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

@interface NURenderView : UIView <CAAnimationDelegate> {
    _NUBackfillLayer * _backfillLayer;
    _NUContainerLayer * _containerLayer;
    bool  _debugMode;
    NUImageGeometry * _geometry;
    CALayer * _geometryAnimationLayer;
    _NUROILayer * _roiLayer;
    bool  _shouldRemoveAnimation;
    bool  _transitionAnimationInFlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugMode;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backfillLayer;
- (id)_containerLayer;
- (id)_roiLayer;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)debugMode;
- (id)geometry;
- (bool)inLiveResize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDebugMode:(bool)arg1;
- (void)setGeometry:(id)arg1;
- (void)transitionToSize:(struct CGSize { double x1; double x2; })arg1 duration:(double)arg2 animationCurve:(id)arg3 completion:(id /* block */)arg4;
- (void)transitionToSize:(struct CGSize { double x1; double x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 animationCurve:(id)arg4 completion:(id /* block */)arg5;
- (void)willMoveToWindow:(id)arg1;

@end
