/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLPredictionOptions : NSObject {
    unsigned long long  _classifyTopK;
    bool  _usesCPUOnly;
}

@property unsigned long long classifyTopK;
@property bool useCPUOnly;
@property (nonatomic) bool usesCPUOnly;

+ (id)defaultOptions;

- (unsigned long long)classifyTopK;
- (id)init;
- (id)initWithUseCPUOnly:(bool)arg1;
- (id)initWithUsesCPUOnly:(bool)arg1;
- (void)setClassifyTopK:(unsigned long long)arg1;
- (void)setUseCPUOnly:(bool)arg1;
- (void)setUsesCPUOnly:(bool)arg1;
- (bool)useCPUOnly;
- (bool)usesCPUOnly;

@end
