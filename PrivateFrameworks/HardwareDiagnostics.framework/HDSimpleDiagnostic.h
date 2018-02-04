/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
 */

@interface HDSimpleDiagnostic : NSObject <HDDiagnostic> {
    <HDAnalysis> * _analysis;
    <HDExperiment> * _experiment;
    NSString * _summary;
}

@property (nonatomic, retain) <HDAnalysis> *analysis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HDExperiment> *experiment;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *summary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analysis;
- (id)diagnosticDescription;
- (id)experiment;
- (id)initWithExperiment:(id)arg1 analysis:(id)arg2;
- (id)runWithParameters:(id)arg1 host:(id)arg2 error:(id*)arg3;
- (void)setAnalysis:(id)arg1;
- (void)setExperiment:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
