/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoSharingOperation : NSOperation {
    PFAssetAdjustments * __adjustments;
    AVAudioMix * _audioMix;
    bool  _beganExport;
    NSString * _customAccessibilityLabel;
    NSString * _exportPreset;
    AVAssetExportSession * _exportSession;
    NSObject<OS_dispatch_queue> * _externalIsolation;
    NSError * _operationError;
    bool  _operationSuccess;
    NSURL * _outputDirectoryURL;
    NSString * _outputFilename;
    bool  _shouldStripLocation;
    bool  _shouldStripMetadata;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
    NSArray * _videoMetadata;
    NSURL * _videoURL;
}

@property (setter=_setAdjustments:, nonatomic, retain) PFAssetAdjustments *_adjustments;
@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, copy) NSString *exportPreset;
@property (setter=_setOperationError:, nonatomic, retain) NSError *operationError;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic, readonly) float progress;
@property (nonatomic) bool shouldStripLocation;
@property (nonatomic) bool shouldStripMetadata;
@property (setter=_setSuccess:, nonatomic) bool success;
@property (setter=_setVideoURL:, nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (id)_adjustments;
- (bool)_ensureVideoProperties;
- (bool)_runExport;
- (void)_setAdjustments:(id)arg1;
- (void)_setOperationError:(id)arg1;
- (void)_setSuccess:(bool)arg1;
- (void)_setVideoURL:(id)arg1;
- (void)_validateMetadata;
- (void)cancel;
- (id)customAccessibilityLabel;
- (id)exportPreset;
- (id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2;
- (void)main;
- (id)operationError;
- (id)outputDirectoryURL;
- (id)outputFilename;
- (float)progress;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setExportPreset:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (void)setShouldStripMetadata:(bool)arg1;
- (bool)shouldStripLocation;
- (bool)shouldStripMetadata;
- (bool)success;
- (id)videoURL;

@end
