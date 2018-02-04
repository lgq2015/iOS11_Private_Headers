/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingDefaultAdapterCollection : NSObject {
    HFAccessorySettingManagedConfigurationAdapter * _managedConfigurationAdapter;
    HFAccessorySettingAdapter * _mobileTimerAdapter;
    HFAccessorySettingSiriLanguageAdapter * _siriLanguageAdapter;
}

@property (nonatomic, readonly) NSSet *allAdapters;
@property (nonatomic, retain) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter;
@property (nonatomic, retain) HFAccessorySettingAdapter *mobileTimerAdapter;
@property (nonatomic, retain) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter;

- (void).cxx_destruct;
- (id)allAdapters;
- (id)managedConfigurationAdapter;
- (id)mobileTimerAdapter;
- (void)setManagedConfigurationAdapter:(id)arg1;
- (void)setMobileTimerAdapter:(id)arg1;
- (void)setSiriLanguageAdapter:(id)arg1;
- (id)siriLanguageAdapter;

@end
