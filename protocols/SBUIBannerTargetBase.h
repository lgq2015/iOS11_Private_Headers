/* made by EzioChiu.
 */

@protocol SBUIBannerTargetBase <NSObject>

@required

- (void*)bannerTargetIdentifier;
- (long long)bannerTargetIdiom;
- (void)cacheBannerForContext:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: SBUIBannerContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (SBUIBannerContext *)currentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (void)dismissCurrentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(SBUIBannerContext *)arg1;
- (void)registerSource:(id <SBUIBannerSource>)arg1;
- (void)removeCachedBannerForContext:(SBUIBannerContext *)arg1;
- (void)signalSource:(id <SBUIBannerSource>)arg1;
- (void)unregisterSource:(id <SBUIBannerSource>)arg1;

@end
