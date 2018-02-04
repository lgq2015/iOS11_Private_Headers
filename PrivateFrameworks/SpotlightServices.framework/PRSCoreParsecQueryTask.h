/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSCoreParsecQueryTask : PRSQueryTask {
    bool  _bingEnabled;
    PARSession * _parSession;
    bool  _parsecEnabled;
    SFSearchSuggestion * _suggestion;
    PARTask * _task;
    unsigned long long  _whyQuery;
}

@property (nonatomic, retain) SFSearchSuggestion *suggestion;
@property (retain) PARTask *task;

- (void).cxx_destruct;
- (void)handleResults:(id)arg1;
- (id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 scaleFactor:(double)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (bool)needsBag;
- (void)resume;
- (void)setBingState:(bool)arg1;
- (void)setParsecState:(bool)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTask:(id)arg1;
- (id)suggestion;
- (id)task;

@end
