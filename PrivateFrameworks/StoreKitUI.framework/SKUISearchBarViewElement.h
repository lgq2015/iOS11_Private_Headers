/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchBarViewElement : SKUIInputViewElement {
    NSString * _accessoryText;
    SKUIViewElementText * _defaultText;
    NSString * _placeholderString;
    NSString * _searchHintsURLString;
    NSString * _trendingSearchURLString;
}

@property (nonatomic, readonly) NSString *accessoryText;
@property (nonatomic, readonly) SKUIViewElementText *defaultText;
@property (nonatomic, readonly) NSString *placeholderString;
@property (nonatomic, readonly) NSString *searchHintsURLString;
@property (nonatomic, readonly) NSString *trendingSearchURLString;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)defaultText;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;
- (id)placeholderString;
- (id)searchHintsURLString;
- (id)trendingSearchURLString;

@end
