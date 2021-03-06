/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLMetricLearning : NSObject {
    struct shared_ptr<DML> { 
        struct DML {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mMetricLearningImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addFaceToMetric:(id)arg1 andParameters:(id)arg2 error:(id*)arg3;
- (id)initWithLearnedMetric:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end
