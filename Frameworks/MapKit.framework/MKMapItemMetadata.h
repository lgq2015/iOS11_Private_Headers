/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadata : NSObject {
    GEOBusiness * _business;
    <MKMapItemVendorDeal> * _deal;
    bool  _hasCheckedForVendorDeal;
    NSMutableDictionary * _imageCache;
}

@property (nonatomic, readonly) GEOBusiness *business;
@property (nonatomic, retain) <MKMapItemVendorDeal> *deal;
@property (nonatomic) bool hasCheckedForVendorDeal;
@property (nonatomic, retain) NSMutableDictionary *imageCache;

- (void).cxx_destruct;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)business;
- (id)deal;
- (id)description;
- (bool)hasCheckedForVendorDeal;
- (id)imageCache;
- (id)imageForURL:(id)arg1;
- (id)initWithBusiness:(id)arg1;
- (void)setDeal:(id)arg1;
- (void)setHasCheckedForVendorDeal:(bool)arg1;
- (void)setImageCache:(id)arg1;

@end