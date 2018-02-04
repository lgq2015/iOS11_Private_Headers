/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextFaceView : NTKDigitalFaceView <NTKUpNextCellDelegate, NTKUpNextElementActionDelegate, NTKUpNextFaceElementControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    double  _accumulatedCrownDelta;
    NTKUpNextScheduler * _applicationIdentifierUpdateScheduler;
    NSTimer * _buttonPressTimer;
    bool  _cancelInflightScroll;
    UIImage * _cellContentBackground;
    NSArray * _complicationDisplays;
    NTKUpNextCollectionView * _contentView;
    bool  _crownInverted;
    NSOrderedSet * _currentApplicationIdentifiers;
    NTKUpNextFaceElementController * _elementController;
    bool  _inBatchUpdate;
    long long  _interactiveState;
    bool  _isAnimating;
    bool  _isInflightScroll;
    bool  _isProgramaticScrollEvent;
    double  _lastCrownVelocity;
    NTKUpNextCollectionViewFlowLayout * _layout;
    id /* block */  _modeTransitionApplier;
    id /* block */  _modeTransitionCompletion;
    bool  _needsUpdatesWhileSuppressed;
    long long  _previousDataMode;
    long long  _previousViewMode;
    bool  _scrollingStoppedTransition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _secondaryOffsetForModeTransition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startOffsetForModeTransition;
    bool  _suppressCrownEvents;
    bool  _suppressUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetOffsetForModeTransition;
    NTKDigitalTimeLabel * _timeLabel;
    NTKDigitalTimeLabelStyle * _timeLabelDefaultStyle;
    UIView * _timeLabelPlatter;
    NTKDigitalTimeLabelStyle * _timeLabelSmallInUpperRightCornerStyle;
    NTKUtilityComplicationFactory * _utilityComplicationFactory;
    UITapGestureRecognizer * _viewModeTapGesture;
    NSTimer * _viewResetTimer;
    NSTimer * _wakeWheelTimer;
    NSTimer * _wheelDelayTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_allowContentViewInteractive:(bool)arg1;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (bool)_applyShouldUseCanonicalContent;
- (void)_applyShowContentForUnadornedSnapshot;
- (bool)_applyShowIdealizedContent;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_cleanupAfterSettingViewMode:(long long)arg1 scroll:(bool)arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3 needsLayout:(bool)arg4;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (struct CGPoint { double x1; double x2; })_defaultPointForDefaultMode;
- (id)_detachedComplicationDisplays;
- (void)_deviceOrientationInvertedDidChangeNotification:(id)arg1;
- (bool)_dismissPresentedViewControllerIfNecessary:(bool)arg1;
- (unsigned long long)_distanceForIndexPathFromNow:(id)arg1;
- (void)_handleOrdinaryScreenWake;
- (void)_handleViewModeTapGesture:(id)arg1;
- (void)_handleWristRaiseScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_layoutTimeLabelForViewMode:(long long)arg1;
- (void)_layoutTimeLabelPlatterViewMode:(long long)arg1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_presentTrainingSheetForElementAtIndexPath:(id)arg1;
- (void)_reloadContentIfNeeded;
- (void)_setViewMode:(long long)arg1 scroll:(bool)arg2 scrollToPoint:(struct CGPoint { double x1; double x2; })arg3 secondaryPoint:(struct CGPoint { double x1; double x2; })arg4 force:(bool)arg5 velocity:(double)arg6 animated:(bool)arg7;
- (bool)_shouldUseCanonicalContent;
- (void)_startViewResetTimer;
- (void)_stopViewResetTimer;
- (bool)_supportsTimeScrubbing;
- (void)_switchViewModeForCurrentMode:(long long)arg1 animated:(bool)arg2;
- (void)_switchViewModeToDefault;
- (id)_timeLabelStyleForViewMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateApplicationIdentifiers;
- (void)_updateCrownInvertedSetting;
- (bool)_usesCustomZoom;
- (double)_verticalPaddingForStatusBar;
- (bool)_wantsStatusBarHidden;
- (void)cellDidLongPress:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)faceElementController:(id)arg1 didInsertElement:(id)arg2 atIndexPath:(id)arg3;
- (void)faceElementController:(id)arg1 didMoveElement:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)faceElementController:(id)arg1 didReloadContent:(id)arg2 atIndexPath:(id)arg3;
- (void)faceElementController:(id)arg1 didRemoveElement:(id)arg2 atIndexPath:(id)arg3;
- (bool)faceElementController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
- (void)faceElementController:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setViewMode:(long long)arg1;
- (void)upNextElementAction:(id)arg1 didFinishTask:(bool)arg2;
- (void)upNextElementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)upNextElementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;

@end
