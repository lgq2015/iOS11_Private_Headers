/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStorePageRequest : NSObject {
    long long  _pageStyle;
    NSDictionary * _productParameters;
    NSURL * _productURL;
}

@property (nonatomic) long long productPageStyle;
@property (nonatomic, copy) NSDictionary *productParameters;
@property (nonatomic, copy) NSURL *productURL;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)productPageStyle;
- (id)productParameters;
- (id)productURL;
- (void)setProductPageStyle:(long long)arg1;
- (void)setProductParameters:(id)arg1;
- (void)setProductURL:(id)arg1;

@end
