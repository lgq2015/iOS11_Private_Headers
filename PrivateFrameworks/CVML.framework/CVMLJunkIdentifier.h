/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLJunkIdentifier : CVMLDetector {
    struct shared_ptr<vision::mod::ImageClassifierAbstract> { 
        struct ImageClassifierAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mJunkClassifierImpl;
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { 
        struct ImageDescriptorProcessorAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mJunkDescriptorImpl;
}

+ (bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
