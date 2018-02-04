/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation {
    NSArray * _identifiersToIndex;
}

@property (nonatomic, copy) NSArray *identifiersToIndex;

- (void).cxx_destruct;
- (id)identifiersToIndex;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 identifiersToIndex:(id)arg3;
- (id)objectIDsToIndexFromDataSource:(id)arg1;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (void)setIdentifiersToIndex:(id)arg1;

@end
