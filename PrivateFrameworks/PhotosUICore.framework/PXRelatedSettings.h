/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedSettings : PXSettings {
    bool  _enableDiversity;
    long long  _implementation;
    long long  _limit;
    bool  _passKeyAsset;
    double  _polaroidFadeDuration;
    long long  _preferredInitialNumberOfEntriesDisplayed;
    bool  _simulateSlowFetches;
}

@property (nonatomic) bool enableDiversity;
@property (nonatomic) long long implementation;
@property (nonatomic) long long limit;
@property (nonatomic) bool passKeyAsset;
@property (nonatomic) double polaroidFadeDuration;
@property (nonatomic) long long preferredInitialNumberOfEntriesDisplayed;
@property (nonatomic) bool simulateSlowFetches;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)enableDiversity;
- (long long)implementation;
- (long long)limit;
- (id)parentSettings;
- (bool)passKeyAsset;
- (double)polaroidFadeDuration;
- (long long)preferredInitialNumberOfEntriesDisplayed;
- (void)setDefaultValues;
- (void)setEnableDiversity:(bool)arg1;
- (void)setImplementation:(long long)arg1;
- (void)setLimit:(long long)arg1;
- (void)setPassKeyAsset:(bool)arg1;
- (void)setPolaroidFadeDuration:(double)arg1;
- (void)setPreferredInitialNumberOfEntriesDisplayed:(long long)arg1;
- (void)setSimulateSlowFetches:(bool)arg1;
- (bool)simulateSlowFetches;

@end
