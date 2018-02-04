/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchRedEyeLayer : BLRetouchLayer {
    CIImage * _ciSourceImage;
    NSMutableArray * _eyePoints;
    UIImage * _repairSourceImage;
    UIImage * _repairedImage;
}

@property (nonatomic, copy) NSMutableArray *eyePoints;
@property (nonatomic, retain) UIImage *repairSourceImage;
@property (nonatomic, retain) UIImage *repairedImage;

+ (id)addAutoRedEyeCorrection:(id)arg1 toLayerData:(id)arg2 maskSize:(struct CGSize { double x1; double x2; })arg3 newTimestampIncrement:(double*)arg4;
+ (long long)indexOfPointNear:(struct CGPoint { double x1; double x2; })arg1 inEyePoints:(id)arg2 andMaskSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (float)amount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })area;
- (void)clearRedEyes;
- (void)dealloc;
- (id)eyePoints;
- (bool)hasLayerMask;
- (void)hasLayerMaskDidChange;
- (long long)indexOfPointNear:(struct CGPoint { double x1; double x2; })arg1;
- (id)layerData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskFrame;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (void)repairRedEyes;
- (id)repairSourceImage;
- (id)repairedImage;
- (void)setEyePoints:(id)arg1;
- (void)setLayerData:(id)arg1;
- (void)setRepairSourceImage:(id)arg1;
- (void)setRepairedImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tapAtPoint:(struct CGPoint { double x1; double x2; })arg1 actualLocation:(struct CGPoint { double x1; double x2; }*)arg2 foundEye:(bool*)arg3 addedEye:(bool*)arg4;

@end
