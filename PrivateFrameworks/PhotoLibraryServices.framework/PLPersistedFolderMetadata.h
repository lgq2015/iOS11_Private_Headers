/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedFolderMetadata : NSObject {
    NSMutableOrderedSet * _childUUIDs;
    NSString * _cloudGUID;
    bool  _customSortAscending;
    int  _customSortKey;
    PLManagedFolder * _folder;
    bool  _inTrash;
    NSNumber * _kind;
    NSURL * _metadataURL;
    bool  _pinned;
    NSString * _remappedUUID;
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic, retain) NSMutableOrderedSet *childUUIDs;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic) bool customSortAscending;
@property (nonatomic) int customSortKey;
@property (nonatomic, retain) PLManagedFolder *folder;
@property (getter=isInTrash, nonatomic) bool inTrash;
@property (nonatomic, readonly) bool isRootFolder;
@property (nonatomic, retain) NSNumber *kind;
@property (nonatomic, retain) NSURL *metadataURL;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, readonly, retain) NSString *remappedUUID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uuid;

+ (bool)isValidPath:(id)arg1;
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildUUIDs:(id)arg2 sourceDescription:(id)arg3 includePendingChanges:(bool)arg4;

- (void).cxx_destruct;
- (bool)_readMetadata;
- (void)_saveMetadata;
- (id)childUUIDs;
- (id)cloudGUID;
- (bool)customSortAscending;
- (int)customSortKey;
- (id)description;
- (id)folder;
- (id)init;
- (id)initWithPLManagedFolder:(id)arg1;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 childUUIDs:(id)arg5;
- (id)insertFolderFromDataInManagedObjectContext:(id)arg1;
- (bool)isInTrash;
- (bool)isPinned;
- (bool)isRootFolder;
- (id)kind;
- (id)metadataURL;
- (id)remappedUUID;
- (void)removePersistedData;
- (void)setChildUUIDs:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setCustomSortAscending:(bool)arg1;
- (void)setCustomSortKey:(int)arg1;
- (void)setFolder:(id)arg1;
- (void)setInTrash:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setMetadataURL:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (void)updateChildrenOrderingInFolder:(id)arg1 includePendingChanges:(bool)arg2;
- (id)uuid;
- (void)writePersistedData;

@end
