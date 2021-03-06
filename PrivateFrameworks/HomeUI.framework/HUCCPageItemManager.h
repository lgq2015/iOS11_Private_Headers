/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCPageItemManager : HFItemManager {
    bool  _homeAppRemoved;
}

@property (getter=isHomeAppRemoved, nonatomic) bool homeAppRemoved;
@property (nonatomic, readonly) bool shouldShowScenesPage;
@property (nonatomic, readonly) bool shouldShowServicesPage;

- (id)_buildItemProvidersForHome:(id)arg1;
- (bool)isHomeAppRemoved;
- (void)setHomeAppRemoved:(bool)arg1;
- (bool)shouldShowScenesPage;
- (bool)shouldShowServicesPage;

@end
