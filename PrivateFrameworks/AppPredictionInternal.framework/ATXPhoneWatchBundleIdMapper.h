/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXPhoneWatchBundleIdMapper : NSObject {
    NSSet * _blackListedWatchApps;
    LSApplicationProxy * _mockApplicationProxy;
    NSDictionary * _phoneToWatch;
    NSSet * _sameBundleIdApps;
    NSDictionary * _watchToPhone;
}

@property (nonatomic, retain) LSApplicationProxy *mockApplicationProxy;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetClass:(Class)arg1;
- (id)mockApplicationProxy;
- (id)phoneBundleIdForWatchBundleId:(id)arg1;
- (void)setMockApplicationProxy:(id)arg1;
- (id)watchBundleIdForPhoneBundleId:(id)arg1;

@end
