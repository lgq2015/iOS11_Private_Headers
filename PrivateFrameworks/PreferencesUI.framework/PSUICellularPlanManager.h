/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularPlanManager : NSObject {
    bool  _cacheIsValid;
    bool  _hasHomePlan;
    bool  _hasSubscriptions;
    bool  _isMultipleDataPlanSupportAvailable;
    bool  _isRoamingPlanSupportAvailable;
    NSArray * _planItems;
    CTCellularPlanItem * _selectedPlanItem;
}

@property (nonatomic, readonly) bool hasSubscriptions;
@property (nonatomic, readonly) bool isAnyPlanActivating;
@property (nonatomic, readonly) bool isMultipleDataPlanSupportAvailable;
@property (nonatomic, readonly) bool isRoamingPlanSupportAvailable;
@property (nonatomic, readonly) bool isSelectedPlanActivating;
@property (nonatomic, readonly) bool isSelectedPlanExpired;
@property (nonatomic, readonly) NSArray *planItems;
@property (nonatomic, retain) CTCellularPlanItem *selectedPlanItem;
@property (nonatomic, readonly) bool shouldShowAccountRenew;
@property (nonatomic, readonly) bool shouldShowAccountSetup;
@property (nonatomic, readonly) bool shouldShowAddPlan;
@property (nonatomic, readonly) bool shouldShowDataPlanList;
@property (nonatomic, readonly) bool shouldShowPlanSelector;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_fetchPlanItemsIfNeeded;
- (void)_invalidatePlanItemsCache;
- (void)_planInfoDidChange;
- (void)dealloc;
- (bool)hasSubscriptions;
- (id)init;
- (bool)isAnyPlanActivating;
- (bool)isMultipleDataPlanSupportAvailable;
- (bool)isRoamingPlanSupportAvailable;
- (bool)isSelectedPlanActivating;
- (bool)isSelectedPlanExpired;
- (id)planItems;
- (id)selectedPlanItem;
- (void)setSelectedPlanItem:(id)arg1;
- (bool)shouldShowAccountRenew;
- (bool)shouldShowAccountSetup;
- (bool)shouldShowAddPlan;
- (bool)shouldShowDataPlanList;
- (bool)shouldShowPlanSelector;

@end
