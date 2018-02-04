/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFArticleFactory : NSObject <NUArticleFactory> {
    FCArticleController * _articleController;
    long long  _qualityOfService;
    long long  _relativePriority;
}

@property (nonatomic, readonly) FCArticleController *articleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long relativePriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)articleController;
- (id)createArticlesForArticleIDs:(id)arg1;
- (id)initWithArticleController:(id)arg1;
- (long long)qualityOfService;
- (long long)relativePriority;
- (void)setQualityOfService:(long long)arg1;
- (void)setRelativePriority:(long long)arg1;

@end
