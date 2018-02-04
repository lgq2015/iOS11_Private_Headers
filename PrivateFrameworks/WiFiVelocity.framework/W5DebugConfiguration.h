/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _bluetooth;
    long long  _eapol;
    long long  _wifi;
}

@property (nonatomic) long long bluetooth;
@property (nonatomic) long long eapol;
@property (nonatomic) long long wifi;

+ (bool)supportsSecureCoding;

- (long long)bluetooth;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)eapol;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDebugConfiguration:(id)arg1;
- (void)setBluetooth:(long long)arg1;
- (void)setEapol:(long long)arg1;
- (void)setWifi:(long long)arg1;
- (long long)wifi;

@end
