/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAdornmentLayer : CALayer {
    AKAnnotation * _annotation;
    double  _currentScaleFactor;
    CALayer * _handleContainerLayer;
    bool  _isObservingAnnotation;
    bool  _isObservingEventHandling;
    AKPageController * _pageController;
}

@property (retain) AKAnnotation *annotation;
@property double currentScaleFactor;
@property (retain) CALayer *handleContainerLayer;
@property bool isObservingAnnotation;
@property bool isObservingEventHandling;
@property AKPageController *pageController;

+ (Class)_adornmentClassForAnnotation:(id)arg1;
+ (id)newAdornmentLayerForAnnotation:(id)arg1 withPageController:(id)arg2;

- (void).cxx_destruct;
- (void)_addHandleSublayerAtPoint:(struct CGPoint { double x1; double x2; })arg1 withStyle:(unsigned long long)arg2;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (void)_startObservingAnnotation;
- (void)_startObservingAnnotationEventHandlers;
- (void)_stopObservingAnnotation;
- (void)_stopObservingAnnotationEventHandlers;
- (id)actionForKey:(id)arg1;
- (id)annotation;
- (double)currentScaleFactor;
- (unsigned long long)currentlyDraggedArea;
- (void)dealloc;
- (id)handleContainerLayer;
- (bool)isObservingAnnotation;
- (bool)isObservingEventHandling;
- (bool)needsUpdateWhenDraggingStartsOrEnds;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageController;
- (void)setAnnotation:(id)arg1;
- (void)setCurrentScaleFactor:(double)arg1;
- (void)setHandleContainerLayer:(id)arg1;
- (void)setIsObservingAnnotation:(bool)arg1;
- (void)setIsObservingEventHandling:(bool)arg1;
- (void)setPageController:(id)arg1;
- (void)teardown;
- (void)updateAdornmentElements;
- (void)updatePixelAlignment;
- (void)updateSublayersWithScale:(double)arg1;

@end
