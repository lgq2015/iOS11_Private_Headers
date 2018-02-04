/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXZoomAnimationContext : NSObject <PXZoomAnimationContext> {
    id /* block */  __allAnimationsCompletionHandler;
    double  _animationDuration;
    NSObject<OS_dispatch_group> * _animationGroup;
    long long  _animationType;
    NSMutableArray * _cleanupHandlers;
    double  _fromAlpha;
    PXRegionOfInterest * _fromRegionOfInterest;
    PXNonuniformTransform * _fromTransform;
    bool  _keepsSourceRegionOfInterestContent;
    bool  _matchingRegionsOfInterest;
    double  _toAlpha;
    PXRegionOfInterest * _toRegionOfInterest;
    PXNonuniformTransform * _toTransform;
}

@property (setter=_setAllAnimationsCompletionHandler:, nonatomic, copy) id /* block */ _allAnimationsCompletionHandler;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fromAlpha;
@property (nonatomic, retain) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic, retain) PXNonuniformTransform *fromTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keepsSourceRegionOfInterestContent;
@property (getter=isMatchingRegionsOfInterest, nonatomic) bool matchingRegionsOfInterest;
@property (readonly) Class superclass;
@property (nonatomic) double toAlpha;
@property (nonatomic, retain) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, retain) PXNonuniformTransform *toTransform;

- (void).cxx_destruct;
- (id /* block */)_allAnimationsCompletionHandler;
- (void)_setAllAnimationsCompletionHandler:(id /* block */)arg1;
- (double)animationDuration;
- (long long)animationType;
- (void)cleanup;
- (void)didEndAnimation:(long long)arg1;
- (double)fromAlpha;
- (id)fromRegionOfInterest;
- (id)fromTransform;
- (id)init;
- (bool)isMatchingRegionsOfInterest;
- (bool)keepsSourceRegionOfInterestContent;
- (void)notifyWhenAllAnimationsCompleted:(id /* block */)arg1;
- (void)registerCleanupHandler:(id /* block */)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationType:(long long)arg1;
- (void)setFromAlpha:(double)arg1;
- (void)setFromRegionOfInterest:(id)arg1;
- (void)setFromTransform:(id)arg1;
- (void)setKeepsSourceRegionOfInterestContent:(bool)arg1;
- (void)setMatchingRegionsOfInterest:(bool)arg1;
- (void)setToAlpha:(double)arg1;
- (void)setToRegionOfInterest:(id)arg1;
- (void)setToTransform:(id)arg1;
- (double)toAlpha;
- (id)toRegionOfInterest;
- (id)toTransform;
- (long long)willBeginAnimation;

@end
