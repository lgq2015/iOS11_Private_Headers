/* made by EzioChiu.
 */

@protocol PHDeleteChangeRequest <PHChangeRequest>

@required

- (void)deleteManagedObject:(NSManagedObject *)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (bool)validateForDeleteManagedObject:(NSManagedObject *)arg1 error:(id*)arg2;

@end
