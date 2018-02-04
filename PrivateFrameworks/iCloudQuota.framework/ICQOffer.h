/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQOffer : NSObject {
    NSString * _accountAltDSID;
    _ICQBannerSpecification * _bannerSpecification;
    NSString * _bundleIdentifier;
    _ICQButtonSpecification * _buttonSpecification;
    NSDate * _expirationDate;
    bool  _iTunesAccountExists;
    long long  _level;
    NSString * _notificationID;
    NSString * _offerId;
    long long  _offerType;
    NSDate * _retrievalDate;
    NSDictionary * _serverDictionary;
    _ICQUpgradeFlowSpecification * _upgradeFlowSpecification;
}

@property (nonatomic, readonly) double _callbackInterval;
@property (nonatomic, retain) NSString *accountAltDSID;
@property (nonatomic, retain) _ICQBannerSpecification *bannerSpecification;
@property (nonatomic, readonly) _ICQBannerSpecification *bannerSpecification;
@property (getter=isBuddyOffer, nonatomic, readonly) bool buddyOffer;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) _ICQButtonSpecification *buttonSpecification;
@property (nonatomic, retain) _ICQButtonSpecification *buttonSpecification;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) bool iTunesAccountExists;
@property (nonatomic) bool iTunesAccountExists;
@property (nonatomic) long long level;
@property (nonatomic, retain) NSString *notificationID;
@property (nonatomic, retain) NSString *offerId;
@property (nonatomic, readonly) long long offerType;
@property (nonatomic, retain) NSDate *retrievalDate;
@property (nonatomic, readonly) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (nonatomic, retain) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;

+ (id)sampleOfferForLevel:(long long)arg1;

- (void).cxx_destruct;
- (double)_callbackInterval;
- (id)accountAltDSID;
- (id)alertSpecificationAtIndex:(unsigned long long)arg1;
- (id)alertSpecificationForAlertKey:(id)arg1;
- (id)bannerSpecification;
- (id)bundleIdentifier;
- (id)buttonSpecification;
- (id)expirationDate;
- (bool)iTunesAccountExists;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;
- (bool)isBuddyOffer;
- (bool)isExpired;
- (long long)level;
- (id)notificationID;
- (id)offerId;
- (long long)offerType;
- (id)retrievalDate;
- (void)setAccountAltDSID:(id)arg1;
- (void)setBannerSpecification:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setButtonSpecification:(id)arg1;
- (void)setITunesAccountExists:(bool)arg1;
- (void)setLevel:(long long)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setOfferId:(id)arg1;
- (void)setRetrievalDate:(id)arg1;
- (void)setUpgradeFlowSpecification:(id)arg1;
- (id)storagePurchaseKeybagForButtonId:(id)arg1;
- (id)upgradeFlowSpecification;

@end
