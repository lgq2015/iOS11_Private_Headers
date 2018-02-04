/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceActionItemProvider : HFItemProvider {
    NSMutableSet * _actionItems;
    HMActionSet * _actionSet;
    HFItemBuilder<HFActionSetBuilderProtocol> * _actionSetBuilder;
    HMHome * _home;
    HFActionSetValueSource * _valueSource;
}

@property (nonatomic, retain) NSMutableSet *actionItems;
@property (nonatomic, retain) HMActionSet *actionSet;
@property (nonatomic, retain) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (nonatomic) <HFActionSetValueSourceDelegate> *actionSetValueSourceDelegate;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFActionSetValueSource *valueSource;

- (void).cxx_destruct;
- (id)_actionItemForCharacteristic:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3;
- (id)_addOrUpdateActionItemWithAction:(id)arg1 actionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4;
- (id)_createActionItemForCharacteristic:(id)arg1 home:(id)arg2;
- (id)actionItems;
- (id)actionSet;
- (id)actionSetBuilder;
- (id)actionSetValueSourceDelegate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)initWithHome:(id)arg1 actionSetBuilder:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setActionItems:(id)arg1;
- (void)setActionSet:(id)arg1;
- (void)setActionSetBuilder:(id)arg1;
- (void)setActionSetValueSourceDelegate:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
