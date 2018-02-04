/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationLayer : CALayer {
    AKAnnotation * _annotation;
    CALayer * _fastPathLayer;
    bool  _isObservingAnnotation;
    bool  _lastRedrawWasForDrawingBounds;
    AKPageController * _pageController;
    bool  _wasLastDrawingClipped;
}

@property (retain) AKAnnotation *annotation;
@property (nonatomic, retain) CALayer *fastPathLayer;
@property bool isObservingAnnotation;
@property bool lastRedrawWasForDrawingBounds;
@property AKPageController *pageController;
@property bool wasLastDrawingClipped;

+ (id)newAnnotationLayerForAnnotation:(id)arg1 withPageController:(id)arg2;

- (void).cxx_destruct;
- (void)_addDebugVisuals;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (void)_removeDebugVisuals;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_updateAnnotationLayerWithLoupeFastPath:(bool)arg1;
- (id)actionForKey:(id)arg1;
- (id)annotation;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)fastPathLayer;
- (bool)isObservingAnnotation;
- (bool)lastRedrawWasForDrawingBounds;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageController;
- (void)setAnnotation:(id)arg1;
- (void)setFastPathLayer:(id)arg1;
- (void)setIsObservingAnnotation:(bool)arg1;
- (void)setLastRedrawWasForDrawingBounds:(bool)arg1;
- (void)setPageController:(id)arg1;
- (void)setWasLastDrawingClipped:(bool)arg1;
- (void)updateContents;
- (void)updatePixelAlignment;
- (bool)wasLastDrawingClipped;

@end
