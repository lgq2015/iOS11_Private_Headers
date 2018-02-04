/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapDotsRenderer : NSObject <PXPlacesMapOverlayRenderer> {
    <PXPlacesGeotaggedItemDataSource> * _dataSource;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property <PXPlacesGeotaggedItemDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumEdgeInsets;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)annotationType;
- (id)dataSource;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumEdgeInsets;
- (id)overlayForLayoutItem:(id)arg1;
- (id)pipelineComponentProvider;
- (id)rendererForOverlay:(id)arg1 andMapView:(id)arg2;
- (void)reset;
- (void)setDataSource:(id)arg1;
- (void)setPipelineComponentProvider:(id)arg1;

@end
