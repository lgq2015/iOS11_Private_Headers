/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionPolicies : NSObject {
    _CDInteractionPolicy * _defaultPolicy;
    double  _maxLifespanInSeconds;
    unsigned long long  _maxNumberOfInteractions;
    unsigned long long  _maxNumberOfInteractionsDeletedInBatch;
    NSDictionary * _specialPolicies;
}

@property (readonly) NSDate *dateOfOldestAllowedInteraction;
@property (readonly) unsigned long long maxNumberOfInteractionsDeleted;
@property (readonly) unsigned long long maxNumberOfInteractionsStored;

+ (id)interactionPolicies;
+ (id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2;
+ (id)modifyDate:(id)arg1 usingPolicy:(id)arg2;

- (void).cxx_destruct;
- (id)dateOfOldestAllowedInteraction;
- (id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1;
- (id)description;
- (id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(bool)arg2 enforcePrivacy:(bool)arg3;
- (id)init;
- (unsigned long long)maxNumberOfInteractionsDeleted;
- (unsigned long long)maxNumberOfInteractionsStored;
- (id)policyForMechanism:(long long)arg1;
- (void)readConfigurationPlist;
- (void)setupDefaultHardcodedPolicies;

@end
