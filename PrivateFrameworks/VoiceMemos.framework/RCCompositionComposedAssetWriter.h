/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionComposedAssetWriter : NSObject {
    bool  _canGenerateWaveform;
    bool  _canGenerateWaveformByProcessingAVURL;
    bool  _canSaveCompositionMetadata;
    RCComposition * _composition;
    AVAssetExportSession * _exportSession;
    RCWaveformDataSource * _waveformDataSource;
}

@property (nonatomic) bool canGenerateWaveform;
@property (nonatomic) bool canGenerateWaveformByProcessingAVURL;
@property (nonatomic) bool canSaveCompositionMetadata;
@property (nonatomic, readonly) RCComposition *composition;
@property (nonatomic, readonly) float progress;

- (void).cxx_destruct;
- (void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(id /* block */)arg1;
- (void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(id /* block */)arg1;
- (void)_writeCompositionWithCompletionHandler:(id /* block */)arg1;
- (bool)canGenerateWaveform;
- (bool)canGenerateWaveformByProcessingAVURL;
- (bool)canSaveCompositionMetadata;
- (void)cancel;
- (id)composition;
- (id)initWithComposition:(id)arg1;
- (float)progress;
- (void)setCanGenerateWaveform:(bool)arg1;
- (void)setCanGenerateWaveformByProcessingAVURL:(bool)arg1;
- (void)setCanSaveCompositionMetadata:(bool)arg1;
- (void)writeCompositionWithCompletionBlock:(id /* block */)arg1;

@end
