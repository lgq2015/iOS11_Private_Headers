/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
 */

@interface ACCNavigationAccessory : NSObject {
    NSString * _accessoryUID;
    NSMutableDictionary * _componentListInternal;
    ACCNavigationProvider * _provider;
}

@property (nonatomic, retain) NSString *accessoryUID;
@property (readonly) NSDictionary *componentList;
@property (retain) NSMutableDictionary *componentListInternal;
@property (nonatomic, readonly) ACCNavigationProvider *provider;

- (void).cxx_destruct;
- (id)accessoryUID;
- (bool)componentIdListIsEnabled:(id)arg1;
- (id)componentList;
- (id)componentListForIdList:(id)arg1;
- (id)componentListInternal;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessoryUID:(id)arg1 provider:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (void)setAccessoryUID:(id)arg1;
- (void)setComponentListInternal:(id)arg1;
- (void)updateLaneGuidanceInfo:(id)arg1 componentList:(id)arg2;
- (void)updateManeuverInfo:(id)arg1 componentList:(id)arg2;
- (void)updateRouteGuidanceInfo:(id)arg1 componentList:(id)arg2;

@end
