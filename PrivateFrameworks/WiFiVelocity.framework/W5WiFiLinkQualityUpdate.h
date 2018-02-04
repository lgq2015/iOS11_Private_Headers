/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5WiFiLinkQualityUpdate : NSObject <NSCopying, NSSecureCoding> {
    float  _cca;
    long long  _rssi;
    double  _timestamp;
    long long  _txRate;
}

@property (nonatomic) float cca;
@property (nonatomic) long long rssi;
@property (nonatomic) double timestamp;
@property (nonatomic) long long txRate;

+ (bool)supportsSecureCoding;

- (float)cca;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)rssi;
- (void)setCca:(float)arg1;
- (void)setRssi:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTxRate:(long long)arg1;
- (double)timestamp;
- (long long)txRate;

@end
