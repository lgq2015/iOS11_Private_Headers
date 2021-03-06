/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleDataProvider : NSObject <NUEndOfArticleDataProvider, NUViewControllerEndOfArticleProvidingDelegate> {
    FCArticle * _article;
    FCCloudContext * _cloudContext;
    NSArray * _controllers;
    <NUEndOfArticleDataProviderDelegate> * _delegate;
    <NUEmailSubscribeViewControllerFactory> * _emailSubscribeViewControllerFactory;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) FCCloudContext *cloudContext;
@property (nonatomic, retain) NSArray *controllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUEndOfArticleDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUEmailSubscribeViewControllerFactory> *emailSubscribeViewControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)article;
- (id)cloudContext;
- (id)controllers;
- (id)delegate;
- (id)emailSubscribeViewControllerFactory;
- (void)endOfArticleViewControllerProvidingNeedsContentHeightChange:(id)arg1;
- (id)initWithCloudContext:(id)arg1 article:(id)arg2 emailSubscribeViewControllerFactory:(id)arg3;
- (void)loadPublisherAndRelatedContentWithSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)loadWithArticle:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (void)loadWithSettings:(id)arg1;
- (void)setControllers:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
