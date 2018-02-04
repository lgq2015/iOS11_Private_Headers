/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRMLModel : NSObject {
    int  _classCount;
    const int * _codeMap;
    bool  _disableCoreML;
    NSArray * _modelShape;
    MLModel * model;
}

@property (readonly) int classCount;
@property (readonly) const int*codeMap;
@property bool disableCoreML;
@property (readonly) NSString *modelName;
@property (retain) NSArray *modelShape;

- (void).cxx_destruct;
- (struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_1_1; } x3; })activationsFromImage:(id)arg1;
- (int)classCount;
- (const int*)codeMap;
- (id)coreMLResultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(bool)arg3 tryPatternMatch:(bool)arg4;
- (id)decodeActivations:(struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_1_1; } x3; }*)arg1;
- (bool)disableCoreML;
- (id)init;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)modelName;
- (id)modelShape;
- (id)predict:(id)arg1 error:(id*)arg2;
- (id)resultsFromImage:(id)arg1;
- (id)resultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(bool)arg3 tryPatternMatch:(bool)arg4;
- (void)setDisableCoreML:(bool)arg1;
- (void)setModelShape:(id)arg1;

@end
