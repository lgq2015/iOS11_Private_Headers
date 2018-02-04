/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPromiseImage : BLImage {
    long long  _actualOrientation;
    BLAdjustmentModel * _adjustmentModel;
    NSDictionary * _adjustments;
    NSDictionary * _analysis;
    long long  _backOrientation;
    BLCropModel * _cropModel;
    NSLock * _drawLock;
    BLPixelImageBuffer * _flattenedImageBuffer;
    BLImagePatchList * _imagePatchList;
    long long  _initialOrientation;
    BLPhotoEffectsModel * _photoEffectsModel;
    BLImagePatchList * _repairImagePatchList;
    BLRepairModel * _repairModel;
    BLRetouchModel * _retouchModel;
    struct CGImage { } * _sourceCGImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _sourceSize;
    BLCropModel * _userCropModel;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sourceSize;

+ (void)convertXMP:(id)arg1 toAdjustments:(id)arg2 andAnalysis:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 image:(id)arg5 needsHistogram:(bool*)arg6;
+ (id)imageWithImage:(id)arg1;
+ (struct CGSize { double x1; double x2; })maximumSizeForFlattening;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (id)UIImage;
- (void)_drawImagePatchListInContext:(struct CGContext { }*)arg1 imagePatchList:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 drawScaleX:(double)arg4 drawScaleY:(double)arg5 totalPadding:(double)arg6;
- (bool)_flattenInContext:(struct CGContext { }*)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 progressBlock:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })_targetSizeForBoundingSize:(struct CGSize { double x1; double x2; })arg1 shouldScaleForScreen:(bool)arg2;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andSize:(struct CGSize { double x1; double x2; })arg3;
- (id)flattenedImageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)flattenedImageInBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)flattenedImageInBoundingSize:(struct CGSize { double x1; double x2; })arg1 shouldScaleForScreen:(bool)arg2;
- (id)flattenedImageInBoundingSize:(struct CGSize { double x1; double x2; })arg1 shouldScaleForScreen:(bool)arg2 progressBlock:(id /* block */)arg3;
- (id)flattenedPixelImageBufferInBoundingSize:(struct CGSize { double x1; double x2; })arg1 shouldScaleForScreen:(bool)arg2;
- (bool)hasColor;
- (bool)hasCrop;
- (bool)hasEdgeEffects;
- (bool)hasEdits;
- (bool)hasExposure;
- (bool)hasFastDownstreamEffects;
- (bool)hasInkEffects;
- (bool)hasPhotoEffects;
- (bool)hasRedeye;
- (bool)hasRepair;
- (bool)hasRepairOrRedeye;
- (bool)hasRetouch;
- (bool)hasRotation;
- (id)initWithCGImage:(struct CGImage { }*)arg1 backOrientation:(long long)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithCGImage:(struct CGImage { }*)arg1 flattenedImageBuffer:(id)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orImagePatchList:(id)arg2 flattenedImageBuffer:(id)arg3 backOrientation:(long long)arg4 orientation:(long long)arg5 userCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 adjustmentData:(id)arg7 andAnalysisData:(id)arg8 andOptionFlags:(int)arg9;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(long long)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(long long)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4 andOptionFlags:(int)arg5;
- (id)initWithImagePatchList:(id)arg1 backOrientation:(long long)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithPromiseImage:(id)arg1 andOptionFlags:(int)arg2;
- (id)initWithPromiseImage:(id)arg1 userCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andOptionFlags:(int)arg3;
- (struct CGSize { double x1; double x2; })maximumSize;
- (void)prepareForDrawing;
- (id)repairLayerStack;
- (id)retouchLayerStack;
- (void)setRepairLayerStack:(id)arg1;
- (void)setRetouchLayerStack:(id)arg1;
- (struct CGSize { double x1; double x2; })sourceSize;

@end
