/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKUser : UMMutableUser <NSCopying, NSSecureCoding> {
    CNContact * _contact;
    NSString * _identifier;
    bool  _isAttemptedPhoneticTranscription;
    bool  _isPhoneticInfoProvidedInConfiguration;
    NSURL * _largeImageURL;
    NSDate * _lastOnlineAuth;
    NSURL * _localLargeImageURL;
    NSURL * _localMediumImageURL;
    NSURL * _mediumImageURL;
    NSMutableDictionary * _namingSimilarityInfoByClassID;
    bool  _needFederatedAuthFlow;
    NSString * _passwordType;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    long long  _retryCount;
    NSString * _tokenizedPhoneticDisplayName;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isAttemptedPhoneticTranscription;
@property (nonatomic) bool isPhoneticInfoProvidedInConfiguration;
@property (nonatomic, retain) NSURL *largeImageURL;
@property (nonatomic, retain) NSDate *lastOnlineAuth;
@property (nonatomic, retain) NSURL *localLargeImageURL;
@property (nonatomic, retain) NSURL *localMediumImageURL;
@property (nonatomic, retain) NSURL *mediumImageURL;
@property (nonatomic, retain) NSMutableDictionary *namingSimilarityInfoByClassID;
@property (nonatomic) bool needFederatedAuthFlow;
@property (nonatomic, retain) NSString *passwordType;
@property (nonatomic, retain) NSString *phoneticFamilyName;
@property (nonatomic, retain) NSString *phoneticGivenName;
@property (nonatomic) long long retryCount;
@property (nonatomic, retain) NSString *tokenizedPhoneticDisplayName;

+ (void)setAutogeneratesPhoneticNameWithLocale:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)userFromDictionary:(id)arg1;
+ (id)userFromUMUser:(id)arg1;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isAttemptedPhoneticTranscription;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLKUser:(id)arg1;
- (bool)isPhoneticInfoProvidedInConfiguration;
- (id)largeImageURL;
- (id)lastOnlineAuth;
- (id)localLargeImageURL;
- (id)localMediumImageURL;
- (id)mediumImageURL;
- (id)namingSimilarityInfoByClassID;
- (bool)needFederatedAuthFlow;
- (id)passwordType;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (long long)retryCount;
- (void)setContact:(id)arg1;
- (void)setDiffUMUserPropertiesFromUMUser:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsAttemptedPhoneticTranscription:(bool)arg1;
- (void)setIsPhoneticInfoProvidedInConfiguration:(bool)arg1;
- (void)setLargeImageURL:(id)arg1;
- (void)setLastOnlineAuth:(id)arg1;
- (void)setLocalLargeImageURL:(id)arg1;
- (void)setLocalMediumImageURL:(id)arg1;
- (void)setMediumImageURL:(id)arg1;
- (void)setNamingSimilarityInfoByClassID:(id)arg1;
- (void)setNeedFederatedAuthFlow:(bool)arg1;
- (void)setPasswordType:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setTokenizedPhoneticDisplayName:(id)arg1;
- (id)tokenizedPhoneticDisplayName;

@end
