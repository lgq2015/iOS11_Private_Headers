/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicMonitorEvent : HMDCharacteristicEvent

+ (id)logCategory;

- (bool)_compareEventValue:(id)arg1;
- (bool)_evaluateNewValue:(id)arg1;
- (id)description;

@end
