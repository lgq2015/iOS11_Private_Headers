/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate> {
    PKExtendedTraitCollection * _extendedTraitCollection;
    id  _extendedTraitObserver;
    <PXPlacesMapGeotaggableInfoDelegate> * _informationDelegate;
    unsigned long long  _popoverImageType;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain) id extendedTraitObserver;
@property (readonly) unsigned long long hash;
@property (retain) <PXPlacesMapGeotaggableInfoDelegate> *informationDelegate;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumEdgeInsets;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) unsigned long long popoverImageType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (long long)annotationType;
- (void)dealloc;
- (id)extendedTraitCollection;
- (id)extendedTraitObserver;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 networkAccessAllowed:(bool)arg3 andCompletion:(id /* block */)arg4;
- (id)informationDelegate;
- (id)initWithTraitCollection:(id)arg1 andInforamtionDelegate:(id)arg2 popoverImageType:(unsigned long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumEdgeInsets;
- (id)pipelineComponentProvider;
- (unsigned long long)popoverImageType;
- (void)reset;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setExtendedTraitObserver:(id)arg1;
- (void)setInformationDelegate:(id)arg1;
- (void)setPipelineComponentProvider:(id)arg1;
- (bool)supportsMoveAnimations;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;

@end
