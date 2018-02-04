/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) unsigned long long macAddress;
@property (nonatomic, readonly, copy) NSData *secureRangingKeyID;

+ (id)hexStringMacAddressFromUInt:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (unsigned long long)uintMacAddressFromString:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getMacAddressAsString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMacAddressAsData:(id)arg1 secureRangingKeyID:(id)arg2;
- (id)initWithMacAddressAsString:(id)arg1 secureRangingKeyID:(id)arg2;
- (id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeer:(id)arg1;
- (unsigned long long)macAddress;
- (id)secureRangingKeyID;

@end
