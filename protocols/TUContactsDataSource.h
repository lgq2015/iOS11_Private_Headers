/* made by EzioChiu.
 */

@protocol TUContactsDataSource <NSObject>

@required

- (const void*)personFromContact:(CNContact *)arg1;
- (CNContact *)unifiedContactWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;

@end
