/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLSVMEngine : NSObject <MLModelSpecificationLoader> {
    NSArray * _classLabels;
    bool  _freeModelOnDealloc;
    unsigned long long  _inputSize;
    bool  _isInputSizeLowerBoundOnly;
    struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; } * _model;
}

@property (nonatomic, retain) NSArray *classLabels;
@property bool freeModelOnDealloc;
@property unsigned long long inputSize;
@property bool isInputSizeLowerBoundOnly;
@property struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*model;
@property (nonatomic, readonly) unsigned long long numberOfClasses;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (struct svm_node { int x1; double x2; }*)allocSVMNodeVector:(unsigned long long)arg1;
- (id)classLabels;
- (void)dealloc;
- (void)deallocSVMNodeVector:(struct svm_node { int x1; double x2; }*)arg1;
- (void)fillSVMNodeVector:(struct svm_node { int x1; double x2; }*)arg1 values:(double*)arg2 count:(unsigned long long)arg3;
- (bool)freeModelOnDealloc;
- (bool)hasProbabilityPredictionEnabled;
- (id)initWithLibSVMFile:(id)arg1 classLabels:(id)arg2;
- (id)initWithSVMModel:(struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*)arg1 freeOnDealloc:(bool)arg2 isInputSizeLowerBoundOnly:(bool)arg3 inputSize:(unsigned long long)arg4 classLabels:(id)arg5;
- (unsigned long long)inputSize;
- (bool)isInputSizeLowerBoundOnly;
- (struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*)model;
- (unsigned long long)numberOfClasses;
- (id)predict:(id)arg1;
- (void)predictProbabilities:(id)arg1 probabilities:(double*)arg2;
- (void)setClassLabels:(id)arg1;
- (void)setFreeModelOnDealloc:(bool)arg1;
- (void)setInputSize:(unsigned long long)arg1;
- (void)setIsInputSizeLowerBoundOnly:(bool)arg1;
- (void)setModel:(struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*)arg1;

@end
