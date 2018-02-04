/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesOperation : FCOperation {
    FCArticleList * _articleList;
    id /* block */  _catchUpCompletionHandler;
    FCCloudContext * _context;
    NSError * _error;
    NSArray * _mandatoryHeadlines;
    NSArray * _optionalHeadlines;
    <FCChannelProviding> * _topStoriesChannel;
    NSDictionary * _topStoriesMetadataByArticleID;
}

@property (retain) FCArticleList *articleList;
@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (copy) NSArray *mandatoryHeadlines;
@property (copy) NSArray *optionalHeadlines;
@property (copy) <FCChannelProviding> *topStoriesChannel;
@property (copy) NSDictionary *topStoriesMetadataByArticleID;

- (void).cxx_destruct;
- (void)_checkShouldShowTopStoriesWithCompletionHandler:(id /* block */)arg1;
- (id)articleList;
- (id /* block */)catchUpCompletionHandler;
- (id)context;
- (id)error;
- (id)mandatoryHeadlines;
- (void)operationWillFinishWithError:(id)arg1;
- (id)optionalHeadlines;
- (void)performOperation;
- (void)setArticleList:(id)arg1;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMandatoryHeadlines:(id)arg1;
- (void)setOptionalHeadlines:(id)arg1;
- (void)setTopStoriesChannel:(id)arg1;
- (void)setTopStoriesMetadataByArticleID:(id)arg1;
- (id)topStoriesChannel;
- (id)topStoriesMetadataByArticleID;
- (bool)validateOperation;

@end
