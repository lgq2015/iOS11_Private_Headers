/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDFileTransferCenter : NSObject <IMFileCopierDelegate> {
    NSMutableSet * _activeTransfers;
    NSString * _contextStamp;
    NSMutableDictionary * _guidToCopierMap;
    NSMutableDictionary * _guidToSimpleCopierMap;
    NSMutableDictionary * _guidToTransferMap;
    NSTimer * _transferTimer;
    NSMutableArray * _transferringTransfers;
}

@property (nonatomic, retain) NSString *contextStamp;
@property (nonatomic, readonly) bool hasActiveFileTransfers;

+ (id)sharedInstance;

- (void)_addActiveTransfer:(id)arg1;
- (void)_addGatekeeperProperties:(id)arg1 toDirectory:(id)arg2;
- (void)_addGatekeeperProperties:(id)arg1 toFileAtPath:(id)arg2;
- (void)_addSpotlightPropertiesFromFileTransfer:(id)arg1 toDirectory:(id)arg2;
- (void)_addTransferringTransfer:(id)arg1;
- (id)_allFileTransfers;
- (void)_archiveFileTransfer:(id)arg1;
- (id)_attachmentStoreSharedInstance;
- (void)_clearProgressForTransferGUID:(id)arg1;
- (void)_completeProgressForTransferGUID:(id)arg1;
- (id)_createWrapperForTransfer:(id)arg1;
- (id)_dictionaryRepresentationsForFileTransfers:(id)arg1 toSave:(bool)arg2;
- (id)_getNewFileTransferForStoredAttachmentPayloadDataWithTransferGUID:(id)arg1 messageGUID:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 acceptedWithPath:(id)arg2 autoRename:(bool)arg3 overwrite:(bool)arg4 postNotification:(bool)arg5;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2 fromPid:(int)arg3;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransferRemoved:(id)arg1;
- (void)_handleFileTransferStopped:(id)arg1;
- (void)_handleSendFileTransfer:(id)arg1;
- (id)_messageStoreSharedInstance;
- (void)_postUpdated:(id)arg1;
- (id)_progressForTransferGUID:(id)arg1 allowCreate:(bool)arg2 path:(id)arg3;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_removeTransferringTransfer:(id)arg1;
- (id)_removeWrapperForTransfer:(id)arg1;
- (bool)_shouldDownloadAssetForTransfer:(id)arg1 forMessageItem:(id)arg2;
- (id)_temporaryPathForGUID:(id)arg1 filename:(id)arg2;
- (void)_transferTimerTick:(id)arg1;
- (void)_updateContextStamp;
- (void)acceptTransfer:(id)arg1 path:(id)arg2;
- (void)addDefaultGatekeeperPropertiesToDirectory:(id)arg1;
- (void)addTransfer:(id)arg1 forGUID:(id)arg2;
- (void)archiveFileTransfer:(id)arg1;
- (void)assignTransfer:(id)arg1 toAccount:(id)arg2 otherPerson:(id)arg3;
- (void)broadcastTransfersWithGUIDs:(id)arg1 atLocalPaths:(id)arg2;
- (id)contextStamp;
- (void)dealloc;
- (void)endTransfer:(id)arg1;
- (void)endTransfer:(id)arg1 overrideFinalFileName:(id)arg2;
- (void)failTransfer:(id)arg1 error:(id)arg2;
- (void)failTransfer:(id)arg1 reason:(long long)arg2;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (id)guidForNewIncomingTransferWithFilename:(id)arg1 isDirectory:(bool)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6;
- (id)guidForNewOutgoingTransferWithFilename:(id)arg1 isDirectory:(bool)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2;
- (bool)hasActiveFileTransfers;
- (id)init;
- (bool)initiateHighQualityDownload:(id)arg1;
- (bool)isSafeToDeleteTransferAttachmentPath:(id)arg1;
- (void)makeNewIncomingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(bool)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned int)arg5 hfsCreator:(unsigned int)arg6 hfsFlags:(unsigned short)arg7;
- (void)makeNewOutgoingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(bool)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned int)arg5 hfsCreator:(unsigned int)arg6 hfsFlags:(unsigned short)arg7;
- (bool)markAttachment:(id)arg1 sender:(id)arg2 recipients:(id)arg3 isIncoming:(bool)arg4;
- (void)markTransferAsNotSyncSuccessFullyUsingCKRecord:(id)arg1;
- (bool)populateLocalURLsForTransfer:(id)arg1 fromCKRecord:(id)arg2;
- (void)registerStandaloneTransfer:(id)arg1;
- (void)removeTransferForGUID:(id)arg1;
- (void)removeUnassignedTransfers;
- (void)resetSyncStateForRecord:(id)arg1 toState:(long long)arg2;
- (void)resetTransfer:(id)arg1 andPostReason:(long long)arg2;
- (void)resetTransferAndPostError:(id)arg1 error:(id)arg2;
- (void)setContextStamp:(id)arg1;
- (void)startFinalizingTransfer:(id)arg1;
- (void)startTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1;
- (void)updateTransfer:(id)arg1;
- (void)updateTransfer:(id)arg1 currentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3;
- (void)updateTransferAsWaitingForAccept:(id)arg1;
- (id)updateTransfersWithCKRecord:(id)arg1 recordWasFetched:(bool)arg2 downloadAsset:(bool*)arg3;

@end
