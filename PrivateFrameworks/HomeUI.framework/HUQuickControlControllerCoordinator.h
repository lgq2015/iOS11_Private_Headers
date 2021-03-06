/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlControllerCoordinator : NSObject <HFItemManagerDelegate, HFOverrideCharacteristicValueProvider, HUQuickControlControllerDelegate> {
    HUQuickControlController * _activeController;
    HUQuickControlController * _alternateController;
    <HUQuickControlControllerCoordinatorDelegate> * _delegate;
    <NACancelable> * _enqueuedSourceItemUpdateCancellationToken;
    HMHome * _home;
    <HFIconDescriptor> * _iconDescriptor;
    <HUQuickControlInteractionHost> * _interactionHost;
    HFItem<NSCopying> * _item;
    HUQuickControlSourceItemManager * _itemManager;
    HUQuickControlController * _primaryController;
    NSString * _primaryStatusText;
    HFItem * _reachabilityItem;
    HFSimpleItemManager * _reachabilityItemManager;
    bool  _reachable;
    NSString * _secondaryStatusText;
    bool  _showIconOffState;
    HFOverrideCharacteristicValueSource * _valueSource;
}

@property (nonatomic, retain) HUQuickControlController *activeController;
@property (nonatomic, readonly) NSArray *allControllers;
@property (nonatomic, readonly) HUQuickControlController *alternateController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlControllerCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <NACancelable> *enqueuedSourceItemUpdateCancellationToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) <HUQuickControlInteractionHost> *interactionHost;
@property (nonatomic, readonly) HFItem<NSCopying> *item;
@property (nonatomic, readonly) HUQuickControlSourceItemManager *itemManager;
@property (nonatomic, readonly) HUQuickControlController *primaryController;
@property (nonatomic, copy) NSString *primaryStatusText;
@property (nonatomic, readonly) HFItem *reachabilityItem;
@property (nonatomic, readonly) HFSimpleItemManager *reachabilityItemManager;
@property (getter=isReachable, nonatomic, readonly) bool reachable;
@property (nonatomic, copy) NSString *secondaryStatusText;
@property (nonatomic, readonly) bool showIconOffState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFOverrideCharacteristicValueSource *valueSource;

- (void).cxx_destruct;
- (id)_characteristicUpdateSuppressionReasonForController:(id)arg1;
- (id)_controllerForControllableCharacteristic:(id)arg1;
- (void)_createControlControllersForControlItems:(id)arg1;
- (id)_itemToUseForIconAndStatus;
- (void)_updateIconDescriptorNotifyingDelegate:(bool)arg1;
- (void)_updateReachabilityStateNotifiyingDelegate:(bool)arg1;
- (void)_updateStatusTextNotifyingDelegate:(bool)arg1;
- (id)activeController;
- (id)allControllers;
- (id)alternateController;
- (void)dealloc;
- (id)delegate;
- (id)enqueuedSourceItemUpdateCancellationToken;
- (id)home;
- (id)iconDescriptor;
- (id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3 delegate:(id)arg4;
- (id)interactionHost;
- (bool)isReachable;
- (id)item;
- (id)itemManager;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)primaryController;
- (id)primaryStatusText;
- (void)quickControlController:(id)arg1 didUpdateOverrideStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3;
- (void)quickControlController:(id)arg1 valueDidChange:(id)arg2;
- (void)quickControlControllerDidEndPossibleWrites:(id)arg1;
- (void)quickControlControllerWillBeginPossibleWrites:(id)arg1;
- (id)reachabilityItem;
- (id)reachabilityItemManager;
- (id)secondaryStatusText;
- (void)setActiveController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnqueuedSourceItemUpdateCancellationToken:(id)arg1;
- (void)setInteractionHost:(id)arg1;
- (void)setPrimaryStatusText:(id)arg1;
- (void)setSecondaryStatusText:(id)arg1;
- (bool)showIconOffState;
- (id)valueSource;
- (id)valueSource:(id)arg1 overrideValueForCharacteristic:(id)arg2;
- (bool)valueSource:(id)arg1 shouldOverrideValueForCharacteristic:(id)arg2;

@end
