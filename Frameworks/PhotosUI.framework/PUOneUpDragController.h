/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpDragController : NSObject <_UIDraggingItemVisualTarget, _UIDraggingSessionDelegate, _UIViewDraggingSourceDelegate> {
    UIGestureRecognizer * __currentGestureBeingProcessed;
    _UIDraggingSession * __dragSession;
    bool  __needsPlaybackReset;
    struct CGPoint { 
        double x; 
        double y; 
    }  __savedDragLocation;
    <PUOneUpDragControllerDelegate> * _delegate;
}

@property (nonatomic, retain) UIGestureRecognizer *_currentGestureBeingProcessed;
@property (nonatomic, retain) _UIDraggingSession *_dragSession;
@property (nonatomic) bool _needsPlaybackReset;
@property (setter=_setSavedDragLocation:, nonatomic) struct CGPoint { double x1; double x2; } _savedDragLocation;
@property (nonatomic, readonly) _UIDraggingSession *activeDraggingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpDragControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_confidentialityWarningRequiredForAsset:(id)arg1;
- (id)_currentGestureBeingProcessed;
- (id)_dragSession;
- (void)_draggableAsset:(out id*)arg1 indexPath:(out id*)arg2;
- (id)_draggingItemFromAsset:(id)arg1 indexPath:(id)arg2;
- (void)_handleDoubleTapToAddGestureRecognizer:(id)arg1;
- (id)_livePhotoPlayer;
- (bool)_needsPlaybackReset;
- (void)_preparePlaybackForDragIfNeeded;
- (void)_presentConfidentialityWarning;
- (void)_resetPlaybackIfNeeded;
- (struct CGPoint { double x1; double x2; })_savedDragLocation;
- (void)_setSavedDragLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetFrameOfDraggingItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)activeDraggingSession;
- (id)delegate;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidMove:(id)arg1;
- (void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)handleDraggingWithGesture:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)set_currentGestureBeingProcessed:(id)arg1;
- (void)set_dragSession:(id)arg1;
- (void)set_needsPlaybackReset:(bool)arg1;
- (void)view:(id)arg1 failedToDragSourceWithIndex:(unsigned long long)arg2;
- (id)view:(id)arg1 itemsForDragSourceWithIndex:(unsigned long long)arg2;
- (void)view:(id)arg1 willBeginDraggingSourceWithIndex:(unsigned long long)arg2 withSession:(id)arg3;

@end
