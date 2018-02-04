/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5Status : NSObject <NSCopying, NSSecureCoding> {
    W5AWDLStatus * _awdl;
    W5BluetoothStatus * _bluetooth;
    W5NetworkStatus * _network;
    W5PowerStatus * _power;
    W5WiFiStatus * _wifi;
}

@property (nonatomic, copy) W5AWDLStatus *awdl;
@property (nonatomic, copy) W5BluetoothStatus *bluetooth;
@property (nonatomic, copy) W5NetworkStatus *network;
@property (nonatomic, copy) W5PowerStatus *power;
@property (nonatomic, copy) W5WiFiStatus *wifi;

+ (bool)supportsSecureCoding;

- (id)awdl;
- (id)bluetooth;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStatus:(id)arg1;
- (id)network;
- (id)power;
- (void)setAwdl:(id)arg1;
- (void)setBluetooth:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPower:(id)arg1;
- (void)setWifi:(id)arg1;
- (id)wifi;

@end