/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerBuilder : HFItemBuilder {
    HFMutableSetDiff * _actionSetBuilders;
    HFTriggerAnonymousActionSetBuilder * _anonymousActionSetBuilder;
    HFConditionCollection * _conditionCollection;
    <HFTriggerBuilderContextProviding> * _context;
    bool  _enabled;
    HFMutableSetDiff * _endEventBuildersDiff;
    NSString * _name;
}

@property (nonatomic, retain) HFMutableSetDiff *actionSetBuilders;
@property (nonatomic, readonly) NSArray *actionSets;
@property (getter=areActionsAffectedByEndEvents, nonatomic, readonly) bool actionsAffectedByEndEvents;
@property (nonatomic, retain) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder;
@property (nonatomic, retain) HFConditionCollection *conditionCollection;
@property (nonatomic, retain) <HFTriggerBuilderContextProviding> *context;
@property (nonatomic, readonly) HFDurationEventBuilder *designatedDurationEventBuilder;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSArray *endEventBuilders;
@property (nonatomic, retain) HFMutableSetDiff *endEventBuildersDiff;
@property (nonatomic, readonly) bool hasActions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool requiresConfirmationToRun;
@property (nonatomic, readonly) bool requiresFMFDeviceToRun;
@property (nonatomic, readonly) bool requiresHomeHub;
@property (nonatomic, readonly) bool requiresLocationServicesAuthorization;
@property (nonatomic, readonly) bool requiresUpdatedHomeHub;
@property (nonatomic, readonly) bool secureActionsRequireConfirmationToRun;
@property (nonatomic, readonly) bool supportsConditions;
@property (nonatomic, readonly) bool supportsEndEvents;
@property (nonatomic, readonly) HMTrigger *trigger;

+ (Class)homeKitRepresentationClass;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_commitAddTriggerToHome:(id)arg1;
- (id)_deleteTrigger:(id)arg1 fromHome:(id)arg2;
- (void)_didReplaceBackingTrigger;
- (id)_performValidation;
- (id)_uniquelyRenameTrigger:(id)arg1 pendingReplaceByNewTrigger:(id)arg2;
- (id)_updateActionSets;
- (id)_updateAnonymousActionSet;
- (id)_updateConditions;
- (id)_updateEnabledState;
- (id)_updateEndEvents;
- (id)_updateName;
- (id)actionSetBuilders;
- (id)actionSets;
- (void)addAction:(id)arg1;
- (void)addActionSet:(id)arg1;
- (void)addEndEventBuilder:(id)arg1;
- (id)anonymousActionSetBuilder;
- (bool)areActionsAffectedByEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)conditionCollection;
- (id)context;
- (id)deleteTrigger;
- (id)designatedDurationEventBuilder;
- (bool)enabled;
- (id)endEventBuilders;
- (id)endEventBuildersDiff;
- (bool)hasActions;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 context:(id)arg2;
- (bool)markTriggerAsHomeAppCreated;
- (id)name;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (void)removeAction:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)removeAllEndEventBuilders;
- (void)removeEndEventBuilder:(id)arg1;
- (id)replaceCurrentTriggerWithTrigger:(id)arg1;
- (bool)requiresConfirmationToRun;
- (bool)requiresFMFDeviceToRun;
- (bool)requiresHomeHub;
- (bool)requiresLocationServicesAuthorization;
- (bool)requiresUpdatedHomeHub;
- (bool)secureActionsRequireConfirmationToRun;
- (void)setActionSetBuilders:(id)arg1;
- (void)setAnonymousActionSetBuilder:(id)arg1;
- (void)setConditionCollection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEndEvent:(id)arg1;
- (void)setEndEventBuildersDiff:(id)arg1;
- (void)setMarkTriggerAsHomeAppCreated:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTrigger:(id)arg1;
- (bool)supportsConditions;
- (bool)supportsEndEvents;
- (id)trigger;
- (void)updateAction:(id)arg1;
- (void)updateActionSet:(id)arg1;
- (void)updateEndEventBuilder:(id)arg1;

@end
