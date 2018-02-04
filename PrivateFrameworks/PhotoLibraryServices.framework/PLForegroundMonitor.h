/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLForegroundMonitor : NSObject {
    NSMutableSet * _foregroundApplications;
    NSCountedSet * _interestingApplications;
    bool  _isMonitoringApplicationStates;
    NSMapTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void)_applicationDidMoveToBackgroundLocked:(id)arg1;
- (void)_applicationDidMoveToForegroundLocked:(id)arg1;
- (void)_applicationStateDidChange:(id)arg1;
- (void)_startMonitoringApplicationStatesLocked;
- (void)_stopMonitoringApplicationStatesLocked;
- (void)addForegroundObserver:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeForegroundObserver:(id)arg1 context:(id)arg2;
- (void)startWatchingApplicationWithBundleIdentifier:(id)arg1;
- (void)stopWatchingApplicationWithBundleIdentifier:(id)arg1;

@end
