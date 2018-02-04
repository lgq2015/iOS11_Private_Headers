/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLClassifier : MLModel <MLClassifier>

@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;

+ (id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)sortClassProbabilitiesWithArray:(id)arg1 classLabels:(id)arg2;
+ (id)sortClassProbabilitiesWithMultiArray:(id)arg1 classLabels:(id)arg2;

- (id)classLabels;
- (id)classifierResultFromOutputFeatures:(id)arg1 error:(id*)arg2;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)initWithInterface:(id)arg1 metadata:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
