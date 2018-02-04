/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLRankedLayoutGenerationOperation : NSOperation {
    NFLFeedSettings * _feedSettings;
    id /* block */  _rankedLayoutGenerationCompletion;
    NFLRankedLayoutRequest * _request;
}

@property (nonatomic, retain) NFLFeedSettings *feedSettings;
@property (copy) id /* block */ rankedLayoutGenerationCompletion;
@property (copy) NFLRankedLayoutRequest *request;

- (void).cxx_destruct;
- (void)cancel;
- (id)feedSettings;
- (id)init;
- (id)initWithRequest:(id)arg1 feedSettings:(id)arg2;
- (void)main;
- (id /* block */)rankedLayoutGenerationCompletion;
- (id)request;
- (void)setFeedSettings:(id)arg1;
- (void)setRankedLayoutGenerationCompletion:(id /* block */)arg1;
- (void)setRequest:(id)arg1;

@end
