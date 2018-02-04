/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPageControllerForTesting : AKPageController {
    AKController * _testingController;
    AKGeometryHelper * _testingGeometryHelper;
    AKLayerPresentationManager * _testingLayerPresentationManager;
    UIView * _testingOverlayView;
    unsigned long long  _testingPageIndex;
    AKPageModelController * _testingPageModelController;
}

@property (retain) AKController *testingController;
@property (retain) AKGeometryHelper *testingGeometryHelper;
@property (retain) AKLayerPresentationManager *testingLayerPresentationManager;
@property (retain) UIView *testingOverlayView;
@property unsigned long long testingPageIndex;
@property (retain) AKPageModelController *testingPageModelController;

- (void).cxx_destruct;
- (id)controller;
- (struct CGPoint { double x1; double x2; })convertPointFromModelToOverlay:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromOverlayToModel:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromModelToOverlay:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromOverlayToModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)geometryHelper;
- (id)init;
- (id)layerPresentationManager;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRect;
- (double)modelBaseScaleFactor;
- (id)overlayView;
- (unsigned long long)pageIndex;
- (id)pageModelController;
- (void)setTestingController:(id)arg1;
- (void)setTestingGeometryHelper:(id)arg1;
- (void)setTestingLayerPresentationManager:(id)arg1;
- (void)setTestingOverlayView:(id)arg1;
- (void)setTestingPageIndex:(unsigned long long)arg1;
- (void)setTestingPageModelController:(id)arg1;
- (id)testingController;
- (id)testingGeometryHelper;
- (id)testingLayerPresentationManager;
- (id)testingOverlayView;
- (unsigned long long)testingPageIndex;
- (id)testingPageModelController;

@end
