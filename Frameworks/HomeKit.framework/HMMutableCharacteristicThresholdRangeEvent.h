/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMutableCharacteristicThresholdRangeEvent : HMCharacteristicThresholdRangeEvent

@property (nonatomic, retain) HMCharacteristic *characteristic;
@property (nonatomic, copy) HMNumberRange *thresholdRange;

@end
