/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceBBoxAligner : VNDetector {
    <VNModelFile> * mFaceBoxAlignerModelFileHandle;
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char> > { 
        struct FaceBoxPoseAligner<signed char> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mFaceBoxPoseAlignerImpl;
    bool  mModelFilesWereMemmapped;
}

+ (bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer { }*)arg2 rawBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg3 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg4 rotationAngle:(float)arg5;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id*)arg3;

@end
