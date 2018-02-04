/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDraftFeedDescriptor : FCArticleIDFeedDescriptor {
    NSString * _articleListID;
    NSString * _feedName;
}

@property (nonatomic, readonly) NSString *articleListID;
@property (nonatomic, retain) NSString *feedName;

- (void).cxx_destruct;
- (id)articleListID;
- (id)feedGroupEmitters;
- (id)feedName;
- (long long)feedType;
- (void)fetchArticleIDsWithContext:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg1 articleListID:(id)arg2 name:(id)arg3;
- (id)name;
- (void)setFeedName:(id)arg1;
- (id)streamOfLatestArticleIDsWithContext:(id)arg1;

@end
