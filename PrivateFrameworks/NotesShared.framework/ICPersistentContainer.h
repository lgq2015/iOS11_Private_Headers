/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICPersistentContainer : NSPersistentContainer {
    unsigned long long  _fakeFreeDiskSpace;
    NSMergePolicy * _mergePolicy;
    NSDictionary * _storeOptions;
    NSString * _storeType;
    NSURL * _storeURL;
}

@property (nonatomic, readonly) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic, retain) NSMergePolicy *mergePolicy;
@property (nonatomic, retain) NSDictionary *storeOptions;
@property (nonatomic, retain) NSString *storeType;
@property (nonatomic, retain) NSURL *storeURL;

+ (bool)isDataProtectionError:(id)arg1;
+ (id)newManagedObjectModel;
+ (id)standardStoreOptions;

- (void).cxx_destruct;
- (void)backupPersistentStore;
- (id)backupsDirectoryURL;
- (unsigned long long)fakeFreeDiskSpace;
- (id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4;
- (bool)isReadOnly;
- (bool)isTooLowOnDiskSpace;
- (bool)loadPersistentStore:(id*)arg1;
- (id)mergePolicy;
- (id)newBackgroundContext;
- (void)setFakeFreeDiskSpace:(unsigned long long)arg1;
- (void)setMergePolicy:(id)arg1;
- (void)setStoreOptions:(id)arg1;
- (void)setStoreType:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setupPersistentStoreDescriptions;
- (id)storeOptions;
- (id)storeType;
- (id)storeURL;
- (void)vacuumStore;

@end
