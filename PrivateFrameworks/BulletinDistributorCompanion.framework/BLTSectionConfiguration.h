/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal <BLTWatchKitAppListDelegate> {
    <BLTSectionConfigurationDelegate> * _delegate;
    BLTWatchKitAppList * _watchKitAppList;
    bool  _watchKitAppListLoaded;
    NSCondition * _watchKitAppListLoadedCondition;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_waitForWatchKitAppListLoaded;
- (id)delegate;
- (id)initWithWatchKitAppList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldSectionIDSettingsAlwaysSync:(id)arg1;
- (void)watchKitAppList:(id)arg1 added:(id)arg2 removed:(id)arg3;

@end
