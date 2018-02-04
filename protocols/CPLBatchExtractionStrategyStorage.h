/* made by EzioChiu.
 */

@protocol CPLBatchExtractionStrategyStorage <NSObject>

@required

- (<NSFastEnumeration> *)allChanges;
- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 changeType:(unsigned long long)arg2;
- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 relatedIdentifier:(NSString *)arg2;
- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 secondaryIdentifier:(NSString *)arg2;
- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 trashed:(bool)arg2;
- (<NSFastEnumeration> *)allNonDeletedChangesWithClass:(Class)arg1;
- (CPLRecordChange *)changeWithIdentifier:(NSString *)arg1;
- (bool)hasChanges;
- (bool)removeChange:(CPLRecordChange *)arg1 error:(id*)arg2;

@end
