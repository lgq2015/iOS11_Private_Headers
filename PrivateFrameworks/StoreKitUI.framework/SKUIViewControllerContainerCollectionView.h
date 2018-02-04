/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewControllerContainerCollectionView : UICollectionView {
    double  _competingScrollViewPanGestureRecognizerHysteresis;
    bool  _forcingIncreasedPanGestureRecognizerHysteresis;
    double  _originalPanGestureRecognizerHysteresis;
    struct __CFRunLoopObserver { } * _runLoopObserver;
}

- (void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)arg1;
- (void)_endDynamicHysteresisIncrease;
- (void)_updateStateForDynamicHysteresisIncrease;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
