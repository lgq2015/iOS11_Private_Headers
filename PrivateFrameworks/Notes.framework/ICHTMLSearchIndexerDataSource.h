/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)allIndexableObjectIDs;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (id)indexableObjectIDsMatchingPredicate:(id)arg1;
- (id)indexableObjectIDsWithIdentifiers:(id)arg1;
- (id)newManagedObjectContext;
- (id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
- (id)persistentStoreCoordinator;

@end
