/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIFakeSUAutoInstallForecast : SUAutoInstallForecast {
    double  _now;
}

- (double)_now;
- (id)firstUnlock;
- (long long)scheduleType;
- (id)suEndDate;
- (id)suStartDate;
- (id)unlockEndDate;
- (id)unlockStartDate;

@end
