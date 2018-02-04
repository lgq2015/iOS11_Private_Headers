/* made by EzioChiu.
 */

@protocol DCCachedItem

@required

- (void)clearRemoteMetadata;
- (NSData *)documentIdentifier;
- (bool)existsOnDisk;
- (bool)existsOnServer;
- (DCFullPath *)fullPath;
- (bool)hasBeenDownloaded;
- (bool)hasBeenRemoved;
- (bool)hasBeenUploaded;
- (bool)isContentsUpToDate;
- (bool)isRemoteMetadataUpToDate;
- (bool)isRoot;
- (bool)isUpToDate;
- (NSDate *)lastDownloadDate;
- (NSDate *)lastRemoteMetadataUpdate;
- (NSData *)lastRemoteMetadataVersionIdentifier;
- (NSDate *)lastUploadDate;
- (NSDictionary *)localMetadata;
- (bool)needsDownload;
- (bool)needsInitialDownload;
- (bool)needsInitialSynchronization;
- (bool)needsInitialUpload;
- (bool)needsUpload;
- (NSDictionary *)otherMetadata;
- (DCCachedDirectory *)parent;
- (NSDictionary *)parentContentsMetadata;
- (unsigned long long)relativeAge;
- (DCRelativePath *)relativePath;
- (NSDictionary *)remoteMetadata;
- (NSDictionary *)remoteMetadataFromDisk;
- (void)renameRelativePath:(DCRelativePath *)arg1;
- (void)setHasBeenRemoved:(bool)arg1;
- (void)setLastDownloadDate:(NSDate *)arg1;
- (void)setLastUploadDate:(NSDate *)arg1;
- (bool)updateDocumentIdentifier:(NSData *)arg1;
- (void)updateItemFromResponseContainer:(SDFResponseContainer *)arg1;
- (NSData *)versionIdentifier;

@end
