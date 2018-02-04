/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTransitionViewAnimator : NSObject {
    CADisplayLink * __autoUpdateDisplayLink;
    double  __currentRotation;
    double  __currentScale;
    double  __currentSizeMixFactor;
    double  __desiredRotation;
    double  __desiredScale;
    double  __desiredSizeMixFactor;
    struct CGPoint { 
        double x; 
        double y; 
    }  __desiredTranslation;
    bool  __isAutoUpdating;
    bool  __isEnding;
    PUValueFilter * __progressFilter;
    PUValueFilter * __rampUpFilter;
    PUValueFilter * __shouldFinishFilter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __targetAspectRatioSourceFrame;
    double  __targetScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    bool  _appliesScaleViaTransform;
    bool  _autoUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentTranslation;
    <PUTransitionViewAnimatorDelegate> * _delegate;
    struct { 
        unsigned int respondsToDidUpdate : 1; 
        unsigned int respondsToWillEnd : 1; 
        unsigned int respondsToDidEnd : 1; 
    }  _delegateFlags;
    unsigned long long  _direction;
    double  _progress;
    double  _rampUpDuration;
    bool  _shouldFinish;
    bool  _shouldUseTargetAspectRatio;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    double  _unfilteredProgress;
    UIView * _view;
}

@property (setter=_setAutoUpdateDisplayLink:, nonatomic, retain) CADisplayLink *_autoUpdateDisplayLink;
@property (setter=_setCurrentRotation:, nonatomic) double _currentRotation;
@property (setter=_setCurrentScale:, nonatomic) double _currentScale;
@property (setter=_setCurrentSizeMixFactor:, nonatomic) double _currentSizeMixFactor;
@property (setter=_setDesiredRotation:, nonatomic) double _desiredRotation;
@property (setter=_setDesiredScale:, nonatomic) double _desiredScale;
@property (setter=_setDesiredSizeMixFactor:, nonatomic) double _desiredSizeMixFactor;
@property (setter=_setDesiredTranslation:, nonatomic) struct CGPoint { double x1; double x2; } _desiredTranslation;
@property (setter=_setAutoUpdating:, nonatomic) bool _isAutoUpdating;
@property (setter=_setEnding:, nonatomic) bool _isEnding;
@property (setter=_setProgressFilter:, nonatomic, retain) PUValueFilter *_progressFilter;
@property (setter=_setRampUpFilter:, nonatomic, retain) PUValueFilter *_rampUpFilter;
@property (setter=_setShouldFinishFilter:, nonatomic, retain) PUValueFilter *_shouldFinishFilter;
@property (setter=_setTargetAspectRatioSourceFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _targetAspectRatioSourceFrame;
@property (setter=_setTargetScale:, nonatomic) double _targetScale;
@property (setter=_setAnchorPoint:, nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) bool appliesScaleViaTransform;
@property (nonatomic) bool autoUpdates;
@property (setter=_setCurrentTranslation:, nonatomic) struct CGPoint { double x1; double x2; } currentTranslation;
@property (nonatomic) <PUTransitionViewAnimatorDelegate> *delegate;
@property (setter=_setDirection:, nonatomic) unsigned long long direction;
@property (setter=_setProgress:, nonatomic) double progress;
@property (setter=_setRampUpDuration:, nonatomic) double rampUpDuration;
@property (setter=_setShouldFinish:, nonatomic) bool shouldFinish;
@property (setter=_setShouldUseTargetAspectRatio:, nonatomic) bool shouldUseTargetAspectRatio;
@property (setter=_setSourceFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceFrame;
@property (setter=_setTargetFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property (setter=_setUnfilteredProgress:, nonatomic) double unfilteredProgress;
@property (setter=_setView:, nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)_autoUpdate:(id)arg1;
- (id)_autoUpdateDisplayLink;
- (double)_currentRotation;
- (double)_currentScale;
- (double)_currentSizeMixFactor;
- (double)_desiredRotation;
- (double)_desiredScale;
- (double)_desiredSizeMixFactor;
- (struct CGPoint { double x1; double x2; })_desiredTranslation;
- (void)_endWithTranslationVelocity:(struct CGPoint { double x1; double x2; })arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(bool)arg4 finish:(bool)arg5 animated:(bool)arg6;
- (bool)_isAutoUpdating;
- (bool)_isEnding;
- (id)_progressFilter;
- (id)_rampUpFilter;
- (void)_setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setAutoUpdateDisplayLink:(id)arg1;
- (void)_setAutoUpdating:(bool)arg1;
- (void)_setCurrentRotation:(double)arg1;
- (void)_setCurrentScale:(double)arg1;
- (void)_setCurrentSizeMixFactor:(double)arg1;
- (void)_setCurrentTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setDesiredRotation:(double)arg1;
- (void)_setDesiredScale:(double)arg1;
- (void)_setDesiredSizeMixFactor:(double)arg1;
- (void)_setDesiredTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setDirection:(unsigned long long)arg1;
- (void)_setEnding:(bool)arg1;
- (void)_setProgress:(double)arg1;
- (void)_setProgressFilter:(id)arg1;
- (void)_setRampUpDuration:(double)arg1;
- (void)_setRampUpFilter:(id)arg1;
- (void)_setShouldFinish:(bool)arg1;
- (void)_setShouldFinishFilter:(id)arg1;
- (void)_setShouldUseTargetAspectRatio:(bool)arg1;
- (void)_setSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTargetAspectRatioSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTargetScale:(double)arg1;
- (void)_setUnfilteredProgress:(double)arg1;
- (void)_setView:(id)arg1;
- (id)_shouldFinishFilter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetAspectRatioSourceFrame;
- (double)_targetScale;
- (void)_update;
- (void)_updateAutoUpdateDisplayLink;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (bool)appliesScaleViaTransform;
- (bool)autoUpdates;
- (void)cancelWithTranslationVelocity:(struct CGPoint { double x1; double x2; })arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(bool)arg4;
- (void)cancelWithoutAnimation;
- (struct CGPoint { double x1; double x2; })currentTranslation;
- (id)delegate;
- (unsigned long long)direction;
- (void)finishWithTranslationVelocity:(struct CGPoint { double x1; double x2; })arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(bool)arg4;
- (id)initWithView:(id)arg1 sourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 anchorPoint:(struct CGPoint { double x1; double x2; })arg4 shouldUseTargetAspectRatio:(bool)arg5 rampUpDuration:(double)arg6 direction:(unsigned long long)arg7;
- (double)progress;
- (double)rampUpDuration;
- (void)setAppliesScaleViaTransform:(bool)arg1;
- (void)setAutoUpdates:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldFinish;
- (bool)shouldUseTargetAspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (double)unfilteredProgress;
- (void)updateWithTranslation:(struct CGPoint { double x1; double x2; })arg1 rotation:(double)arg2 scale:(double)arg3;
- (id)view;

@end
