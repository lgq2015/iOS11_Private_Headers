/* made by EzioChiu.
 */

@protocol HDSyncStore <NSObject>

@required

- (bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (bool)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (NSArray *)orderedSyncEntities;
- (HDProfile *)profile;
- (int)protocolVersion;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (bool)shouldContinueAfterAnchorValidationError:(NSError *)arg1;
- (bool)shouldEnforceSequenceOrdering;
- (bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (NSSet *)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (NSString *)syncStoreDefaultSourceBundleIdentifier;
- (NSUUID *)syncStoreIdentifier;
- (NSString *)syncStoreTypeIdentifier;

@end
