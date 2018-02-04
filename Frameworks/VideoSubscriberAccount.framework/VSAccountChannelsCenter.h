/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountChannelsCenter : NSObject {
    VSAccountStore * _accountStore;
    NSURL * _directoryURL;
    NSString * _fileName;
    NSURL * _fileURL;
    id /* block */  _identityProviderFetchOperationBlock;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) VSAccountStore *accountStore;
@property (nonatomic, copy) NSURL *directoryURL;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, copy) id /* block */ identityProviderFetchOperationBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) NSUndoManager *undoManager;

+ (id)_accountChannelsWithProviderID:(id)arg1;
+ (id)_defaultDirectoryURL;
+ (id)_defaultFileName;
+ (void)_startOperationAndWaitForCompletion:(id)arg1;
+ (id)sharedCenter;

- (void).cxx_destruct;
- (void)_enqueueRemoveSavedAccountChannelsAndWait;
- (void)_enqueueSaveAccountChannelsAndWait:(id)arg1;
- (id)_removeSavedAccountChannels;
- (void)_removeSavedAccountChannelsWithCompletionHandler:(id /* block */)arg1;
- (id)_saveAccountChannels:(id)arg1;
- (void)_saveAccountChannels:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_savedAccountChannels;
- (id)_savedAccountChannelsForIdentityProviderID:(id)arg1 storeIdentityProvider:(id)arg2;
- (void)_snapshotPreviousChannels;
- (id)_storeIdentityProviderForAccount:(id)arg1;
- (id)accountStore;
- (id)directoryURL;
- (void)fetchAccountChannelsWithCompletionHandler:(id /* block */)arg1;
- (id)fileName;
- (id)fileURL;
- (id /* block */)identityProviderFetchOperationBlock;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (id)serialQueue;
- (void)setAccountStore:(id)arg1;
- (void)setDirectoryURL:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setIdentityProviderFetchOperationBlock:(id /* block */)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;

@end
