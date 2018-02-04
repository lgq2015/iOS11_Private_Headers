/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQDaemonOffer : ICQDaemonPersisted {
    _ICQAlertSpecification * _internalAlertSpecification;
    _ICQFollowupSpecification * _internalFollowupSpecification;
    NSString * _notificationID;
    NSString * _offerId;
}

@property (nonatomic, readonly) _ICQAlertSpecification *alertSpecification;
@property (getter=isBuddyOffer, nonatomic, readonly) bool buddyOffer;
@property (nonatomic, readonly) _ICQFollowupSpecification *followupSpecification;
@property (nonatomic, retain) _ICQAlertSpecification *internalAlertSpecification;
@property (nonatomic, retain) _ICQFollowupSpecification *internalFollowupSpecification;
@property (nonatomic, readonly) long long level;
@property (nonatomic, retain) NSString *notificationID;
@property (nonatomic, copy) NSString *offerId;

+ (id)defaultPlaceholderKeys;
+ (id)persistenceKey;
+ (bool)placeholderExistsInString:(id)arg1;
+ (id)placeholderKeysInString:(id)arg1 fromKeys:(id)arg2;
+ (id)stringWithPlaceholderFormat:(id)arg1;
+ (id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2;
+ (id)stringWithPlaceholderFormat:(id)arg1 substitutions:(id)arg2;
+ (id)substitutionForPlaceholderKey:(id)arg1 outIsBelowMin:(bool*)arg2;
+ (id)substitutionsForPlaceholderKeys:(id)arg1;
+ (id)substitutionsForPlaceholderKeys:(id)arg1 checkIfBelowMin:(bool)arg2 outIsMissingSubstitution:(bool*)arg3;

- (void).cxx_destruct;
- (void)_addSampleAlert;
- (void)_initSubclassFromServerDictionary;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (id)_mutablePersistenceDictionary;
- (id)alertSpecification;
- (id)alertSpecificationForAlertKey:(id)arg1;
- (id)followupSpecification;
- (id)initWithDictionary:(id)arg1;
- (id)internalAlertSpecification;
- (id)internalFollowupSpecification;
- (bool)isBuddyOffer;
- (long long)level;
- (id)notificationID;
- (id)offerId;
- (void)setInternalAlertSpecification:(id)arg1;
- (void)setInternalFollowupSpecification:(id)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setOfferId:(id)arg1;
- (void)setServerDictionary:(id)arg1;

@end
