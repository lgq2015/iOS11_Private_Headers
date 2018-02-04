/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchLayer : NSObject {
    int  _brushType;
    bool  _enabled;
    BLRetouchLayer * _layerBelow;
    BLBaseLayerStack * _layerStack;
}

@property (nonatomic) int brushType;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasLayerMask;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) BLRetouchLayer *layerBelow;
@property (nonatomic) NSData *layerData;
@property (nonatomic) BLBaseLayerStack *layerStack;

+ (id)layer;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (int)brushType;
- (bool)enabled;
- (bool)hasLayerMask;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (id)layerBelow;
- (id)layerData;
- (id)layerStack;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (struct CGImage { }*)newImageForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (void)setBrushType:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLayerBelow:(id)arg1;
- (void)setLayerData:(id)arg1;
- (void)setLayerStack:(id)arg1;

@end
