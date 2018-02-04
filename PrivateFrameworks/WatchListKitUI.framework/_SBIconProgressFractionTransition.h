/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _SBIconProgressFractionTransition : _SBIconProgressTransition {
    double  _targetFraction;
}

+ (id)newTransitionToFraction:(double)arg1;

- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (bool)isCompleteWithView:(id)arg1;
- (void)updateToFraction:(double)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;

@end
