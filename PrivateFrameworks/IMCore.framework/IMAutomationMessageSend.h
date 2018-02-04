/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAutomationMessageSend : NSObject {
    NSMutableSet * _pendingSendGUIDs;
    NSMutableDictionary * _sentMessageInfo;
}

@property (nonatomic, retain) NSMutableSet *pendingSendGUIDs;
@property (nonatomic, retain) NSMutableDictionary *sentMessageInfo;

- (void).cxx_destruct;
- (id)appendFilePathsWithGUIDs:(id)arg1 withText:(id)arg2;
- (id)clearAttachmentsUploadedToCloudkit;
- (id)copyFilePathsToTmpLocation:(id)arg1;
- (id)createIMMessageToSendWithMessage:(id)arg1 filePaths:(id)arg2 bundleID:(id)arg3 attributionInfoName:(id)arg4;
- (id)deleteAttachmentWithMessageGUID:(id)arg1 andFilePathIndex:(long long)arg2;
- (void)deleteTmpFilePath:(id)arg1;
- (id)dictionaryFromGUID:(id)arg1;
- (id)fileSizeForMessageGUID:(id)arg1 withFilePathIndex:(long long)arg2;
- (id)init;
- (id)loadHighResolutionFileForMessageGUID:(id)arg1 withFilePathIndex:(long long)arg2;
- (id)pendingSendGUIDs;
- (id)sendIMMessage:(id)arg1 chat:(id)arg2 timeOut:(double)arg3 resultDict:(id)arg4 error:(id*)arg5;
- (id)sendMessage:(id)arg1 destinationID:(id)arg2 filePaths:(id)arg3 groupID:(id)arg4 bundleID:(id)arg5 attributionInfoName:(id)arg6 service:(id)arg7 timeOut:(double)arg8 error:(id*)arg9;
- (id)sendMessage:(id)arg1 destinationID:(id)arg2 filePaths:(id)arg3 groupID:(id)arg4 service:(id)arg5 timeOut:(double)arg6 error:(id*)arg7;
- (id)sentMessageInfo;
- (void)setPendingSendGUIDs:(id)arg1;
- (void)setSentMessageInfo:(id)arg1;
- (id)uploadAttachmentToCloudkitWithMessageGUID:(id)arg1 andFilePathIndex:(long long)arg2;

@end
