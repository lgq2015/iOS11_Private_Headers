/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFormFeatureDetectorController : NSObject <AKFormFeatureDetectorDelegate> {
    AKController * _controller;
}

@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_convertFont:(id)arg1 toSize:(double)arg2;
- (id)controller;
- (void)createAnnotationWithFeature:(id)arg1 onPageController:(id)arg2;
- (struct CGSize { double x1; double x2; })defaultFeatureSizeForPage:(id)arg1;
- (bool)detectFormFeatureAtPoint:(struct CGPoint { double x1; double x2; })arg1 inPageController:(id)arg2;
- (bool)formFeature:(id)arg1 intersectsAnnotationsOnPage:(id)arg2;
- (id)formFeatureAtPoint:(struct CGPoint { double x1; double x2; })arg1 inPageController:(id)arg2;
- (id)initWithController:(id)arg1;
- (double)maximumFeatureWidthForPage:(id)arg1;
- (void)setController:(id)arg1;
- (bool)wantsDefaultFeatures;

@end
