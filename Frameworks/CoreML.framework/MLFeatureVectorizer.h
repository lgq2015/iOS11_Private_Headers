/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFeatureVectorizer : MLModel <MLModelSpecificationLoader> {
    NSArray * _columnNameEncoding;
    NSArray * _dimensionEncoding;
    NSArray * _output_array_shape;
    struct vector<std::__1::pair<unsigned long, unsigned long>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > > { 
        struct pair<unsigned long, unsigned long> {} *__begin_; 
        struct pair<unsigned long, unsigned long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned long, unsigned long> *, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > > { 
            struct pair<unsigned long, unsigned long> {} *__first_; 
        } __end_cap_; 
    }  index_mapping;
}

@property (nonatomic, readonly) NSArray *columnNameEncoding;
@property (nonatomic, readonly) NSArray *dimensionEncoding;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)columnNameEncoding;
- (id)dimensionEncoding;
- (id)initWith:(id)arg1 dimensionEncoding:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)vectorizeOneHotEncoderDict:(id)arg1 index:(unsigned long long)arg2 error:(id*)arg3;

@end
