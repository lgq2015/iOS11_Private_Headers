/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSRTPCryptoSuite : HMDNumberParser <NSSecureCoding> {
    unsigned long long  _srtpCryptoSuite;
}

@property (nonatomic, readonly) unsigned long long srtpCryptoSuite;

+ (id)arrayWithSuites:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCryptoSuite:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)srtpCryptoSuite;

@end
