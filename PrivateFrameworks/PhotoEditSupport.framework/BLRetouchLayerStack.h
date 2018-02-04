/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchLayerStack : BLBaseLayerStack {
    struct { 
        unsigned char blue; 
        unsigned char green; 
        unsigned char red; 
        unsigned char alpha; 
    }  _edgeAwareColor;
    struct CGContext { } * _labContextRef;
}

+ (id)layerStack;

- (void)addLayer:(id)arg1;
- (void)buildEdgeDetectFromImage:(id)arg1;
- (void)dealloc;
- (int)disabledBrushTypes;
- (void)findEdgesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 result:(struct CGContext { }*)arg2;
- (bool)haveLayerMask;
- (id)init;
- (int)maxEdgeSize;
- (bool)readyToDraw;
- (void)sampleEdgeDetectColorFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStrokesDataDictionary:(id)arg1;
- (id)strokesDataDictionary;
- (double)timestamp;
- (void)updateLabColorsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
