/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHealthServiceDataUpdate : NSObject {
    HDHealthServiceCharacteristic * _characteristic;
    HKDevice * _device;
    NSError * _error;
    unsigned long long  _sessionIdentifier;
}

@property (nonatomic, readonly) HDHealthServiceCharacteristic *characteristic;
@property (nonatomic, readonly) HKDevice *device;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long sessionIdentifier;

- (void).cxx_destruct;
- (id)characteristic;
- (id)device;
- (id)error;
- (id)initWithSessionIdentifier:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 error:(id)arg4;
- (unsigned long long)sessionIdentifier;

@end
