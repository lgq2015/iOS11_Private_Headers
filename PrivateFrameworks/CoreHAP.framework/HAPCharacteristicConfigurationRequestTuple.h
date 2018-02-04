/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject {
    bool  _broadcastEnable;
    unsigned long long  _broadcastInterval;
    HAPCharacteristic * _characteristic;
}

@property (nonatomic) bool broadcastEnable;
@property (nonatomic) unsigned long long broadcastInterval;
@property (nonatomic, retain) HAPCharacteristic *characteristic;

+ (id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(bool)arg2 broadcastInterval:(unsigned long long)arg3;

- (void).cxx_destruct;
- (bool)broadcastEnable;
- (unsigned long long)broadcastInterval;
- (id)characteristic;
- (void)setBroadcastEnable:(bool)arg1;
- (void)setBroadcastInterval:(unsigned long long)arg1;
- (void)setCharacteristic:(id)arg1;

@end
