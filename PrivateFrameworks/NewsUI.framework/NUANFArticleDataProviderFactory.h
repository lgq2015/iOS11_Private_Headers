/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory> {
    <FCContentContext> * _contentContext;
    <NUFontRegistration> * _fontRegistration;
    SXHost * _host;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUFontRegistration> *fontRegistration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXHost *host;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentContext;
- (id)createArticleDataProviderWithArticle:(id)arg1;
- (id)fontRegistration;
- (id)host;
- (id)initWithContentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3;

@end
