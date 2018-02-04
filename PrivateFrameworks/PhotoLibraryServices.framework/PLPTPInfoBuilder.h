/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPInfoBuilder : NSObject {
    <PLPTPTransferableAsset> * _asset;
    <PLFileManager> * _fileManager;
    NSString * _filenameForPTP;
    NSKnownKeysDictionary * _info;
    NSMutableDictionary * _relatedFilesMetadata;
}

+ (id)_ptpCalendar;
+ (id)pictureTransferProtocolInformationForAsset:(id)arg1 asFirstAsset:(bool)arg2;

- (void).cxx_destruct;
- (bool)_buildAdjustmentRelatedFile:(id)arg1;
- (void)_buildBurst;
- (void)_buildCloudPhotosEnabledWithFirstAsset:(bool)arg1;
- (bool)_buildDiagnosticRelatedFile:(id)arg1;
- (bool)_buildDirectoryPathAndFilename;
- (void)_buildEvent;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildGPSInformation;
- (void)_buildImageDimensions;
- (void)_buildModificationAndCreationDate;
- (void)_buildOrientation;
- (void)_buildOriginatingAssetID;
- (void)_buildPhotoKey;
- (void)_buildRelatedFiles;
- (bool)_buildSidecarRelatedFiles:(id)arg1;
- (void)_buildSlowMo;
- (void)_buildThumbnailDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildTimelapse;
- (void)_durationOfTheAsset;
- (bool)_suppressPtpInfo;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 fileManager:(id)arg2;
- (id)pictureTransferProtocolInformationAsFirstAsset:(bool)arg1;

@end
