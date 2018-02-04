/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetDisplayDescriptorNavigationRequest : NSObject <PUBrowsingViewModelChangeObserver> {
    bool  __arrived;
    PUAssetReference * __foundTargetAssetReference;
    bool  __isPerformingChanges;
    bool  __isUpdating;
    bool  __needsUpdateArrived;
    bool  __needsUpdateDone;
    bool  __needsUpdateFoundTargetAssetReference;
    bool  __seeked;
    bool  __timedOut;
    id /* block */  _completionHandler;
    bool  _hasSeenContentChange;
    PUAssetReference * _targetAssetReference;
    NSDate * _targetModificationDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetSeekTime;
    double  _timeOut;
    NSTimer * _timeOutTimer;
    PUBrowsingViewModel * _viewModel;
}

@property (setter=_setArrived:, nonatomic) bool _arrived;
@property (setter=_setFoundTargetAssetReference:, nonatomic, retain) PUAssetReference *_foundTargetAssetReference;
@property (setter=_setPerformingChanges:, nonatomic) bool _isPerformingChanges;
@property (setter=_setUpdating:, nonatomic) bool _isUpdating;
@property (setter=_setNeedsUpdateArrived:, nonatomic) bool _needsUpdateArrived;
@property (setter=_setNeedsUpdateDone:, nonatomic) bool _needsUpdateDone;
@property (setter=_setNeedsUpdateFoundTargetAssetReference:, nonatomic) bool _needsUpdateFoundTargetAssetReference;
@property (setter=_setSeeked:, nonatomic) bool _seeked;
@property (setter=_setTimedOut:, nonatomic) bool _timedOut;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUAssetReference *targetAssetReference;
@property (nonatomic, retain) NSDate *targetModificationDate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } targetSeekTime;
@property (nonatomic) double timeOut;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (bool)_arrived;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_cleanUpWhenDone;
- (id)_errorMessage;
- (void)_finishRequest;
- (id)_foundTargetAssetReference;
- (void)_invalidateArrived;
- (void)_invalidateDone;
- (void)_invalidateFoundTargetAssetReference;
- (bool)_isPerformingChanges;
- (bool)_isUpdating;
- (id)_navigationRequestError;
- (bool)_needsUpdate;
- (bool)_needsUpdateArrived;
- (bool)_needsUpdateDone;
- (bool)_needsUpdateFoundTargetAssetReference;
- (bool)_seeked;
- (void)_setArrived:(bool)arg1;
- (void)_setFoundTargetAssetReference:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateArrived:(bool)arg1;
- (void)_setNeedsUpdateDone:(bool)arg1;
- (void)_setNeedsUpdateFoundTargetAssetReference:(bool)arg1;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_setSeeked:(bool)arg1;
- (void)_setTimedOut:(bool)arg1;
- (void)_setUpdating:(bool)arg1;
- (bool)_timedOut;
- (void)_updateArrivedIfNeeded;
- (void)_updateCurrentAssetReference;
- (void)_updateDoneIfNeeded;
- (void)_updateFoundTargetAssetReferenceIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSeeking;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)init;
- (void)performChanges:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setTargetAssetReference:(id)arg1;
- (void)setTargetModificationDate:(id)arg1;
- (void)setTargetSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimeOut:(double)arg1;
- (void)setViewModel:(id)arg1;
- (id)targetAssetReference;
- (id)targetModificationDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetSeekTime;
- (double)timeOut;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
