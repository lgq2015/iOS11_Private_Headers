/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface LKDocumentStore : NSObject <DirectoryWatcherDelegate> {
    NSString * _dataPath;
    <LKDocumentStoreDelegate> * _delegate;
    NSArray * _documents;
    DirectoryWatcher * _documentsWatcher;
    DirectoryWatcher * _inboxWatcher;
}

@property (nonatomic, readonly) NSDictionary *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LKDocumentStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_hasWriteAccess;
+ (id)sharedDocumentStore;

- (void).cxx_destruct;
- (void)_didAddDocument:(id)arg1;
- (void)_didModifyDocument:(id)arg1;
- (void)_didRemoveDocument:(id)arg1;
- (void)_loadDocumentsFromIndex;
- (void)_loadDocumentsFromIndexFileAndNotifyChanges:(bool)arg1;
- (id)addDocumentFromInboxURL:(id)arg1;
- (id)capabilities;
- (id)capabilitiesPath;
- (void)dealloc;
- (id)delegate;
- (id)dictionaryDocuments;
- (void)directoryDidChange:(id)arg1;
- (id)documentDataFromFile:(id)arg1;
- (id)documentDataPath;
- (id)documentIndexPath;
- (id)documentWithName:(id)arg1;
- (id)documentsPath;
- (id)inboxPath;
- (id)init;
- (id)pathForDocument:(id)arg1;
- (id)pathForDocumentDirectory:(id)arg1 create:(bool)arg2;
- (void)processInbox;
- (void)setDelegate:(id)arg1;
- (void)updateDocument:(id)arg1;
- (bool)writeDocumentData:(id)arg1 toFile:(id)arg2;
- (void)writeDocumentsToIndexFile:(id)arg1;

@end
