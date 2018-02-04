/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotification : BRQueryItem {
    NSString * _aliasSourceAppLibraryID;
    BRCAppLibrary * _appLibrary;
    NSMutableSet * _appLibraryIDsWithReverseAliases;
    bool  _isInDataScope;
    bool  _isInDocumentScope;
    bool  _isInTrashScope;
    BRCItemGlobalID * _itemGlobalID;
    NSString * _oldAppLibraryID;
    unsigned long long  _oldParentFileID;
    BRCItemGlobalID * _parentGlobalID;
    NSSet * _parentGlobalIDs;
    NSString * _unsaltedBookmarkData;
}

@property (nonatomic, readonly) NSString *aliasSourceAppLibraryID;
@property (nonatomic, readonly) BRCAppLibrary *appLibrary;
@property (nonatomic, retain) NSMutableSet *appLibraryIDsWithReverseAliases;
@property (nonatomic, readonly) bool isDocumentsFolder;
@property (nonatomic, readonly) bool isInDataScope;
@property (nonatomic, readonly) bool isInDocumentScope;
@property (nonatomic, readonly) bool isInTrashScope;
@property (nonatomic, readonly) BRCItemGlobalID *itemGlobalID;
@property (nonatomic, readonly) NSString *oldAppLibraryID;
@property (nonatomic, readonly) unsigned long long oldParentFileID;
@property (nonatomic, readonly) BRFileObjectID *oldParentFileObjectID;
@property (nonatomic, readonly) BRFileObjectID *parentFileObjectID;
@property (nonatomic, readonly) BRCItemGlobalID *parentGlobalID;
@property (nonatomic, retain) NSSet *parentGlobalIDs;
@property (nonatomic, retain) NSString *unsaltedBookmarkData;
@property (nonatomic, readonly) NSURL *url;

+ (id)notificationFromItem:(id)arg1 relpath:(id)arg2;
+ (id)notificationGatheredFromItem:(id)arg1;
+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAliasDecoration:(id)arg1;
- (id)aliasSourceAppLibraryID;
- (id)appLibrary;
- (id)appLibraryIDsWithReverseAliases;
- (bool)canMerge:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (bool)isDocumentsFolder;
- (bool)isInDataScope;
- (bool)isInDocumentScope;
- (bool)isInTrashScope;
- (id)itemGlobalID;
- (void)merge:(id)arg1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (id)oldAppLibraryID;
- (unsigned long long)oldParentFileID;
- (id)oldParentFileObjectID;
- (id)parentFileObjectID;
- (id)parentGlobalID;
- (id)parentGlobalIDs;
- (void)setAppLibraryIDsWithReverseAliases:(id)arg1;
- (void)setNumberAttribute:(id)arg1 forKey:(id)arg2;
- (void)setParentGlobalIDs:(id)arg1;
- (void)setUnsaltedBookmarkData:(id)arg1;
- (id)subclassDescription;
- (id)unsaltedBookmarkData;

@end
