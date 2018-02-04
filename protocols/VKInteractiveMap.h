/* made by EzioChiu.
 */

@protocol VKInteractiveMap <NSObject>

@required

+ (bool)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(GEOResourceManifestConfiguration *)arg3;

- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)addExternalAnchor:(VKAnchorWrapper *)arg1;
- (void)addOverlay:(id <VKOverlay>)arg1;
- (void)addPersistentOverlay:(id <VKOverlay>)arg1;
- (void)addRasterOverlay:(VKRasterOverlay *)arg1;
- (id /* block */)annotationCoordinateTest:(void *)arg1; // needs 1 arg types, found 5: id /* block */, struct { double x1; double x2; }, void*, id, SEL
- (id /* block */)annotationRectTest:(void *)arg1; // needs 1 arg types, found 8: id /* block */, double, double, double, double, void*, id, SEL
- (NSArray *)attributionsForCurrentRegion;
- (void)beginStyleAnimationGroup;
- (VKObjectBoundsContext *)boundsForSelectedTransitLines;
- (NSString *)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (float)currentRoadSignOffset;
- (void)debugHighlightFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (NSString *)debugLabelString:(bool)arg1;
- (<VKInteractiveMapDelegate> *)delegate;
- (void)deselectTransitLineMarker;
- (NSString *)detailedDescription;
- (NSDictionary *)detailedDescriptionDictionaryRepresentation;
- (void)endStyleAnimationGroup;
- (VKAnchorWrapper *)externalAnchors;
- (void)finishStyleBlend;
- (void)insertRasterOverlay:(VKRasterOverlay *)arg1 aboveOverlay:(VKRasterOverlay *)arg2;
- (void)insertRasterOverlay:(VKRasterOverlay *)arg1 belowOverlay:(VKRasterOverlay *)arg2;
- (bool)isFullyDrawn;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isShowingNoDataPlaceholders;
- (struct LabelSettings { }*)labelSettings;
- (long long)mapType;
- (NSArray *)overlays;
- (NSSet *)persistentOverlays;
- (NSArray *)rasterOverlays;
- (void)removeExternalAnchor:(VKAnchorWrapper *)arg1;
- (void)removeOverlay:(id <VKOverlay>)arg1;
- (void)removePersistentOverlay:(id <VKOverlay>)arg1;
- (void)removeRasterOverlay:(VKRasterOverlay *)arg1;
- (void)requestStylesheetAnimation:(void *)arg1 targetMapDisplayStyle:(void *)arg2 setupHandler:(void *)arg3; // needs 3 arg types, found 7: VKAnimation *, struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<VKRouteMatchedAnnotationPresentation> *)routeLineSplitAnnotation;
- (void)selectTransitLineMarker:(VKTransitLineMarker *)arg1;
- (NSArray *)selectedTransitLineIDs;
- (void)setDelegate:(id <VKInteractiveMapDelegate>)arg1;
- (void)setMapType:(long long)arg1;
- (void)setMapType:(long long)arg1 animated:(bool)arg2;
- (void)setNavCameraIsDetached:(bool)arg1;
- (void)setRouteLineSplitAnnotation:(id <VKRouteMatchedAnnotationPresentation>)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setTrafficIncidentsEnabled:(bool)arg1;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (bool)showsBuildings;
- (bool)showsVenues;
- (struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })sourceMapDisplayStyle;
- (void)stylesheetAnimationDidEnd:(bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1 toStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2;
- (bool)supportsMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (bool)trafficEnabled;
- (bool)trafficIncidentsEnabled;
- (NSArray *)transitLineMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSArray *)transitLineMarkersInCurrentViewport;
- (void)transitionToTracking:(void *)arg1 mapMode:(void *)arg2 startLocation:(void *)arg3 startCourse:(void *)arg4 cameraController:(void *)arg5 pounceCompletionHandler:(void *)arg6; // needs 6 arg types, found 11: bool, long long, struct { double x1; double x2; }, double, VKCameraController<VKNavigationCameraController> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)visibleTileSets;

@end
