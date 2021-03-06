/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFMirroredRelationship : NSObject

+ (id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordName:(id)arg2 andManagedObjectModel:(id)arg3;
+ (id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToObjectWithRecordName:(id)arg3 byRelationship:(id)arg4;
+ (id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3;

- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
