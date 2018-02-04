/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVMultiBlendLayerParams : NSObject {
    int  _mode;
    float  _opacity;
}

@property (nonatomic, readonly) int hgBlendMode;
@property (nonatomic) int mode;
@property (nonatomic) float opacity;

- (void)_sharedInitWithOpacity:(float)arg1 mode:(int)arg2;
- (int)hgBlendMode;
- (id)init;
- (id)initWithOpacity:(float)arg1 mode:(int)arg2;
- (int)mode;
- (float)opacity;
- (void)setMode:(int)arg1;
- (void)setOpacity:(float)arg1;

@end
