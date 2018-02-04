/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMutablePTPAsset : PLPTPAsset

@property (nonatomic, copy) PLPTPAssetHandle *assetHandle;
@property (getter=isBurstFavorite, nonatomic) bool burstFavorite;
@property (getter=isBurstFirstPicked, nonatomic) bool burstFirstPicked;
@property (getter=isBurstPicked, nonatomic) bool burstPicked;
@property (nonatomic, copy) NSString *burstUUID;
@property (nonatomic, copy) NSString *captureDateString;
@property (nonatomic) long long conversionGroup;
@property (nonatomic, copy) NSString *createdFilename;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (nonatomic) long long desiredOrientation;
@property (nonatomic, copy) NSString *durationString;
@property (nonatomic, copy) NSData *event;
@property (getter=isExifAvailable, nonatomic) bool exifAvailable;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy) NSString *fullDirectoryPath;
@property (nonatomic, copy) NSString *groupUUID;
@property (getter=isHighFrameRateVideo, nonatomic) bool highFrameRateVideo;
@property (nonatomic) struct CGSize { double x1; double x2; } imagePixSize;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic, copy) NSString *modificationDateString;
@property (nonatomic, copy) NSNumber *objectCompressedSize;
@property (nonatomic, copy) NSString *originalFilename;
@property (nonatomic, copy) NSString *originatingAssetID;
@property (nonatomic, copy) NSString *relatedUUID;
@property (nonatomic, copy) NSNumber *thumbCompressedSize;
@property (nonatomic, copy) NSNumber *thumbOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbPixSize;
@property (getter=isTimeLapseVideo, nonatomic) bool timeLapseVideo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssetHandle:(id)arg1;
- (void)setBurstFavorite:(bool)arg1;
- (void)setBurstFirstPicked:(bool)arg1;
- (void)setBurstPicked:(bool)arg1;
- (void)setBurstUUID:(id)arg1;
- (void)setCaptureDateString:(id)arg1;
- (void)setConversionGroup:(long long)arg1;
- (void)setCreatedFilename:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setDesiredOrientation:(long long)arg1;
- (void)setDurationString:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setExifAvailable:(bool)arg1;
- (void)setFilename:(id)arg1;
- (void)setFullDirectoryPath:(id)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setHighFrameRateVideo:(bool)arg1;
- (void)setImagePixSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocationString:(id)arg1;
- (void)setModificationDateString:(id)arg1;
- (void)setObjectCompressedSize:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setOriginatingAssetID:(id)arg1;
- (void)setRelatedUUID:(id)arg1;
- (void)setThumbCompressedSize:(id)arg1;
- (void)setThumbOffset:(id)arg1;
- (void)setThumbPixSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimeLapseVideo:(bool)arg1;

@end
