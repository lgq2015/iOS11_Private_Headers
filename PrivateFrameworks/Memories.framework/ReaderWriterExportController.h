/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ReaderWriterExportController : ExportController {
    bool  m_cancel;
    PVVideoCompositing * m_customCompositor;
    NSError * m_error;
    bool  m_firstPassDone;
    int  m_numberOfPasses;
    float  m_progress;
    long long  m_status;
}

+ (id)stringForStatus:(long long)arg1;

- (id)_compositionForExport;
- (void)_setupMovieController;
- (id)audioCompressionSettings;
- (void)cancelExport;
- (void)continueExportAfterDelay;
- (void)continueExportForNextPreset;
- (id)fileTypeFromExtension;
- (long long)mapAssetReaderStatusToExportStatus:(long long)arg1;
- (long long)mapAssetWriterStatusToExportStatus:(long long)arg1;
- (void)noteSessionProgressed:(float)arg1;
- (float)progress;
- (void)releaseMovieController;
- (void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(id /* block */)arg8;
- (void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2;
- (void)updateThemeImages;
- (id)videoCompressionSettings;
- (id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1;

@end
