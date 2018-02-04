/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSKeychainEditingContext : NSObject {
    NSMutableSet * _items;
    VSKeychainStore * _keychainStore;
    NSUndoManager * _undoManager;
}

@property (nonatomic, readonly) NSSet *deletedItems;
@property (nonatomic, readonly) NSSet *insertedItems;
@property (nonatomic, retain) NSMutableSet *items;
@property (nonatomic, retain) VSKeychainStore *keychainStore;
@property (nonatomic, readonly) NSSet *registeredItems;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic, readonly) NSSet *updatedItems;

- (void).cxx_destruct;
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateErrors:(id)arg1 withError:(id)arg2 affectingItem:(id)arg3;
- (void)_populateQuery:(struct __CFDictionary { }*)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;
- (void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(id)arg3;
- (id)_queryForItemValues:(id)arg1 withItemKind:(id)arg2;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)deletedItems;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (void)fulfillFault:(id)arg1;
- (id)init;
- (void)insertItem:(id)arg1;
- (id)insertedItems;
- (id)items;
- (id)keychainStore;
- (id)registeredItems;
- (bool)save:(id*)arg1;
- (void)setItems:(id)arg1;
- (void)setKeychainStore:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;
- (id)updatedItems;

@end
