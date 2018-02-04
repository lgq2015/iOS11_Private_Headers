/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFile : ICCameraItem {
    void * _fileProperties;
}

@property (readonly) bool burstFavorite;
@property (readonly) bool burstPicked;
@property (readonly) NSString *burstUUID;
@property (readonly) NSString *createdFilename;
@property bool fetchingMetadata;
@property bool fetchingThumbnail;
@property long long fileSize;
@property (readonly) NSString *groupUUID;
@property (readonly) bool hasOverriddenOrientation;
@property (readonly) bool highFramerate;
@property (retain) NSMutableDictionary *metadata_hidden;
@property unsigned long long orientation;
@property (readonly) NSString *originalFilename;
@property (readonly) NSString *originatingAssetID;
@property (getter=isRaw) bool raw;
@property (readonly) NSString *relatedUUID;
@property (readonly) bool timeLapse;

- (bool)burstFavorite;
- (bool)burstPicked;
- (id)burstUUID;
- (id)createdFilename;
- (void)dealloc;
- (id)description;
- (double)duration;
- (bool)fetchingMetadata;
- (bool)fetchingThumbnail;
- (long long)fileSize;
- (void)finalize;
- (bool)firstPicked;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (id)groupUUID;
- (void)handleCommandCompletionNotification:(id)arg1;
- (bool)hasMetadata;
- (bool)hasOverriddenOrientation;
- (bool)hasThumbnail;
- (bool)highFramerate;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (bool)isRaw;
- (id)metadata;
- (id)metadata_hidden;
- (unsigned long long)orientation;
- (id)originalFilename;
- (id)originatingAssetID;
- (void)overrideOrientation:(unsigned long long)arg1;
- (id)relatedUUID;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setFetchingMetadata:(bool)arg1;
- (void)setFetchingThumbnail:(bool)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setKeywordPropertiesFromMetadata;
- (bool)setMetadata:(id)arg1;
- (void)setMetadata_hidden:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setRaw:(bool)arg1;
- (bool)setThumbnailData:(struct __CFData { }*)arg1 withOrientation:(id)arg2;
- (struct CGImage { }*)thumbnail;
- (bool)timeLapse;

@end
