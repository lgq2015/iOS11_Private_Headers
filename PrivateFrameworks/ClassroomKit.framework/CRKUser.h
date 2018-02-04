/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUser : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _familyName;
    NSString * _givenName;
    NSString * _imageIdentifier;
    NSString * _imageURL;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _userIdentifier;
    UIImage * _userImage;
    NSData * _userImageData;
    NSString * _userSource;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *imageIdentifier;
@property (nonatomic, copy) NSString *imageURL;
@property (nonatomic, readonly) bool isMeCardUser;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) UIImage *userImage;
@property (nonatomic, copy) NSData *userImageData;
@property (nonatomic, copy) NSString *userSource;

+ (id)meCardUser;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryValue;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (unsigned long long)hash;
- (id)imageIdentifier;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUser:(id)arg1;
- (bool)isMeCardUser;
- (bool)isValid;
- (id)nameComponents;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (void)setDisplayName:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setImageIdentifier:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserImage:(id)arg1;
- (void)setUserImageData:(id)arg1;
- (void)setUserSource:(id)arg1;
- (void)updateUserImage;
- (id)userIdentifier;
- (id)userImage;
- (id)userImageData;
- (id)userSource;

@end
