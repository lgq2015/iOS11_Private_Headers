/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
 */

@interface MPSConvWeights : NSObject <MPSCNNConvolutionDataSource> {
    float * _biasTerms;
    unsigned int  _dataType;
    MPSCNNConvolutionDescriptor * _descriptor;
    NSString * _label;
    void * _weights;
}

@property (nonatomic) float*biasTerms;
@property unsigned int dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPSCNNConvolutionDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic) void*weights;

- (void).cxx_destruct;
- (float*)biasTerms;
- (unsigned int)dataType;
- (id)descriptor;
- (id)label;
- (bool)load;
- (void)purge;
- (void)setBiasTerms:(float*)arg1;
- (void)setDataType:(unsigned int)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setWeights:(void*)arg1;
- (void*)weights;

@end
