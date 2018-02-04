/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTSoftwareUpdateCheckingMonitor : VTEventMonitor {
    bool  _isSoftwareUpdateCheckingRunning;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (bool)_checkSoftwareUpdateCheckingState;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(bool)arg1;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(bool)arg2;
- (unsigned char)_softwareUpdateCheckingState;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isSoftwareUpdateCheckingRunning;

@end
