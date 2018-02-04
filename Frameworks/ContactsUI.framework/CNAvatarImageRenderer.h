/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarImageRenderer : NSObject {
    <CNScheduler> * _backgroundScheduler;
    <CNUILikenessRendering> * _renderer;
    <CNUIPRLikenessResolver> * _resolver;
}

@property (nonatomic, readonly) <CNScheduler> *backgroundScheduler;
@property (nonatomic, readonly) <CNUILikenessRendering> *renderer;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *resolver;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)backgroundScheduler;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)loadingPlaceholderImageProvider;
- (id)placeholderImageProvider;
- (id)renderAvatarsForContacts:(id)arg1 handler:(id /* block */)arg2;
- (id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(id /* block */)arg3;
- (id)renderMonogramForString:(id)arg1 handler:(id /* block */)arg2;
- (id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(id /* block */)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2;
- (id)renderer;
- (id)resolver;
- (id)runScopeBasedImageObservable:(id /* block */)arg1 scope:(id)arg2 imageHandler:(id /* block */)arg3;

@end
