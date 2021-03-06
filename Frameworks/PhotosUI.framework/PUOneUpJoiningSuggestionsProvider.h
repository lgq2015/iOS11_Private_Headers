/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpJoiningSuggestionsProvider : PUOneUpSuggestionsProvider {
    NSArray * _suggestionsProviders;
}

@property (nonatomic, readonly, copy) NSArray *suggestionsProviders;

- (void).cxx_destruct;
- (bool)canProvideSuggestionForAsset:(id)arg1;
- (id)init;
- (id)initWithSuggestionsProviders:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)suggestionsProviders;

@end
