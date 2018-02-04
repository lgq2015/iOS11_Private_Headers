/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUserActivity : SADomainObject

@property (nonatomic, copy) NSArray *eligibileFunctions;
@property (nonatomic, copy) NSString *internalGUID;
@property (nonatomic) bool isEligibleForAppPunchout;
@property (nonatomic) bool isEligibleForDirections;
@property (nonatomic) bool isEligibleForHandoff;
@property (nonatomic) bool isEligibleForPublicIndexing;
@property (nonatomic) bool isEligibleForReminders;
@property (nonatomic) bool isEligibleForSearch;

+ (id)userActivity;
+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)eligibileFunctions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)internalGUID;
- (bool)isEligibleForAppPunchout;
- (bool)isEligibleForDirections;
- (bool)isEligibleForHandoff;
- (bool)isEligibleForPublicIndexing;
- (bool)isEligibleForReminders;
- (bool)isEligibleForSearch;
- (void)setEligibileFunctions:(id)arg1;
- (void)setInternalGUID:(id)arg1;
- (void)setIsEligibleForAppPunchout:(bool)arg1;
- (void)setIsEligibleForDirections:(bool)arg1;
- (void)setIsEligibleForHandoff:(bool)arg1;
- (void)setIsEligibleForPublicIndexing:(bool)arg1;
- (void)setIsEligibleForReminders:(bool)arg1;
- (void)setIsEligibleForSearch:(bool)arg1;

@end
