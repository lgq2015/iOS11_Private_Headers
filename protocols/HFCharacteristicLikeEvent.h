/* made by EzioChiu.
 */

@protocol HFCharacteristicLikeEvent <NSObject>

@required

- (HMCharacteristic *)characteristic;
- (id)hf_representativeTriggerValue;

@end
