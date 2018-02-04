/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLayerPresentationManager : NSObject {
    bool  _adornmentsHidden;
    double  _alignmentGuidePositionX;
    double  _alignmentGuidePositionY;
    CAShapeLayer * _alignmentGuideXLayer;
    CAShapeLayer * _alignmentGuideYLayer;
    NSMapTable * _annotationsToAdornmentLayers;
    NSMapTable * _annotationsToAnnotationLayers;
    CALayer * _cropAdornmentLayer;
    CALayer * _cropAnnotationLayer;
    double  _currentScaleFactor;
    bool  _isObservingModel;
    AKPageController * _pageController;
    AKPageModelController * _pageModelController;
    CALayer * _rootLayer;
    bool  _shouldPixelate;
}

@property (nonatomic) bool adornmentsHidden;
@property (nonatomic) double alignmentGuidePositionX;
@property (nonatomic) double alignmentGuidePositionY;
@property (retain) CAShapeLayer *alignmentGuideXLayer;
@property (retain) CAShapeLayer *alignmentGuideYLayer;
@property (retain) NSMapTable *annotationsToAdornmentLayers;
@property (retain) NSMapTable *annotationsToAnnotationLayers;
@property (retain) CALayer *cropAdornmentLayer;
@property (retain) CALayer *cropAnnotationLayer;
@property double currentScaleFactor;
@property bool isObservingModel;
@property AKPageController *pageController;
@property (retain) AKPageModelController *pageModelController;
@property (retain) CALayer *rootLayer;
@property (nonatomic) bool shouldPixelate;

- (void).cxx_destruct;
- (void)_addAdornmentLayerForAnnotation:(id)arg1;
- (void)_addLayerForAnnotation:(id)arg1;
- (void)_applyUpdatesWithScale:(double)arg1 toLayers:(id)arg2 isLiveUpdate:(bool)arg3 forceUpdate:(bool)arg4;
- (double)_hiDPIScaleFactor;
- (void)_removeAdornmentLayerForAnnotation:(id)arg1;
- (void)_removeLayerForAnnotation:(id)arg1;
- (void)_setNeedsDisplayOnNewLayer:(id)arg1;
- (void)_startObservingModel;
- (void)_stopObservingModel;
- (void)_updateLoupeAnnotationsContributedToByAnnotation:(id)arg1;
- (void)_updateLoupeAnnotationsIntersectingRemovedAnnotation:(id)arg1;
- (bool)adornmentsHidden;
- (double)alignmentGuidePositionX;
- (double)alignmentGuidePositionY;
- (id)alignmentGuideXLayer;
- (id)alignmentGuideYLayer;
- (id)annotationsToAdornmentLayers;
- (id)annotationsToAnnotationLayers;
- (id)cropAdornmentLayer;
- (id)cropAnnotationLayer;
- (double)currentScaleFactor;
- (void)dealloc;
- (void)forceUpdateAnnotationLayer:(id)arg1;
- (id)initWithPageController:(id)arg1;
- (bool)isObservingModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageController;
- (id)pageModelController;
- (id)rootLayer;
- (void)setAdornmentsHidden:(bool)arg1;
- (void)setAlignmentGuidePositionX:(double)arg1;
- (void)setAlignmentGuidePositionY:(double)arg1;
- (void)setAlignmentGuideXLayer:(id)arg1;
- (void)setAlignmentGuideYLayer:(id)arg1;
- (void)setAnnotationsToAdornmentLayers:(id)arg1;
- (void)setAnnotationsToAnnotationLayers:(id)arg1;
- (void)setCropAdornmentLayer:(id)arg1;
- (void)setCropAnnotationLayer:(id)arg1;
- (void)setCurrentScaleFactor:(double)arg1;
- (void)setIsObservingModel:(bool)arg1;
- (void)setPageController:(id)arg1;
- (void)setPageModelController:(id)arg1;
- (void)setRootLayer:(id)arg1;
- (void)setShouldPixelate:(bool)arg1;
- (void)setup;
- (bool)shouldPixelate;
- (void)teardown;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(bool)arg2 forceUpdate:(bool)arg3;

@end
