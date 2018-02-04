/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceExpressionDetector : CVMLDetector {
    struct shared_ptr<vision::mod::LandmarkAttributes> { 
        struct LandmarkAttributes {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceAttributesImpl;
    <CVMLModelFile> * m_LandmarkRefinerModelFileHandle;
}

+ (id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1;
+ (id)createExpressionDetectionDictionaryFromScores:(id)arg1;
+ (int)expressionTypeFromString:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
