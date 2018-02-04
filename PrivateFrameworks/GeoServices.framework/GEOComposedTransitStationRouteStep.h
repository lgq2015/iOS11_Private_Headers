/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {
    GEOPBTransitAccessPoint * _accessPoint;
    GEOTransitEnterExitInfo * _enterExitInfo;
    unsigned int  _expectedTime;
    bool  _isArrivalUncertain;
    GEOTransitTransferInfo * _transitTransfer;
}

@property (nonatomic, readonly) GEOPBTransitAccessPoint *accessPoint;
@property (nonatomic, readonly) bool displayStop;
@property (nonatomic, readonly) NSString *exitSign;
@property (nonatomic, readonly) unsigned int expectedTime;
@property (nonatomic, readonly) bool hasDisplayStop;
@property (nonatomic, readonly) bool isArrivalUncertain;
@property (nonatomic, readonly) GEOTransitTransferInfo *transitTransfer;

- (void).cxx_destruct;
- (id)accessPoint;
- (bool)displayStop;
- (struct { double x1; double x2; })endGeoCoordinate;
- (id)exitSign;
- (unsigned int)expectedTime;
- (bool)hasDisplayStop;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (bool)isArrivalUncertain;
- (struct { double x1; double x2; })startGeoCoordinate;
- (id)transitTransfer;

@end
