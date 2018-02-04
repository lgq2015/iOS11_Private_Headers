/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface _PXPlacesImageCacheKey : NSObject {
    <PXPlacesGeotaggable> * _geotaggable;
    NSString * _key;
}

- (void).cxx_destruct;
- (id)geotaggable;
- (unsigned long long)hash;
- (id)initWithGeotaggable:(id)arg1 andKey:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;

@end
