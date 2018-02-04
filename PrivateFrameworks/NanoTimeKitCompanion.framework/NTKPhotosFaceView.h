/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhotosFaceView : NTKBasePhotosFaceView <NTKPhotosReaderDelegate> {
    unsigned long long  _currentAnalysisOperationID;
    unsigned long long  _currentContent;
    id /* block */  _enqueuePreloadedPhotoCompletion;
    _NTKPhotoIndexGenerator * _generator;
    unsigned int  _inPhotoTransition;
    unsigned int  _isAnalysisOperationInProgress;
    unsigned int  _isContentLoaded;
    unsigned int  _isPreloadingNextPhotoOnSleep;
    unsigned int  _isTimetravelScrubbing;
    unsigned long long  _numberOfPhotos;
    UIView * _photoTransitionCornerView;
    UIView * _photoTransitionSnapshotView;
    unsigned long long  _preloadGeneration;
    NSMutableArray * _preloaded;
    NTKCachedPhoto * _presentedPhoto;
    unsigned long long  _queuedTransitionCount;
    NTKPhotosReader * _reader;
    UITapGestureRecognizer * _singleTapGesture;
    NSMutableArray * _toload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKCachedPhoto *presentedPhoto;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analysisCacheKeyFor:(id)arg1;
- (id)_analysisForAlignment:(unsigned long long)arg1;
- (void)_animationFinished:(bool)arg1;
- (void)_animationStart;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (id)_cachedAnalysisForKey:(id)arg1;
- (bool)_canOperationProceed:(unsigned long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_clearPreloaded;
- (void)_configureForEditMode:(long long)arg1;
- (id)_createAndCachePhotoAnalysisForKey:(id)arg1 dateAlignment:(unsigned long long)arg2 image:(id)arg3;
- (id)_dequeueToLoadIfMatchingGeneration:(unsigned long long)arg1;
- (void)_displayCachedPhoto:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_enqueuePreloadedPhoto:(id)arg1 ifMatchingGeneration:(unsigned long long)arg2;
- (void)_handleSingleTap:(id)arg1;
- (void)_loadSnapshotContentViews;
- (void)_nextPhotoAnimated:(bool)arg1 method:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_nextPhotoReadyAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_operationIsDone;
- (bool)_preloadNextPhoto;
- (bool)_shouldAnimationContinue:(bool)arg1;
- (void)_startBackgroundRefill;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateContents;
- (void)_updateDateAttributesAnimated:(bool)arg1;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (void)_updateImageToBlur;
- (void)_updateReader;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)presentedPhoto;
- (void)readerDidChange:(id)arg1;
- (void)setPresentedPhoto:(id)arg1;

@end
