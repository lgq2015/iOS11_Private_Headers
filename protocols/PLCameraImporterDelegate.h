/* made by EzioChiu.
 */

@protocol PLCameraImporterDelegate <NSObject>

@required

- (void)importer:(PLCameraImporter *)arg1 didAddImportItem:(PLCameraImportItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)importer:(PLCameraImporter *)arg1 didChangeImportItem:(PLCameraImportItem *)arg2 changeType:(int)arg3 error:(NSError *)arg4;
- (void)importer:(PLCameraImporter *)arg1 didCompleteImportForItems:(NSArray *)arg2;
- (void)importer:(PLCameraImporter *)arg1 didCompleteRemovalOfItems:(NSArray *)arg2;
- (void)importer:(PLCameraImporter *)arg1 didCopyOriginalForItem:(PLCameraImportItem *)arg2 error:(NSError *)arg3;
- (void)importer:(PLCameraImporter *)arg1 didImportItem:(PLCameraImportItem *)arg2 error:(NSError *)arg3;
- (void)importer:(PLCameraImporter *)arg1 didRemoveImportItems:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)importerDidFinishReadingImportItems:(PLCameraImporter *)arg1 error:(NSError *)arg2;

@end
