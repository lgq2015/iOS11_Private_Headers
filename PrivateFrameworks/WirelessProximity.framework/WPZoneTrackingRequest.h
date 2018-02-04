/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPZoneTrackingRequest : NSObject <NSSecureCoding> {
    unsigned char  _clientType;
    bool  _scanWhenScreenOff;
    struct { 
        long long screenOnInterval; 
        long long screenOffInterval; 
        long long window; 
    }  _scanningRates;
    NSMutableSet * _zones;
}

@property unsigned char clientType;
@property bool scanWhenScreenOff;
@property struct { long long x1; long long x2; long long x3; } scanningRates;
@property (retain) NSMutableSet *zones;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)clientType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)scanWhenScreenOff;
- (struct { long long x1; long long x2; long long x3; })scanningRates;
- (void)setClientType:(unsigned char)arg1;
- (void)setScanWhenScreenOff:(bool)arg1;
- (void)setScanningRates:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setZones:(id)arg1;
- (id)zones;

@end