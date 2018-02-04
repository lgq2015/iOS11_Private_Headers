/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceBBoxAligner : CVMLDetector {
    struct shared_ptr<vision::mod::FaceboxAligner> { 
        struct FaceboxAligner {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mFaceBoxAlignerImpl;
    <CVMLModelFile> * mFaceBoxAlignerModelFileHandle;
}

+ (bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id*)arg3;

@end
