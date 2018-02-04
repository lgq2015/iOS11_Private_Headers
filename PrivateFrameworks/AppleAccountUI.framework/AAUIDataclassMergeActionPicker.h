/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker {
    bool  _isAnotherAccountSyncingDataclass;
    bool  _isDataclassSyncingUsingExchangeOnly;
    bool  _isPerformingBatchMerge;
    bool  _isTetheredSyncingEnabled;
    bool  _localStoreHasReadOnlyCalendars;
    NSString * _tetheredSyncingSource;
}

@property (setter=setAnotherAccountIsSyncingDataclass:, nonatomic) bool isAnotherAccountSyncingDataclass;
@property (setter=setDataclassIsSyncingUsingExchangeOnly:, nonatomic) bool isDataclassSyncingUsingExchangeOnly;
@property (setter=setPerformingBatchMerge:, nonatomic) bool isPerformingBatchMerge;
@property (setter=setTetheredSyncingEnabled:, nonatomic) bool isTetheredSyncingEnabled;
@property (nonatomic) bool localStoreHasReadOnlyCalendars;
@property (nonatomic) NSString *tetheredSyncingSource;

- (id)descriptionForDataclassAction:(id)arg1;
- (bool)isAnotherAccountSyncingDataclass;
- (bool)isDataclassSyncingUsingExchangeOnly;
- (bool)isPerformingBatchMerge;
- (bool)isTetheredSyncingEnabled;
- (bool)localStoreHasReadOnlyCalendars;
- (id)message;
- (void)setAnotherAccountIsSyncingDataclass:(bool)arg1;
- (void)setDataclassIsSyncingUsingExchangeOnly:(bool)arg1;
- (void)setLocalStoreHasReadOnlyCalendars:(bool)arg1;
- (void)setPerformingBatchMerge:(bool)arg1;
- (void)setTetheredSyncingEnabled:(bool)arg1;
- (void)setTetheredSyncingSource:(id)arg1;
- (id)tetheredSyncingSource;
- (id)title;

@end
