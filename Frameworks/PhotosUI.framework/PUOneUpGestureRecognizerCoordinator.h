/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpGestureRecognizerCoordinator : NSObject <UIGestureRecognizerDelegate> {
    NSHashTable * __irisGestureRecognizers;
    bool  __needsUpdateGestureRecognizers;
    PUBrowsingSession * _browsingSession;
    <PUOneUpGestureRecognizerCoordinatorDelegate> * _delegate;
    struct { 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToShouldAllowIrisGestureRecognizer; 
    }  _delegateFlags;
    PUDoubleTapZoomController * _doubleTapZoomController;
    PULongPressDragController * _longPressDragController;
    PUOneUpBarsController * _oneUpBarsController;
    PUTouchingGestureRecognizer * _touchingGestureRecognizer;
}

@property (setter=_setIrisGestureRecognizers:, nonatomic, retain) NSHashTable *_irisGestureRecognizers;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) bool _needsUpdateGestureRecognizers;
@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpGestureRecognizerCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PUDoubleTapZoomController *doubleTapZoomController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PULongPressDragController *longPressDragController;
@property (nonatomic, retain) PUOneUpBarsController *oneUpBarsController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUTouchingGestureRecognizer *touchingGestureRecognizer;

- (void).cxx_destruct;
- (void)_invalidateGestureRecognizers;
- (id)_irisGestureRecognizers;
- (bool)_needsUpdateGestureRecognizers;
- (void)_setIrisGestureRecognizers:(id)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(bool)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (void)addIrisGestureRecognizer:(id)arg1;
- (id)browsingSession;
- (id)delegate;
- (id)doubleTapZoomController;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)invalidateViewHostingGestureRecognizers;
- (id)longPressDragController;
- (id)oneUpBarsController;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleTapZoomController:(id)arg1;
- (void)setLongPressDragController:(id)arg1;
- (void)setOneUpBarsController:(id)arg1;
- (id)touchingGestureRecognizer;

@end
