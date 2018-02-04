/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDADeferredModifyMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {
    NSString * _folderID;
    NSString * _newDisplayName;
    NSString * _newParentFolderID;
}

- (void)applyToFolderMap:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)folderChangeResult;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end
