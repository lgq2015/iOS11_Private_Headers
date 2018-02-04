/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAllRouteETAsManager : NSObject {
    <MKAllRouteETAsManagerDelegate> * _delegate;
    _MKRouteETAFetcher * _etaFetcher;
}

@property (nonatomic, copy) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) <MKAllRouteETAsManagerDelegate> *delegate;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) MKMapItem *originMapItem;
@property (nonatomic, copy) GEOTransitOptions *transitOptions;

- (void).cxx_destruct;
- (id)automobileOptions;
- (id)delegate;
- (id)init;
- (id)mapItem;
- (id)originMapItem;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOriginMapItem:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (id)transitOptions;
- (void)updateETA;

@end
