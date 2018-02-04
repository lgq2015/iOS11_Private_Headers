/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingPreviewController : RCPreviewController {
    RCCompositionController * _compositionController;
    bool  _postPrepareShouldPlay;
    double  _postPrepareStartTime;
    struct { 
        double beginTime; 
        double endTime; 
    }  _postPrepareTimeRange;
}

@property (nonatomic, retain) RCCompositionController *compositionController;

+ (id)sharedRecordingPreviewController;

- (void).cxx_destruct;
- (id)compositionController;
- (double)currentTime;
- (void)pause;
- (void)playWithTimeRange:(struct { double x1; double x2; })arg1 startTime:(double)arg2 playbackContextName:(id)arg3;
- (struct { double x1; double x2; })playableTimeRange;
- (void)playerCurrentRateDidChange:(id)arg1;
- (void)setCompositionController:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setPlayableTimeRange:(struct { double x1; double x2; })arg1;
- (void)stop;

@end