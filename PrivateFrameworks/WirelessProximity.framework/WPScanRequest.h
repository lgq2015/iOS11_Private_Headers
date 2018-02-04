/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPScanRequest : NSObject <NSSecureCoding> {
    bool  _activeScanning;
    bool  _allowDuplicates;
    NSData * _blobValue;
    unsigned char  _clientType;
    NSData * _maskValue;
    long long  _nearbyScanMode;
    NSDictionary * _options;
    NSArray * _peers;
    NSNumber * _rssiThreshold;
    bool  _scanCache;
    bool  _scanWhenLocked;
    struct { 
        long long screenOnInterval; 
        long long screenOffInterval; 
        long long window; 
    }  _scanningRates;
    double  _updateTime;
}

@property bool activeScanning;
@property bool allowDuplicates;
@property (nonatomic, retain) NSData *blobValue;
@property unsigned char clientType;
@property (nonatomic, retain) NSData *maskValue;
@property long long nearbyScanMode;
@property (retain) NSDictionary *options;
@property (retain) NSArray *peers;
@property (retain) NSNumber *rssiThreshold;
@property bool scanCache;
@property bool scanWhenLocked;
@property struct { long long x1; long long x2; long long x3; } scanningRates;
@property double updateTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)activeScanning;
- (bool)allowDuplicates;
- (id)blobValue;
- (unsigned char)clientType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)maskValue;
- (long long)nearbyScanMode;
- (id)options;
- (id)peers;
- (id)rssiThreshold;
- (bool)scanCache;
- (bool)scanWhenLocked;
- (struct { long long x1; long long x2; long long x3; })scanningRates;
- (void)setActiveScanning:(bool)arg1;
- (void)setAllowDuplicates:(bool)arg1;
- (void)setBlobValue:(id)arg1;
- (void)setClientType:(unsigned char)arg1;
- (void)setMaskValue:(id)arg1;
- (void)setNearbyScanMode:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setRssiThreshold:(id)arg1;
- (void)setScanCache:(bool)arg1;
- (void)setScanWhenLocked:(bool)arg1;
- (void)setScanningRates:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setUpdateTime:(double)arg1;
- (double)updateTime;

@end
