/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewElementTextLayoutCache : NSObject {
    SKUILayoutCache * _layoutCache;
    NSMutableDictionary * _layoutMapTables;
}

@property (nonatomic, readonly) SKUILayoutCache *layoutCache;

- (void).cxx_destruct;
- (void)_addRequest:(id)arg1 forViewElement:(id)arg2;
- (id)_bestGuessCache;
- (struct CGSize { double x1; double x2; })_bestGuessSizeForButton:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_bestGuessSizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_bestGuessSizeForOrdinal:(id)arg1 width:(double)arg2;
- (id)_createLayoutRequestForBadge:(id)arg1 width:(long long)arg2;
- (id)_createLayoutRequestForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_createLayoutRequestForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_createLayoutRequestForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_createLayoutRequestForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_existingLayoutForViewElement:(id)arg1 width:(long long)arg2;
- (id)_layoutIndexForViewElement:(id)arg1 width:(long long)arg2;
- (struct CGSize { double x1; double x2; })estimatedSizeForButton:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })estimatedSizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })estimatedSizeForOrdinal:(id)arg1 width:(double)arg2;
- (id)initWithLayoutCache:(id)arg1;
- (void)invalidateLayoutsForUpdatedElements;
- (id)layoutCache;
- (id)layoutForWidth:(long long)arg1 viewElement:(id)arg2;
- (void)requestLayoutForBadge:(id)arg1 width:(long long)arg2;
- (void)requestLayoutForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeForButton:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeForViewElement:(id)arg1 width:(double)arg2;

@end
