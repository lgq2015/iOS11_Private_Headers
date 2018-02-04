/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatus : NSObject <NSCopying, SSXPCCoding> {
    unsigned long long  _acceptedStoreTermsVersion;
    NSNumber * _accountIdentifier;
    NSArray * _accountPermissions;
    long long  _accountStatus;
    long long  _carrierBundlingStatus;
    NSString * _cellularOperatorName;
    bool  _discoveryModeEligible;
    bool  _familyOrganizer;
    bool  _familySubscription;
    bool  _freeTrialIneligible;
    bool  _hasFamily;
    bool  _hasFamilyMembers;
    bool  _hasOfflineSlot;
    bool  _hasOfflineSlots;
    unsigned long long  _latestStoreTermsVersion;
    NSString * _phoneNumber;
    NSDictionary * _rawResponseData;
    NSString * _sessionIdentifier;
    double  _subscriptionExpirationTime;
    bool  _subscriptionPurchaser;
}

@property (nonatomic, readonly) unsigned long long MP_capabilities;
@property (nonatomic) unsigned long long acceptedStoreTermsVersion;
@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSArray *accountPermissions;
@property (nonatomic) long long accountStatus;
@property (nonatomic) long long carrierBundlingStatus;
@property (nonatomic, copy) NSString *cellularOperatorName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDiscoveryModeEligible, nonatomic) bool discoveryModeEligible;
@property (getter=isFamilyOrganizer, nonatomic) bool familyOrganizer;
@property (getter=isFamilySubscription, nonatomic) bool familySubscription;
@property (getter=isFreeTrialIneligible, nonatomic) bool freeTrialIneligible;
@property (nonatomic) bool hasFamily;
@property (nonatomic) bool hasFamilyMembers;
@property (nonatomic, readonly) bool hasOfflineSlot;
@property (nonatomic) bool hasOfflineSlots;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long latestStoreTermsVersion;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSDictionary *rawResponseData;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (nonatomic, copy) NSDate *subscriptionExpirationDate;
@property (getter=isSubscriptionPurchaser, nonatomic) bool subscriptionPurchaser;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (void).cxx_destruct;
- (void)_setSubscribed:(bool)arg1;
- (unsigned long long)acceptedStoreTermsVersion;
- (id)accountIdentifier;
- (id)accountPermissions;
- (long long)accountStatus;
- (long long)carrierBundlingStatus;
- (id)cellularOperatorName;
- (id)copyUserDefaultsRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (bool)hasFamily;
- (bool)hasFamilyMembers;
- (bool)hasOfflineSlot;
- (bool)hasOfflineSlots;
- (id)initWithUserDefaultsRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isDiscoveryModeEligible;
- (bool)isFamilyOrganizer;
- (bool)isFamilySubscription;
- (bool)isFreeTrialIneligible;
- (bool)isSubscribed;
- (bool)isSubscriptionPurchaser;
- (unsigned long long)latestStoreTermsVersion;
- (id)phoneNumber;
- (id)rawResponseData;
- (void)resetAccountBasedProperties;
- (void)resetCarrierBundlingProperties;
- (id)sessionIdentifier;
- (void)setAcceptedStoreTermsVersion:(unsigned long long)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountPermissions:(id)arg1;
- (void)setAccountStatus:(long long)arg1;
- (void)setCarrierBundlingStatus:(long long)arg1;
- (void)setCellularOperatorName:(id)arg1;
- (void)setDiscoveryModeEligible:(bool)arg1;
- (void)setFamilyOrganizer:(bool)arg1;
- (void)setFamilySubscription:(bool)arg1;
- (void)setFreeTrialIneligible:(bool)arg1;
- (void)setHasFamily:(bool)arg1;
- (void)setHasFamilyMembers:(bool)arg1;
- (void)setHasOfflineSlots:(bool)arg1;
- (void)setLatestStoreTermsVersion:(unsigned long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRawResponseData:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSubscriptionExpirationDate:(id)arg1;
- (void)setSubscriptionPurchaser:(bool)arg1;
- (void)setValuesUsingStatusDictionary:(id)arg1;
- (id)subscriptionExpirationDate;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (unsigned long long)MP_capabilities;

@end
