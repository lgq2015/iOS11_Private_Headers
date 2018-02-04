/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASDeviceInfo : NSObject {
    int  _batterySaverModeToken;
}

+ (bool)isBatterySaverEnabled;
+ (bool)isBetaBuild;
+ (bool)isDemoModeEnabled;
+ (bool)isInternalBuild;
+ (bool)isLowEndHardware;
+ (id)sharedInstance;
+ (bool)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end
