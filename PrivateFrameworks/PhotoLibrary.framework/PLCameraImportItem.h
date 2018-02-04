/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportItem : NSObject {
    NSString * _basePath;
    NSString * _eventName;
    NSString * _identifier;
    NSError * _importError;
    PLManagedAsset * _importedAsset;
    bool  _metadataRequested;
    NSString * _parentFolder;
    bool  _shouldImport;
    NSMutableArray * _sortedRepresentations;
    int  _thumbnailState;
}

@property (nonatomic, retain) NSString *basePath;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSError *importError;
@property (nonatomic, retain) PLManagedAsset *importedAsset;
@property (nonatomic, readonly, copy) NSString *parentFolder;
@property (nonatomic) bool shouldImport;
@property (nonatomic, readonly, retain) UIImage *thumbnail;
@property (nonatomic) int thumbnailState;

- (void).cxx_destruct;
- (void)_addRepresentation:(id)arg1;
- (id)_fileExtensionOfFirstRepresentationPassingTest:(id /* block */)arg1;
- (id)_firstRepresentationPassingTest:(id /* block */)arg1;
- (bool)_hasAnyRepresentationPassingTest:(id /* block */)arg1;
- (id)_masterRepresentation;
- (void)_removeRepresentation:(id)arg1;
- (void)addRepresentationForCameraFile:(id)arg1;
- (id)audioExtension;
- (id)basePath;
- (bool)canRequestMetadata;
- (bool)canRequestThumbnail;
- (void)clearMetadata;
- (void)clearThumbnail;
- (id)creationDate;
- (id)description;
- (id)eventName;
- (id)fileExtensions;
- (unsigned long long)fileSize;
- (bool)hasAllMetadata;
- (id)identifier;
- (id)imageExtension;
- (id)importError;
- (id)importedAsset;
- (id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2;
- (bool)isAudio;
- (bool)isImage;
- (bool)isInLibraryForce:(bool)arg1;
- (bool)isLocked;
- (bool)isMovie;
- (bool)isOnDisk;
- (bool)isRaw;
- (bool)isStandaloneMovie;
- (bool)isStandalonePhoto;
- (void)markAsInLibrary;
- (id)masterPath;
- (id)metadataForRepresentationWithFileExtension:(id)arg1;
- (id)movieExtension;
- (id)otherExtensions;
- (id)parentFolder;
- (id)rawExtension;
- (void)removeRepresentationForCameraFile:(id)arg1;
- (id)representationForCameraFile:(id)arg1;
- (id)representations;
- (id)representationsSortedForImport;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setBasePath:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setImportError:(id)arg1;
- (void)setImportedAsset:(id)arg1;
- (void)setShouldImport:(bool)arg1;
- (void)setThumbnailState:(int)arg1;
- (bool)shouldImport;
- (id)thumbnail;
- (int)thumbnailState;

@end
