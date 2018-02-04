/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlPanelController : NSObject <HUControlViewDelegate> {
    NSMutableSet * _allItems;
    NSSet * _configurations;
    <HUControlPanelControllerDelegate> * _delegate;
    NSMutableDictionary * _interactionStateByControlID;
}

@property (nonatomic, readonly) NSSet *allItems;
@property (nonatomic, readonly) NSSet *configurations;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUControlPanelControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *interactionStateByControlID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configurationForItem:(id)arg1;
- (id)_controlItemForControlView:(id)arg1;
- (id)_controlPanelItemForControlView:(id)arg1;
- (id)_createConfigurations;
- (id)_createWriteThrottleForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (void)_updateStateForControlView:(id)arg1 controlPanelItem:(id)arg2;
- (void)_updateWriteStateForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (void)_updateWriteStateForControlView:(id)arg1;
- (id)_valueTransformerForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (void)addItem:(id)arg1;
- (id)allItems;
- (Class)cellClassForItem:(id)arg1;
- (id)configurations;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)controlViewDidBeginUserInteraction:(id)arg1;
- (void)controlViewDidEndUserInteraction:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)interactionStateByControlID;
- (void)removeItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (bool)shouldDisplayItem:(id)arg1;
- (bool)shouldShowSectionTitleForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
