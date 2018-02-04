/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelapseListingFactory : NSObject {
    NSMutableSet * _assetListings;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initLibrary;
- (void)discardAssets;
- (id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (id)posterImageWithTheme:(unsigned long long)arg1;
- (void)setTimelapseListingHasAssets:(id)arg1;

@end
