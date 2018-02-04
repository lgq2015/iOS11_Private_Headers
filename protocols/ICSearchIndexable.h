/* made by EzioChiu.
 */

@protocol ICSearchIndexable <NSObject>

@required

- (NSArray *)authorsExcludingCurrentUser;
- (NSDate *)creationDate;
- (NSString *)identifier;
- (bool)isHiddenFromSearch;
- (NSManagedObjectContext *)managedObjectContext;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (NSString *)searchDomainIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchableItemIdentifier;
- (long long)visibilityTestingType;

@optional

- (NSData *)dataForTypeIdentifier:(NSString *)arg1;
- (NSURL *)fileURLForTypeIdentifier:(NSString *)arg1;
- (bool)ignoreInSearchIndexer;

@end
