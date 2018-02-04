/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTTrendingByParsecResultsOperation : FCOperation {
    <FCContentContext> * _contentContext;
    double  _maximumCachedAge;
    id /* block */  _resultsCompletionHandler;
    PARSession * _session;
    NTTrendingByParsecResults * _trendingByParsecResults;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic) double maximumCachedAge;
@property (nonatomic, copy) id /* block */ resultsCompletionHandler;
@property (nonatomic, retain) PARSession *session;
@property (nonatomic, retain) NTTrendingByParsecResults *trendingByParsecResults;

- (void).cxx_destruct;
- (id)contentContext;
- (id)init;
- (double)maximumCachedAge;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)resultsCompletionHandler;
- (id)session;
- (void)setContentContext:(id)arg1;
- (void)setMaximumCachedAge:(double)arg1;
- (void)setResultsCompletionHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (void)setTrendingByParsecResults:(id)arg1;
- (id)trendingByParsecResults;
- (bool)validateOperation;

@end
