/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDPersistentAttachmentController : NSObject

+ (id)sharedInstance;

- (bool)_canDeleteAttachmentPath:(id)arg1;
- (bool)_deleteAttachmentForTransfer:(id)arg1 highQuality:(bool)arg2;
- (id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:(id)arg1 destinationPath:(id)arg2 withFileManager:(id)arg3;
- (id)_persistentPathForTransfer:(id)arg1 filename:(id)arg2 highQuality:(bool)arg3;
- (void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:(id)arg1 withFileManager:(id)arg2;
- (id)_saveAttachmentForTransfer:(id)arg1 highQuality:(bool)arg2 copyWithinAttachmentStore:(bool)arg3;
- (bool)cleanseOrphanedFileTransfers;
- (bool)deleteAttachmentsForTransfer:(id)arg1;
- (bool)isSafeToDeleteAttachmentPath:(id)arg1;
- (void)moveAttachmentsForTransfer:(id)arg1 completion:(id /* block */)arg2;
- (void)saveAttachmentsForTransfer:(id)arg1 completion:(id /* block */)arg2;

@end
