/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemDetourInfo : NSObject {
    GEOPDResultDetourInfo * _detourInfo;
}

@property (nonatomic, readonly) double detourDistance;
@property (getter=_detourInfo, nonatomic, readonly) GEOPDResultDetourInfo *detourInfo;
@property (nonatomic, readonly) NSData *detourInfoAsData;
@property (nonatomic, readonly) double detourTime;
@property (nonatomic, readonly) double distanceToPlace;
@property (nonatomic, readonly) double timeToPlace;

- (void).cxx_destruct;
- (id)_detourInfo;
- (double)detourDistance;
- (id)detourInfoAsData;
- (double)detourTime;
- (double)distanceToPlace;
- (id)init;
- (id)initWithResultDetourInfo:(id)arg1;
- (double)timeToPlace;

@end
