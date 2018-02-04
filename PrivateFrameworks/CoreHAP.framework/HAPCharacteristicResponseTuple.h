/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicResponseTuple : HMFObject {
    HAPCharacteristic * _characteristic;
    NSError * _error;
}

@property (nonatomic, retain) HAPCharacteristic *characteristic;
@property (nonatomic, retain) NSError *error;

+ (id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)characteristic;
- (id)error;
- (void)setCharacteristic:(id)arg1;
- (void)setError:(id)arg1;

@end
