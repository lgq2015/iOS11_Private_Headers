/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIOnboardingController : NSObject {
    WLKUIAccessViewController * _accessVC;
    NSArray * _bundleIDs;
    id /* block */  _completionHandler;
    NSDictionary * _options;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (id)eligibleBundleIDs;

- (void).cxx_destruct;
- (void)_runConsentFlow;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)dismiss;
- (void)present;
- (void)presentForBundleIDs:(id)arg1 withOptions:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
