/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPairingCompatibilityVersionInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _isOverrideActive;
    long long  _maxPairingCompatibilityVersion;
    long long  _minPairingCompatibilityVersion;
    long long  _minQuickSwitchCompatibilityVersion;
    long long  _pairingCompatibilityVersion;
}

@property (nonatomic) bool isOverrideActive;
@property (nonatomic) long long maxPairingCompatibilityVersion;
@property (nonatomic) long long minPairingCompatibilityVersion;
@property (nonatomic) long long minQuickSwitchCompatibilityVersion;
@property (nonatomic) long long pairingCompatibilityVersion;

+ (void)setValue:(unsigned long long)arg1 forToken:(int)arg2;
+ (bool)supportsSecureCoding;
+ (id)systemVersions;
+ (unsigned long long)valueForToken:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isOverrideActive;
- (long long)maxPairingCompatibilityVersion;
- (long long)minPairingCompatibilityVersion;
- (long long)minQuickSwitchCompatibilityVersion;
- (long long)pairingCompatibilityVersion;
- (void)setIsOverrideActive:(bool)arg1;
- (void)setMaxPairingCompatibilityVersion:(long long)arg1;
- (void)setMinPairingCompatibilityVersion:(long long)arg1;
- (void)setMinQuickSwitchCompatibilityVersion:(long long)arg1;
- (void)setPairingCompatibilityVersion:(long long)arg1;

@end
