/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatus : NSObject <NSCopying> {
    bool  _administrator;
    long long  _carrierBundlingStatusType;
    NSDictionary * _dictionaryRepresentation;
    bool  _eligibleForFreeTrial;
    NSDate * _expirationDate;
    bool  _hasFamily;
    bool  _hasFamilyGreaterThanOneMember;
    bool  _hasOfflineSlots;
    bool  _headOfHousehold;
    bool  _inFreeTrial;
    bool  _matchEnabled;
    bool  _minorAccountHolder;
    bool  _purchaser;
    long long  _reasonType;
    long long  _statusCode;
    long long  _statusType;
    NSArray * _termsStatusList;
}

@property (getter=isAdministrator, nonatomic, readonly) bool administrator;
@property (nonatomic, readonly) long long carrierBundlingStatusType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isEligibleForFreeTrial, nonatomic, readonly) bool eligibleForFreeTrial;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool hasFamily;
@property (nonatomic, readonly) bool hasFamilyGreaterThanOneMember;
@property (nonatomic, readonly) bool hasOfflineSlots;
@property (getter=isHeadOfHousehold, nonatomic, readonly) bool headOfHousehold;
@property (getter=isInFreeTrial, nonatomic, readonly) bool inFreeTrial;
@property (getter=isMatchEnabled, nonatomic, readonly) bool matchEnabled;
@property (getter=isMinorAccountHolder, nonatomic, readonly) bool minorAccountHolder;
@property (getter=isPurchaser, nonatomic, readonly) bool purchaser;
@property (nonatomic, readonly) long long reasonType;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) long long statusType;
@property (nonatomic, readonly, copy) NSArray *termsStatusList;

- (void).cxx_destruct;
- (long long)carrierBundlingStatusType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (bool)hasFamily;
- (bool)hasFamilyGreaterThanOneMember;
- (bool)hasOfflineSlots;
- (id)initWithResponseDictionary:(id)arg1;
- (bool)isAdministrator;
- (bool)isEligibleForFreeTrial;
- (bool)isHeadOfHousehold;
- (bool)isInFreeTrial;
- (bool)isMatchEnabled;
- (bool)isMinorAccountHolder;
- (bool)isPurchaser;
- (long long)reasonType;
- (long long)statusCode;
- (long long)statusType;
- (id)termsStatusList;

@end
