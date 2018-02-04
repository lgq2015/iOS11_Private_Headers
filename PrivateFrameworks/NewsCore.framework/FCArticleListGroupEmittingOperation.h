/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation {
    NSString * _articleList;
    FCFeedGroup * _group;
    id /* block */  _headlineFilter;
}

@property (nonatomic, readonly) NSString *articleList;
@property (nonatomic, readonly) FCFeedGroup *group;
@property (nonatomic, copy) id /* block */ headlineFilter;

- (void).cxx_destruct;
- (id)articleList;
- (id)group;
- (id /* block */)headlineFilter;
- (id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3;
- (void)performOperation;
- (void)setHeadlineFilter:(id /* block */)arg1;

@end
