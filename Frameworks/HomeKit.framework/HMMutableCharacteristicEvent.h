/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMutableCharacteristicEvent : HMCharacteristicEvent

@property (nonatomic, retain) HMCharacteristic *characteristic;
@property (nonatomic, copy) <NSCopying> *triggerValue;

@end