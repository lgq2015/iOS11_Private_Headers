/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering> {
    <CNUIPRLikenessResolver> * _likenessResolver;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (struct CGImage { }*)cgImageForLikenessProvider:(id)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4;
+ (id)descriptorForRequiredKeys;
+ (id)renderedLikenessesForProviders:(id)arg1 scope:(id)arg2;

- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;
- (id)likenessProvidersForContacts:(id)arg1;
- (id)likenessResolver;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)preRenderedLoadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessesForLikenessProviders:(id)arg1 scope:(id)arg2;
- (id)renderedLoadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)schedulerProvider;

@end
