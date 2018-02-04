/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXScrollViewSpeedometer : PXObservable <PXScrollViewControllerObserver> {
    double  __lastTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __lastVisibleRect;
    long long  __nextRegime;
    long long  __nextRegimeCount;
    NSTimer * __timeoutTimer;
    long long  _previousRegime;
    long long  _regime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollSpeed;
    PXScrollViewController * _scrollViewController;
}

@property (setter=_setLastTime:, nonatomic) double _lastTime;
@property (setter=_setLastVisibleRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _lastVisibleRect;
@property (setter=_setNextRegime:, nonatomic) long long _nextRegime;
@property (setter=_setNextRegimeCount:, nonatomic) long long _nextRegimeCount;
@property (setter=_setTimeoutTimer:, nonatomic, retain) NSTimer *_timeoutTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long previousRegime;
@property (nonatomic, readonly) long long regime;
@property (setter=_setScrollSpeed:, nonatomic) struct CGPoint { double x1; double x2; } scrollSpeed;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleTimeoutTimer:(id)arg1;
- (double)_lastTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastVisibleRect;
- (long long)_newRegimeForScrollSpeed:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_nextRegime;
- (long long)_nextRegimeCount;
- (void)_rescheduleTimeout;
- (void)_setLastTime:(double)arg1;
- (void)_setLastVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setNextRegime:(long long)arg1;
- (void)_setNextRegimeCount:(long long)arg1;
- (void)_setPreviousRegime:(long long)arg1;
- (void)_setRegime:(long long)arg1;
- (void)_setScrollSpeed:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setTimeoutTimer:(id)arg1;
- (id)_timeoutTimer;
- (id)description;
- (double)fastLowerThreshold;
- (double)fastUpperThreshold;
- (id)init;
- (id)initWithScrollController:(id)arg1;
- (double)mediumLowerThreshold;
- (double)mediumUpperThreshold;
- (id)mutableChangeObject;
- (long long)previousRegime;
- (long long)regime;
- (struct CGPoint { double x1; double x2; })scrollSpeed;
- (id)scrollViewController;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;

@end
