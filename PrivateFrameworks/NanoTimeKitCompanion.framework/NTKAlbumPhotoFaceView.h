/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlbumPhotoFaceView : NTKBasePhotoFaceView <NTKSafeLocketReaderDelegate> {
    NTKAlbumAtom * _canonicalPhotoAtom;
    NTKAlbumAtom * _currentAtom;
    NTKDelayedBlock * _delayedIrisBlock;
    unsigned int  _inPhotoTransition;
    unsigned int  _isContentLoaded;
    unsigned int  _isPreloadingNextPhotoOnSleep;
    unsigned int  _isTimetravelScrubbing;
    unsigned long long  _nextPhotoGeneration;
    unsigned long long  _numberOfPhotos;
    UIView * _photoTransitionCornerView;
    UIView * _photoTransitionSnapshotView;
    unsigned long long  _preloadGeneration;
    NSMutableArray * _preloaded;
    long long  _prevDataMode;
    unsigned long long  _queuedTransitionCount;
    NTKSafeLocketReader * _reader;
    UITapGestureRecognizer * _singleTapGesture;
    NSArray * _switcherSnapshotViews;
}

@property (nonatomic, retain) NTKAlbumAtom *currentAtom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfPhotos;
@property (nonatomic, retain) UIView *photoTransitionCornerView;
@property (nonatomic, retain) UIView *photoTransitionSnapshotView;
@property (nonatomic) unsigned long long preloadGeneration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analyzeAtom:(id)arg1;
- (void)_animationFinished:(bool)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyShowsCanonicalContent;
- (void)_cleanupAfterEditing;
- (void)_clearPreloaded;
- (void)_createSwitcherSnapshotViewsIfNeeded;
- (void)_destroySwitcherSnapshotViews;
- (void)_displayAtom:(id)arg1 animated:(bool)arg2 withAnalysis:(id)arg3 completion:(id /* block */)arg4;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_enqueueAtom:(id)arg1 ifMatchingGeneration:(unsigned long long)arg2;
- (void)_handleOrdinaryScreenWake;
- (void)_handleSingleTap:(id)arg1;
- (void)_handleWristRaiseScreenWake;
- (void)_hideEmptyAlbum;
- (void)_hideSwitcherSnapshotViews;
- (void)_layoutPosterAndSnapshotsForSwitcher:(bool)arg1;
- (id)_loadAtomAtIndex:(unsigned long long)arg1;
- (void)_loadIris;
- (void)_loadSnapshotContentViews;
- (void)_locketDidChange;
- (void)_locketDidChangeAsync:(id)arg1;
- (unsigned long long)_nextIndex:(bool)arg1;
- (void)_nextPhotoAnimated:(bool)arg1 random:(bool)arg2;
- (void)_nextPhotoAnimated:(bool)arg1 random:(bool)arg2 loadSynchronous:(bool)arg3 completion:(id /* block */)arg4;
- (bool)_preloadNextPhoto;
- (void)_prepareForEditing;
- (void)_setAtom:(id)arg1 animated:(bool)arg2;
- (bool)_shouldAnimationContinue:(bool)arg1;
- (void)_showEmptyAlbum;
- (void)_startBackgroundRefillFromIndex:(unsigned long long)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_unloadSnapshotContentViews;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (id)currentAtom;
- (void)dealloc;
- (void)firstUnlockDidOccur;
- (void)layoutSubviews;
- (unsigned long long)numberOfPhotos;
- (id)photoTransitionCornerView;
- (id)photoTransitionSnapshotView;
- (unsigned long long)preloadGeneration;
- (void)setCurrentAtom:(id)arg1;
- (void)setNumberOfPhotos:(unsigned long long)arg1;
- (void)setPhotoTransitionCornerView:(id)arg1;
- (void)setPhotoTransitionSnapshotView:(id)arg1;
- (void)setPreloadGeneration:(unsigned long long)arg1;

@end