/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCloudCallingDevice : NSObject <NSCopying, NSSecureCoding> {
    bool  _defaultPairedDevice;
    NSString * _modelIdentifier;
    NSString * _name;
    NSString * _phoneNumberURI;
    NSString * _uniqueID;
}

@property (getter=isDefaultPairedDevice, nonatomic) bool defaultPairedDevice;
@property (nonatomic, copy) NSString *modelIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumberURI;
@property (nonatomic, copy) NSString *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultPairedDevice;
- (bool)isEqual:(id)arg1;
- (id)modelIdentifier;
- (id)name;
- (id)phoneNumberURI;
- (void)setDefaultPairedDevice:(bool)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumberURI:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;

@end
