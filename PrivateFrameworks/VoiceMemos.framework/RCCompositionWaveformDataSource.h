/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {
    _RCTimeRangeFileInputWaveformDataSource * _activeFragmentDataSource;
    RCComposition * _composition;
    NSOperationQueue * _fragmentLoadingOperationQueue;
    bool  _highlightLastDecomposedFragment;
    bool  _preferLoadingFragmentWaveforms;
    float  _progressOfFinishedFragments;
    float  _progressWeightPerFragment;
    bool  _saveGeneratedWaveform;
    NSObject<OS_dispatch_queue> * _searialQueue;
}

@property (nonatomic, readonly) RCComposition *composition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSOperationQueue *fragmentLoadingOperationQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightLastDecomposedFragment;
@property (nonatomic, readonly) bool preferLoadingFragmentWaveforms;
@property (nonatomic) bool saveGeneratedWaveform;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_synchronouslyAppendSegmentsForAVContentURL:(id)arg1 isDecomposedFragment:(bool)arg2 sourceTimeRange:(struct { double x1; double x2; })arg3 destinationTime:(double)arg4;
- (id)composition;
- (double)duration;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)fragmentLoadingOperationQueue;
- (bool)highlightLastDecomposedFragment;
- (id)initWithComposition:(id)arg1;
- (float)loadingProgress;
- (bool)preferLoadingFragmentWaveforms;
- (bool)saveGeneratedWaveform;
- (id)saveableWaveform;
- (void)setFragmentLoadingOperationQueue:(id)arg1;
- (void)setHighlightLastDecomposedFragment:(bool)arg1;
- (void)setSaveGeneratedWaveform:(bool)arg1;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeToHighlight;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;

@end
