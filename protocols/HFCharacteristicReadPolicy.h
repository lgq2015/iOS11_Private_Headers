/* made by EzioChiu.
 */

@protocol HFCharacteristicReadPolicy <NSObject>

@required

- (unsigned long long)evaluateWithCharacteristic:(HMCharacteristic *)arg1 traits:(out id*)arg2;

@end
