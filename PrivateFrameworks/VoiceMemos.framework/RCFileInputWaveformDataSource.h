/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {
    NSURL * _AVFileURL;
    double  _cachedDuration;
    float  _loadingProgress;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly, copy) NSURL *AVFileURL;
@property (nonatomic, readonly) bool savesGeneratedWaveform;

- (void).cxx_destruct;
- (id)AVFileURL;
- (double)duration;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithAVFileURL:(id)arg1;
- (id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(bool)arg2 segmentFlushInterval:(double)arg3;
- (float)loadingProgress;
- (void)saveGeneratedWaveformIfNecessary;
- (bool)savesGeneratedWaveform;
- (void)setLoadingProgress:(float)arg1;
- (bool)setPaused:(bool)arg1;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;

@end
