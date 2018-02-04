/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryItem : NSObject <NSCopying, NSFileProviderItem_Private, NSSecureCoding> {
    NSString * _appLibraryID;
    NSMutableDictionary * _attrs;
    NSString * _bookmarkData;
    NSNumber * _btime;
    NSNumber * _childItemCount;
    unsigned short  _diffs;
    NSNumber * _favoriteRank;
    BRFileObjectID * _fileObjectID;
    union { 
        struct { 
            unsigned int downloadStatus : 2; 
            unsigned int uploadStatus : 2; 
            unsigned int itemStatus : 2; 
            unsigned int conflicted : 1; 
            unsigned int preCrashMarker : 1; 
            unsigned int isUploadActive : 1; 
            unsigned int isDownloadActive : 1; 
            unsigned int isDownloadRequested : 1; 
            unsigned int shareOptions : 3; 
            unsigned int isHiddenExt : 1; 
            unsigned int isBRAlias : 1; 
            unsigned int isTrashed : 1; 
            unsigned int itemMode : 3; 
            unsigned char BRQueryItemKind; 
            unsigned char kind; 
        } ; 
        unsigned long long value; 
    }  _flags;
    bool  _isNetworkOffline;
    NSNumber * _lastUsedTime;
    NSURL * _localRepresentationURL;
    long long  _logicalHandle;
    NSString * _logicalName;
    NSNumber * _mtime;
    unsigned long long  _parentFileID;
    BRFileObjectID * _parentFileObjectID;
    NSString * _parentPath;
    NSNumber * _parentZoneRowID;
    long long  _physicalHandle;
    NSString * _physicalName;
    id  _replacement;
    NSNumber * _size;
    NSURL * _url;
    NSNumber * _zoneRowID;
}

@property (nonatomic, readonly) NSString *appLibraryID;
@property (nonatomic, readonly) unsigned int br_downloadStatus;
@property (nonatomic, readonly) unsigned int br_shareOptions;
@property (nonatomic, readonly) unsigned int br_uploadStatus;
@property (nonatomic, readonly) NSNumber *btime;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSNumber *childItemCount;
@property (readonly, copy) NSString *containerDisplayName;
@property (nonatomic, readonly, copy) NSDate *contentModificationDate;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short diffs;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSNumber *documentSize;
@property (getter=isDownloadRequested, readonly, copy) NSNumber *downloadRequested;
@property (getter=isDownloaded, nonatomic, readonly) bool downloaded;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (nonatomic, readonly, copy) NSError *downloadingError;
@property (nonatomic, readonly) NSNumber *favoriteRank;
@property (nonatomic, readonly) BRFileObjectID *fileObjectID;
@property (readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSString *filename;
@property (readonly, copy) NSString *fp_appContainerBundleIdentifier;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly) bool fp_isContainer;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (getter=fp_isUbiquitous, readonly) bool fp_ubiquitous;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, readonly) bool hidden;
@property (nonatomic, readonly) bool isBRAlias;
@property (nonatomic, readonly) bool isConflicted;
@property (nonatomic, readonly) bool isDead;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) bool isDocument;
@property (nonatomic, readonly) bool isDownloadActive;
@property (nonatomic, readonly) NSNumber *isDownloadRequested;
@property (nonatomic, readonly) bool isFinderBookmark;
@property (nonatomic, readonly) bool isInTransfer;
@property (nonatomic, readonly) bool isLive;
@property (nonatomic) bool isNetworkOffline;
@property (nonatomic) bool isPreCrash;
@property (nonatomic, readonly) bool isSymlink;
@property (nonatomic, readonly) bool isTrashed;
@property (nonatomic, readonly) bool isUploadActive;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, readonly, copy) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSNumber *lastUsedTime;
@property (nonatomic, readonly) NSURL *localRepresentationURL;
@property (nonatomic, readonly) NSString *logicalName;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (getter=isMostRecentVersionDownloaded, nonatomic, readonly) bool mostRecentVersionDownloaded;
@property (nonatomic, readonly) NSNumber *mtime;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (nonatomic, readonly) NSString *parentPath;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *physicalName;
@property (readonly, copy) NSString *providerIdentifier;
@property (nonatomic) id replacement;
@property (getter=isShared, nonatomic, readonly) bool shared;
@property (getter=isSharedByCurrentUser, nonatomic, readonly) bool sharedByCurrentUser;
@property (readonly, copy) NSString *sharingPermissions;
@property (nonatomic, readonly) NSNumber *size;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *tagData;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (getter=isUploaded, nonatomic, readonly) bool uploaded;
@property (getter=isUploading, nonatomic, readonly) bool uploading;
@property (nonatomic, readonly, copy) NSError *uploadingError;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSData *versionIdentifier;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)askDaemonQueryItemForURL:(id)arg1 andFakeFSEvent:(bool)arg2 error:(id*)arg3;
+ (id)askDaemonQueryItemForURL:(id)arg1 error:(id*)arg2;
+ (id)containerItemForContainer:(id)arg1 forceScan:(bool)arg2;
+ (id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2;
+ (id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2 zoneRowID:(id)arg3;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_mergeAttrs:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (id)appLibraryID;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributeNames;
- (id)attributesForNames:(id)arg1;
- (unsigned int)br_downloadStatus;
- (unsigned int)br_shareOptions;
- (unsigned int)br_uploadStatus;
- (id)btime;
- (bool)canMerge:(id)arg1;
- (unsigned long long)capabilities;
- (id)childItemCount;
- (void)clearDiffs;
- (id)containerDisplayName;
- (id)containerIDIfDesktopOrDocuments;
- (id)contentModificationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (unsigned short)diffs;
- (id)displayName;
- (id)documentSize;
- (id)downloadingError;
- (id)downloadingStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)favoriteRank;
- (id)fileObjectID;
- (id)filePath;
- (id)fileSize;
- (id)fileURL;
- (id)filename;
- (id)fp_appContainerBundleIdentifier;
- (bool)fp_isContainer;
- (id)fp_spotlightDomainIdentifier;
- (id)hasUnresolvedConflicts;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1;
- (bool)isBRAlias;
- (bool)isConflicted;
- (bool)isDead;
- (bool)isDirectory;
- (bool)isDocument;
- (bool)isDownloadActive;
- (id)isDownloadRequested;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryItem:(id)arg1;
- (bool)isFinderBookmark;
- (bool)isHidden;
- (bool)isHiddenExt;
- (bool)isInTransfer;
- (bool)isLive;
- (bool)isMostRecentVersionDownloaded;
- (bool)isNetworkOffline;
- (bool)isPreCrash;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isSymlink;
- (bool)isTrashed;
- (bool)isUploadActive;
- (bool)isUploaded;
- (bool)isUploading;
- (id)itemIdentifier;
- (id)lastUsedDate;
- (id)lastUsedTime;
- (id)localRepresentationURL;
- (id)localizedFileNameIfDesktopOrDocuments;
- (id)logicalName;
- (void)markDead;
- (void)merge:(id)arg1;
- (void)mergeProgressUpdate:(id)arg1;
- (id)mostRecentEditorNameComponents;
- (id)mtime;
- (id)owner;
- (id)ownerNameComponents;
- (id)parentFileID;
- (id)parentItemIdentifier;
- (id)parentPath;
- (id)path;
- (id)physicalName;
- (id)replacement;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setIsNetworkOffline:(bool)arg1;
- (void)setIsPreCrash:(bool)arg1;
- (void)setReplacement:(id)arg1;
- (id)sharedItemRole;
- (id)sharingPermissions;
- (id)size;
- (id)subclassDescription;
- (id)tagData;
- (id)typeIdentifier;
- (id)uploadingError;
- (id)url;
- (id)userInfo;
- (id)valueForKey:(id)arg1;
- (id)versionIdentifier;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)initWithRelPath:(id)arg1 error:(id*)arg2;

@end
