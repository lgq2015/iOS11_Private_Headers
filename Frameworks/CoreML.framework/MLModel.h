/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModel : NSObject <MLModeling> {
    MLModelInterface * _interface;
    MLModelMetadata * _metadata;
    MLModelDescription * _modelDescription;
}

@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, retain) MLModelDescription *modelDescription;

+ (id)batchPredict:(id)arg1 model:(id)arg2 error:(id*)arg3;
+ (id)compileModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)predictionFromFeatures:(id)arg1 model:(id)arg2 error:(id*)arg3;
+ (bool)serializeInterfaceAndMetadata:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 toArchive:(struct _MLModelOutputArchiver { struct OArchive { bool x_1_1_1; struct shared_ptr<Archiver::_OArchiveImpl> { struct _OArchiveImpl {} *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_1_1_2; struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, OArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_3_2_1; } x_1_1_3; } x1; }*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)batchPredict:(id)arg1 error:(id*)arg2;
- (id)debugQuickLookObject;
- (id)description;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)initInterfaceAndMetadataWithCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)initWithDescription:(id)arg1;
- (id)initWithInterface:(id)arg1 metadata:(id)arg2;
- (id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
- (id)interface;
- (id)metadata;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setModelDescription:(id)arg1;
- (id)vectorizeInput:(id)arg1 error:(id*)arg2;

@end
