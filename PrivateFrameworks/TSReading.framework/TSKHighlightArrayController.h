/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol> {
    bool  _autohide;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _canvasTransform;
    NSMutableArray * _controllers;
    bool  _creatingLayers;
    <TSKHighlightArrayControllerProtocol> * _delegate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _layerTransform;
    NSMutableArray * _layers;
    bool  _pulsating;
    bool  _shouldPulsate;
    double  _viewScale;
    double  _zOrder;
}

@property (nonatomic) bool autohide;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic) bool pulsating;
@property (nonatomic) bool shouldPulsate;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) double viewScale;

- (bool)autohide;
- (id)buildHighlightsForSearchReferences:(id)arg1 contentsScaleForLayers:(double)arg2;
- (void)dealloc;
- (void)disconnect;
- (id)initWithZOrder:(double)arg1 delegate:(id)arg2;
- (id)layers;
- (bool)pulsating;
- (void)pulseAnimationDidStopForPulse:(id)arg1;
- (void)reset;
- (void)setAutohide:(bool)arg1;
- (void)setCanvasTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 layerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)setPulsating:(bool)arg1;
- (void)setShouldPulsate:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScale:(double)arg1;
- (bool)shouldPulsate;
- (void)startAnimating;
- (void)stop;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (double)viewScale;

@end
