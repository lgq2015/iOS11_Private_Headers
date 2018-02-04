/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleHostViewControllerFactory : NSObject <NUArticleHostViewControllerFactory> {
    <NUArticleViewControllerFactory> * _articleViewControllerFactory;
    <NUErrorMessageFactory> * _errorMessageFactory;
    <NUSettings> * _settings;
}

@property (nonatomic, readonly) <NUArticleViewControllerFactory> *articleViewControllerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUErrorMessageFactory> *errorMessageFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <NUSettings> *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)articleViewControllerFactory;
- (id)createArticleHostViewControllerForArticle:(id)arg1;
- (id)errorMessageFactory;
- (id)initWithArticleViewControllerFactory:(id)arg1 settings:(id)arg2 errorMessageFactory:(id)arg3;
- (id)settings;

@end
