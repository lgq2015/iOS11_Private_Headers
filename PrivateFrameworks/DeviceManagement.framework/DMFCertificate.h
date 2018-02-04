/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding> {
    NSString * _commonName;
    NSData * _data;
    bool  _isIdentity;
}

@property (nonatomic, readonly, copy) NSString *commonName;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) bool isIdentity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commonName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isIdentity;

@end
