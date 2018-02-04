/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoPlace : NSObject {
    bool  _isHome;
    PLRevGeoPlaceAnnotation * _placeAnnotation;
    NSMutableArray * _placeTypeInfoMap;
}

@property (nonatomic) bool isHome;

+ (id /* block */)sortedAdditionalPlaceInfoComparator;

- (void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned long long)arg3;
- (unsigned long long)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned long long)arg2;
- (void)_mergeGEOMapItem:(id)arg1;
- (id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long*)arg3 outPreviousOrderType:(unsigned long long*)arg4;
- (id)_placeInfosForOrderType:(unsigned long long)arg1 createIfNeeded:(bool)arg2;
- (void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned long long)arg2;
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithGEOMapItem:(id)arg1 placeAnnotationData:(id)arg2;
- (bool)isHome;
- (id)minimumAreaForOrderType:(unsigned long long)arg1 name:(id)arg2;
- (id)placeInfosForOrderType:(unsigned long long)arg1;
- (void)setIsHome:(bool)arg1;

@end
