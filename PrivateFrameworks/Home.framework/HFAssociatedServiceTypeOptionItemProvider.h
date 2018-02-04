/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAssociatedServiceTypeOptionItemProvider : HFStaticItemProvider {
    HMHome * _home;
    HMService * _service;
    NSString * _serviceType;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic, readonly) NSString *serviceType;

+ (id)_allItemsForService:(id)arg1 serviceType:(id)arg2;
+ (id)_itemForService:(id)arg1 associatedServiceType:(id)arg2;
+ (id)localizedAssociatedServiceTypeStringForServiceType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)initWithItems:(id)arg1;
- (id)initWithService:(id)arg1 serviceType:(id)arg2 home:(id)arg3;
- (id)initWithServiceType:(id)arg1 home:(id)arg2;
- (id)service;
- (id)serviceType;

@end
