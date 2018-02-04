/* made by EzioChiu.
 */

@protocol MLModelSpecificationLoader

@required

+ (<MLModeling> *)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

@end