/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineCache : NSObject {
    long long  _accountLibraryID;
    NSMutableArray * _deferredOperations;
    bool  _isReplaying;
    unsigned int  _lastTemporaryMessageID;
    MFMailMessageLibrary * _library;
    MFOfflineCacheReplayContext * _replayContext;
}

@property (nonatomic, readonly) NSString *nextTemporaryMessageID;

- (void)_applyReplayContextTransformation:(id)arg1;
- (void)dealloc;
- (void)deferOperation:(id)arg1;
- (void)deleteOfflineCacheData;
- (void)enumerateOperationsUsingBlock:(id /* block */)arg1;
- (bool)hasDeferredOperations;
- (id)init;
- (id)initWithLibrary:(id)arg1 account:(id)arg2;
- (id)nextTemporaryMessageID;
- (void)replaceTransferFailureSnapshotTemporaryID:(id)arg1 withTemporaryID:(id)arg2;
- (bool)replayOperationsUsingBlock:(id /* block */)arg1;
- (id)selectedMailboxID;
- (void)setSelectedMailboxID:(id)arg1;
- (void)setTransferFailureSnapshot:(id)arg1 forTemporaryID:(id)arg2;
- (void)setTranslatedID:(id)arg1 forTemporaryID:(id)arg2;
- (id)transferFailureSnapshotForTemporaryID:(id)arg1;
- (id)translatedIDForTemporaryID:(id)arg1;

@end
