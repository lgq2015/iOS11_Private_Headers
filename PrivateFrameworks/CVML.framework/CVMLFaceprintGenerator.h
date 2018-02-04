/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceprintGenerator : CVMLDetector {
    unsigned long long  _metalContextPriority;
    bool  _useLowPriorityMode;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> { 
        struct ImageDescriptorAugmenterFlip {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_DescriptorAugmenter;
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { 
        struct ImageDescriptorProcessorAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceDescriptorImpl;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  m_FaceFrontalizerImageBuffer;
    struct shared_ptr<vision::mod::FaceFrontalizer> { 
        struct FaceFrontalizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceFrontalizerImpl;
    struct shared_ptr<unsigned char> { 
        char *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceFrontalizerWorkingBuffer;
    struct _Geometry2D_size2D_ { 
        float height; 
        float width; 
    }  m_RequiredImageSize;
}

@property (nonatomic, readonly) unsigned long long length;

+ (bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeFromBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withChannels:(unsigned long long)arg2 error:(id*)arg3;
- (id)computeFromPixelBuffer:(struct __CVBuffer { }*)arg1 withChannels:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned long long)length;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
