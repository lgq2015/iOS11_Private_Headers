/* made by EzioChiu.
 */

@protocol PHInsertChangeRequest <PHChangeRequest>

@required

+ (bool)canGenerateUUIDWithoutEntitlements;

- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id*)arg2;
- (PHChangeRequestHelper *)helper;
- (id)initForNewObject;
- (bool)isNew;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(PLPhotoLibrary *)arg1;
- (bool)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id*)arg2;

@end
