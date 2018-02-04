/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneClassifier : VNDetector {
    NSSet * mBlacklistedTerms;
    struct shared_ptr<vision::mod::ImageClassifierAbstract> { 
        struct ImageClassifierAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mClassifier;
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { 
        struct ImageDescriptorProcessorAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mDescriptorProcessor;
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { 
        struct ImageClassifier_HierarchicalModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mHierarchicalClassifier;
}

+ (bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 descriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; }*)arg4 debugIntermediatesDumpPath:(id)arg5 outputDebugDictionary:(id)arg6 error:(id*)arg7;
- (id)calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (id)getLabels;
- (bool)initImageDescriptorBuffer:(id)arg1 descriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; }*)arg2 error:(id*)arg3;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
