/* made by EzioChiu.
 */

@protocol PXZoomAnimationContext <NSObject>

@required

- (double)animationDuration;
- (long long)animationType;
- (void)didEndAnimation:(long long)arg1;
- (double)fromAlpha;
- (PXRegionOfInterest *)fromRegionOfInterest;
- (PXNonuniformTransform *)fromTransform;
- (bool)isMatchingRegionsOfInterest;
- (bool)keepsSourceRegionOfInterestContent;
- (void)registerCleanupHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (double)toAlpha;
- (PXRegionOfInterest *)toRegionOfInterest;
- (PXNonuniformTransform *)toTransform;
- (long long)willBeginAnimation;

@end
