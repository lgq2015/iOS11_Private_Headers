/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveWidgetTracker.framework/ProactiveWidgetTracker
 */

@interface _PWTWidgetEventTracker : NSObject {
    long long  _activeDisplayMode;
    PETGoalConversionEventTracker * _conversionTracker;
    bool  _didBecomeVisibleWhileLocked;
    PETScalarEventTracker * _foregroundingTracker;
    bool  _hasReceivedActiveDisplayModeChangeNotificationOnce;
    NSString * _identifier;
    bool  _isCurrentlyVisible;
    double  _lastAppearTime;
    PETScalarEventTracker * _resizeTracker;
    PETDistributionEventTracker * _screenLingerTracker;
    PETScalarEventTracker * _updateTracker;
    bool  _widgetIsForeground;
    bool  _widgetWasEverForeground;
    bool  _willBecomeVisible;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)userEngagedWithWidget;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize { double x1; double x2; })arg2;
- (void)widgetDidAppear;
- (void)widgetDidBecomeForeground:(bool)arg1;
- (void)widgetDidDisappear;
- (void)widgetPerformedUpdateWithResult:(unsigned long long)arg1;
- (void)widgetWillAppear;
- (void)widgetWillDisappear;

@end
