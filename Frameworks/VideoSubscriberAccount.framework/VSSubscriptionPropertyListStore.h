/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscriptionPropertyListStore : NSAtomicStore

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)load:(id*)arg1;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (id)newReferenceObjectForManagedObject:(id)arg1;
- (bool)save:(id*)arg1;
- (id)type;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;

@end
