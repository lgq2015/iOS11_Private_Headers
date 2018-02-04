/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget> {
    void * _identifier;
    long long  _idiom;
    <SBUIBannerTargetImplementation> * _implementation;
}

@property (nonatomic, readonly) void*bannerTargetIdentifier;
@property (nonatomic, readonly) long long bannerTargetIdiom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void*)bannerTargetIdentifier;
- (long long)bannerTargetIdiom;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)currentBannerContextForSource:(id)arg1;
- (id)description;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)initWithTargetImplementation:(id)arg1;
- (void)invalidate;
- (bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)registerSource:(id)arg1;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)signalSource:(id)arg1;
- (void)unregisterSource:(id)arg1;

@end
