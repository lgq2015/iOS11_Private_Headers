/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <HFCharacteristicWriteActionBuilderFactory, HFServiceVendor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFCharacteristicWriteActionBuilderFactory> *sourceServicePickerItem;
@property (readonly) Class superclass;

- (id)accessories;
- (bool)actionsMayRequireDeviceUnlock;
- (bool)containsActionableCharacteristics;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)services;
- (id)sourceServicePickerItem;

@end
