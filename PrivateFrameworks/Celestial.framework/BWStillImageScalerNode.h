/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageScalerNode : BWNode {
    bool  _defersCropToPhotoEncoderWhenPossible;
    struct { 
        int width; 
        int height; 
    }  _nativeOutputDimensions;
    BWVideoFormat * _outputFormat;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    BWPixelBufferPool * _pool;
    int  _poolCapacity;
    struct OpaqueVTPixelTransferSession { } * _scalingSession;
}

+ (void)initialize;

- (int)_buildScalingSession;
- (void)_purgeResources;
- (int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (int)_updatePoolWithSettings:(id)arg1 normalizedInputCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scaledDenormalizedInputCropRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)dealloc;
- (bool)defersCropToPhotoEncoderWhenPossible;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithPoolCapacity:(int)arg1;
- (struct { int x1; int x2; })nativeOutputDimensions;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDefersCropToPhotoEncoderWhenPossible:(bool)arg1;
- (void)setNativeOutputDimensions:(struct { int x1; int x2; })arg1;

@end
