/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingViewTransitionHelper : NSObject <PUInterruptibleViewControllerTransition, PUTilingViewControllerTransition> {
    double  __backgroundProgressOffset;
    PUMaximumChangeRateValueFilter * __chromeProgressValueFilter;
    long long  __currentOperation;
    <PUTilingViewControllerTransitionEndPoint> * __endPointOwningTilingView;
    <PUTilingViewControllerTransitionEndPoint> * __fromEndPoint;
    unsigned long long  __interactionOptions;
    double  __progressSpeed;
    double  __startTime;
    PUTilingView * __tilingView;
    PUAnimationGroup * __tilingViewAnimationGroup;
    <PUTilingViewControllerTransitionEndPoint> * __toEndPoint;
    double  __transitionProgressOffset;
    PUMaximumChangeRateValueFilter * __transitionProgressValueFilter;
    double  _dismissalDuration;
    bool  _hasStarted;
    double  _presentationDuration;
    PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> * _transition;
    bool  _transitionPaused;
}

@property (setter=_setBackgroundProgressOffset:, nonatomic) double _backgroundProgressOffset;
@property (setter=_setChromeProgressValueFilter:, nonatomic, retain) PUMaximumChangeRateValueFilter *_chromeProgressValueFilter;
@property (setter=_setCurrentOperation:, nonatomic) long long _currentOperation;
@property (setter=_setEndPointOwningTilingView:, nonatomic) <PUTilingViewControllerTransitionEndPoint> *_endPointOwningTilingView;
@property (setter=_setFromEndPoint:, nonatomic) <PUTilingViewControllerTransitionEndPoint> *_fromEndPoint;
@property (setter=_setInteractionOptions:, nonatomic) unsigned long long _interactionOptions;
@property (setter=_setProgressSpeed:, nonatomic) double _progressSpeed;
@property (setter=_setStartTime:, nonatomic) double _startTime;
@property (setter=_setTilingView:, nonatomic) PUTilingView *_tilingView;
@property (setter=_setTilingViewAnimationGroup:, nonatomic, retain) PUAnimationGroup *_tilingViewAnimationGroup;
@property (setter=_setToEndPoint:, nonatomic) <PUTilingViewControllerTransitionEndPoint> *_toEndPoint;
@property (setter=_setTransitionProgressOffset:, nonatomic) double _transitionProgressOffset;
@property (setter=_setTransitionProgressValueFilter:, nonatomic, retain) PUMaximumChangeRateValueFilter *_transitionProgressValueFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double dismissalDuration;
@property (setter=_setHasStarted:, nonatomic) bool hasStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double presentationDuration;
@property (readonly) Class superclass;
@property (nonatomic) PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *transition;
@property (getter=isTransitionPaused, setter=_setTransitionPaused:, nonatomic) bool transitionPaused;

+ (void)registerTransitionEndPoint:(id)arg1 forViewController:(id)arg2;
+ (id)transitionEndPointWithViewController:(id)arg1;
+ (void)unregisterTransitionEndPoint:(id)arg1 forViewController:(id)arg2;

- (void).cxx_destruct;
- (double)_backgroundProgressOffset;
- (long long)_barStyleForEndPoint:(id)arg1;
- (id)_chromeProgressValueFilter;
- (long long)_currentOperation;
- (id)_endPointOwningTilingView;
- (bool)_endPointUsesTransientTilingView:(id)arg1;
- (id)_fromEndPoint;
- (void)_getTransitionProgress:(double*)arg1 backgroundProgress:(double*)arg2 chromeProgress:(double*)arg3;
- (unsigned long long)_interactionOptions;
- (double)_progressSpeed;
- (void)_setBackgroundProgressOffset:(double)arg1;
- (void)_setChromeProgressValueFilter:(id)arg1;
- (void)_setCurrentOperation:(long long)arg1;
- (void)_setEndPointOwningTilingView:(id)arg1;
- (void)_setFromEndPoint:(id)arg1;
- (void)_setHasStarted:(bool)arg1;
- (void)_setInteractionOptions:(unsigned long long)arg1;
- (void)_setProgressSpeed:(double)arg1;
- (void)_setStartTime:(double)arg1;
- (void)_setTilingView:(id)arg1;
- (void)_setTilingViewAnimationGroup:(id)arg1;
- (void)_setToEndPoint:(id)arg1;
- (void)_setTransitionPaused:(bool)arg1;
- (void)_setTransitionProgressOffset:(double)arg1;
- (void)_setTransitionProgressValueFilter:(id)arg1;
- (double)_startTime;
- (id)_tilingView;
- (id)_tilingViewAnimationGroup;
- (id)_toEndPoint;
- (void)_transferView:(id)arg1 toSuperview:(id)arg2;
- (double)_transitionProgressOffset;
- (id)_transitionProgressValueFilter;
- (void)animateTransitionWithOperation:(long long)arg1 startedInteractively:(bool)arg2;
- (double)dismissalDuration;
- (bool)hasStarted;
- (id)init;
- (id)initWithPresentationDuration:(double)arg1 dismissalDuration:(double)arg2;
- (bool)isTransitionPaused;
- (void)pauseTransition;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (double)presentationDuration;
- (void)resumeTransition:(bool)arg1;
- (void)setTransition:(id)arg1;
- (id)transition;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;

@end
