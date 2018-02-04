/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement {
    long long  _entryListElementType;
    bool  _indexBarHiddenWhenEmpty;
    long long  _minimumEntityCount;
    NSString * _targetIndexBarEntryID;
}

@property (nonatomic, readonly, copy) NSArray *childIndexBarEntryElements;
@property (nonatomic, readonly) long long entryListElementType;
@property (getter=isIndexBarHiddenWhenEmpty, nonatomic, readonly) bool indexBarHiddenWhenEmpty;
@property (nonatomic, readonly) long long minimumEntityCount;
@property (nonatomic, readonly, copy) NSString *targetIndexBarEntryID;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)childIndexBarEntryElements;
- (long long)entryListElementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isIndexBarHiddenWhenEmpty;
- (long long)minimumEntityCount;
- (id)targetIndexBarEntryID;

@end
