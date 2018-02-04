/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {
    SEL  _action;
    unsigned long long  _autocapitalizationType;
    NSArray * _geometryModelData;
    NSString * _inputString;
    bool  _predictionEnabled;
    bool  _reanalysisMode;
    TIWordSearchCandidateResultSet * _results;
    id  _target;
    TIWordSearch * _wordSearch;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) unsigned long long autocapitalizationType;
@property (nonatomic, readonly) NSArray *geometryModelData;
@property (nonatomic, readonly) NSString *inputString;
@property (nonatomic, readonly) bool predictionEnabled;
@property (nonatomic, readonly) bool reanalysisMode;
@property (nonatomic, retain) TIWordSearchCandidateResultSet *results;
@property (nonatomic, readonly) id target;
@property (retain) TIWordSearch *wordSearch;

- (SEL)action;
- (unsigned long long)autocapitalizationType;
- (void)checkForCachedResults;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;
- (void)dealloc;
- (id)geometryModelData;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(bool)arg3 reanalysisMode:(bool)arg4 autocapitalizationType:(unsigned long long)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8;
- (id)inputString;
- (void)perform;
- (bool)predictionEnabled;
- (bool)reanalysisMode;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setWordSearch:(id)arg1;
- (id)target;
- (id)wordSearch;

@end
