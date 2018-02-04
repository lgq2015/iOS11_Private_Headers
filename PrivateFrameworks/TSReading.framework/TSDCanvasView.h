/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCanvasView : UIView {
    TSDInteractiveCanvasController * mController;
    <TSDCanvasLayerHosting> * mLayerHost;
}

@property (nonatomic, readonly) TSDCanvasLayer *canvasLayer;
@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (readonly) TSKScrollView *enclosingScrollView;
@property (nonatomic) <TSDCanvasLayerHosting> *layerHost;
@property (nonatomic, readonly) TSDCanvasView *rootCanvasView;

+ (Class)layerClass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)canvasLayer;
- (id)controller;
- (id)enclosingScrollView;
- (id)layerHost;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rootCanvasView;
- (void)setController:(id)arg1;
- (void)setLayerHost:(id)arg1;
- (void)teardown;

@end
