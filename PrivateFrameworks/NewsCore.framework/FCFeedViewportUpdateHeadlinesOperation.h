/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportUpdateHeadlinesOperation : FCOperation {
    FCFeedViewportBookmark * _adjustedFromBookmark;
    FCFeedViewportBookmark * _adjustedToBookmark;
    FCCloudContext * _context;
    FCFeedDescriptor * _feedDescriptor;
    FCFeedViewportBookmark * _fromBookmark;
    double  _maxArticleAge;
    FCFeedViewportDiff * _resultDiff;
    FCFeedViewport * _resultViewport;
    FCFeedViewportBookmark * _toBookmark;
    id /* block */  _updateHeadlinesCompletionHandler;
    FCFeedViewport * _viewport;
}

@property (nonatomic, retain) FCFeedViewportBookmark *adjustedFromBookmark;
@property (nonatomic, retain) FCFeedViewportBookmark *adjustedToBookmark;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, copy) FCFeedViewportBookmark *fromBookmark;
@property (nonatomic) double maxArticleAge;
@property (nonatomic, retain) FCFeedViewportDiff *resultDiff;
@property (nonatomic, retain) FCFeedViewport *resultViewport;
@property (nonatomic, copy) FCFeedViewportBookmark *toBookmark;
@property (nonatomic, copy) id /* block */ updateHeadlinesCompletionHandler;
@property (nonatomic, retain) FCFeedViewport *viewport;

- (void).cxx_destruct;
- (id)adjustedFromBookmark;
- (id)adjustedToBookmark;
- (id)context;
- (id)feedDescriptor;
- (id)fromBookmark;
- (double)maxArticleAge;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultDiff;
- (id)resultViewport;
- (void)setAdjustedFromBookmark:(id)arg1;
- (void)setAdjustedToBookmark:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setFromBookmark:(id)arg1;
- (void)setMaxArticleAge:(double)arg1;
- (void)setResultDiff:(id)arg1;
- (void)setResultViewport:(id)arg1;
- (void)setToBookmark:(id)arg1;
- (void)setUpdateHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setViewport:(id)arg1;
- (id)toBookmark;
- (id /* block */)updateHeadlinesCompletionHandler;
- (bool)validateOperation;
- (id)viewport;

@end
