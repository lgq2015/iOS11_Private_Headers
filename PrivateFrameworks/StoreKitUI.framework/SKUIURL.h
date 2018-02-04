/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIURL : NSObject <NSCopying> {
    NSMutableDictionary * _queryDictionary;
    NSString * _referrerApplicationName;
    NSString * _referrerURLString;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *URLBagKey;
@property (nonatomic, readonly) NSString *actionString;
@property (nonatomic, readonly, copy) NSDictionary *queryStringDictionary;
@property (nonatomic, readonly) NSString *redeemCode;
@property (nonatomic, copy) NSString *referrerApplicationName;
@property (nonatomic, copy) NSString *referrerURLString;
@property (nonatomic, readonly) NSString *searchTerm;
@property (nonatomic, readonly) NSURL *underlyingURL;

- (void).cxx_destruct;
- (id)URLBagKey;
- (id)_appStoreSearchURLBagKey;
- (id)_decodedQueryParameter:(id)arg1;
- (id)_queryDictionary;
- (id)_searchGroupForSearchKind:(id)arg1;
- (id)_searchURLBagKey;
- (id)actionString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (id)initWithURLBagKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)newURLRequest;
- (id)newURLRequestWithBaseURL:(id)arg1;
- (id)queryStringDictionary;
- (id)redeemCode;
- (id)referrerApplicationName;
- (id)referrerURLString;
- (id)searchTerm;
- (void)setReferrerApplicationName:(id)arg1;
- (void)setReferrerURLString:(id)arg1;
- (id)underlyingURL;
- (id)valueForQueryParameter:(id)arg1;

@end
