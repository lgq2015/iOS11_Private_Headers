/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceItem : HFItem <HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMService * _service;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_serviceTypeToServiceItemClassMap;
+ (Class)itemClassForService:(id)arg1;
+ (id)serviceItemForService:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (id)_allRepresentedCharacteristics;
- (id)_allRepresentedServices;
- (id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (bool)actionsMayRequireDeviceUnlock;
- (id)allControlItems;
- (bool)containsActionableCharacteristics;
- (id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)controlItemValueSourceForPrimaryService;
- (id)controlItemValueSourceForServices:(id)arg1;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createControlItems;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)description;
- (id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)homeKitObject;
- (id)incrementalStateControlItem;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2;
- (id)init;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2;
- (id)primaryStateControlItem;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)service;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)valueSource;

@end
