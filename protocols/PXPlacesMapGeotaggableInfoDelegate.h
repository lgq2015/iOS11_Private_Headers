/* made by EzioChiu.
 */

@protocol PXPlacesMapGeotaggableInfoDelegate <NSObject>

@optional

- (void)imageForGeotaggable:(void *)arg1 ofSize:(void *)arg2 networkAccessAllowed:(void *)arg3 andCompletion:(void *)arg4; // needs 4 arg types, found 12: <PXPlacesGeotaggable> *, struct CGSize { double x1; double x2; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXPlacesGeotaggable> *, struct CGImage { }*, NSError *, NSDictionary *, void*

@end
