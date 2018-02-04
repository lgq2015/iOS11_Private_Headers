/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLSupportVectorClassifier : MLClassifier {
    MLSVMEngine * _engine;
}

@property (retain) MLSVMEngine *engine;

+ (id)featureValueWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)engine;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (void)setEngine:(id)arg1;

@end
