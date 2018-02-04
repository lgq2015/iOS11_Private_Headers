/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSubscriptionStatusResponse : SUScriptObject {
    NSNumber * _acceptedStoreTermsVersion;
    NSString * _accountIdentifier;
    NSString * _accountStatus;
    NSString * _carrierBundlingStatus;
    id  _discoveryModeEligible;
    NSString * _eligibilityStatus;
    id  _familyOrganizer;
    id  _familySubscription;
    id  _final;
    id  _hasFamily;
    id  _hasFamilyMembers;
    NSNumber * _latestStoreTermsVersion;
    SUScriptDictionary * _rawResponseData;
    NSString * _sessionIdentifier;
    id  _subscribed;
}

@property (readonly) NSNumber *acceptedStoreTermsVersion;
@property (readonly) NSString *accountIdentifier;
@property (readonly) NSString *accountStatus;
@property (readonly) NSString *accountStatusNeedsAuthentication;
@property (readonly) NSString *accountStatusNotSubscribed;
@property (readonly) NSString *accountStatusSubscribed;
@property (readonly) NSString *accountStatusUnknown;
@property (readonly) NSString *carrierBundlingStatus;
@property (getter=isDiscoveryModeEligible, readonly) id discoveryModeEligible;
@property (readonly) NSString *eligibilityStatus;
@property (readonly) NSString *eligibilityStatusEligible;
@property (readonly) NSString *eligibilityStatusNotEligible;
@property (readonly) NSString *eligibilityStatusUnknown;
@property (getter=isFamilyOrganizer, readonly) id familyOrganizer;
@property (getter=isFamilySubscription, readonly) id familySubscription;
@property (getter=isFinal, readonly) id final;
@property (readonly) id hasFamily;
@property (readonly) id hasFamilyMembers;
@property (readonly) NSNumber *latestStoreTermsVersion;
@property (readonly) SUScriptDictionary *rawResponseData;
@property (readonly) NSString *sessionIdentifier;
@property (getter=isSubscribed, readonly) id subscribed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void).cxx_destruct;
- (id)_className;
- (id)acceptedStoreTermsVersion;
- (id)accountIdentifier;
- (id)accountStatus;
- (id)accountStatusNeedsAuthentication;
- (id)accountStatusNotSubscribed;
- (id)accountStatusSubscribed;
- (id)accountStatusUnknown;
- (id)attributeKeys;
- (id)carrierBundlingStatus;
- (id)eligibilityStatus;
- (id)eligibilityStatusEligible;
- (id)eligibilityStatusNotEligible;
- (id)eligibilityStatusUnknown;
- (id)hasFamily;
- (id)hasFamilyMembers;
- (unsigned long long)hash;
- (id)initWithSubscriptionStatus:(id)arg1 isFinal:(bool)arg2;
- (id)isDiscoveryModeEligible;
- (bool)isEqual:(id)arg1;
- (id)isFamilyOrganizer;
- (id)isFamilySubscription;
- (id)isFinal;
- (id)isSubscribed;
- (id)latestStoreTermsVersion;
- (id)rawResponseData;
- (id)scriptAttributeKeys;
- (id)sessionIdentifier;

@end
