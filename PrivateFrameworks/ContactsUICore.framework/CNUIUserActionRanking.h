/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionRanking : NSObject <CNUIUserActionRanking> {
    <CNUIInteractionAdvisor> * _interactionAdvisor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUIInteractionAdvisor> *interactionAdvisor;
@property (readonly) Class superclass;

+ (id)advisorSettingsForIdentifyingMostRecentAction:(id)arg1 actionType:(id)arg2;
+ (id)advisorSettingsForSortingAddresses:(id)arg1 actionType:(id)arg2;
+ (id)constrainMechanismsForActionType:(id)arg1;
+ (id)sortKeyWithUsername:(id)arg1 bundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInteractionAdvisor:(id)arg1;
- (id)interactionAdvisor;
- (id)selectMostRecentActionFromItems:(id)arg1;
- (id)selectRecentActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)sortActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)sortKeysByRankingAddresses:(id)arg1 actionType:(id)arg2 scheduler:(id)arg3;

@end
