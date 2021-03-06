/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMultiSourceHeadlinesOperation : FCOperation {
    NSSet * _articleIDs;
    NSArray * _articleListIDs;
    FCCachePolicy * _cachePolicyForArticleLists;
    <FCContentContext> * _context;
    id /* block */  _headlinesCompletionHandler;
    NSArray * _networkEvents;
    NSDictionary * _resultArticleIDHeadlinesByArticleID;
    NSDictionary * _resultArticleListHeadlinesByArticleListID;
    NSDictionary * _resultArticleListsByID;
}

@property (nonatomic, copy) NSSet *articleIDs;
@property (nonatomic, copy) NSArray *articleListIDs;
@property (nonatomic, retain) FCCachePolicy *cachePolicyForArticleLists;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ headlinesCompletionHandler;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, retain) NSDictionary *resultArticleIDHeadlinesByArticleID;
@property (nonatomic, retain) NSDictionary *resultArticleListHeadlinesByArticleListID;
@property (nonatomic, retain) NSDictionary *resultArticleListsByID;

- (void).cxx_destruct;
- (id)articleIDs;
- (id)articleListIDs;
- (id)cachePolicyForArticleLists;
- (id)context;
- (id /* block */)headlinesCompletionHandler;
- (id)init;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultArticleIDHeadlinesByArticleID;
- (id)resultArticleListHeadlinesByArticleListID;
- (id)resultArticleListsByID;
- (void)setArticleIDs:(id)arg1;
- (void)setArticleListIDs:(id)arg1;
- (void)setCachePolicyForArticleLists:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setResultArticleIDHeadlinesByArticleID:(id)arg1;
- (void)setResultArticleListHeadlinesByArticleListID:(id)arg1;
- (void)setResultArticleListsByID:(id)arg1;
- (bool)validateOperation;

@end
