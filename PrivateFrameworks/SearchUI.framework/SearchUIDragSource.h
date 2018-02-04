/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {
    <SearchUIDragObject> * _dragObject;
    UIView * _dragSourceView;
    SearchUIDropTarget * _dropTarget;
    UIView * _overrideDragPreviewView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) <SearchUIDragObject> *dragObject;
@property UIView *dragSourceView;
@property (retain) SearchUIDropTarget *dropTarget;
@property (readonly) unsigned long long hash;
@property (retain) UIView *overrideDragPreviewView;
@property (readonly) Class superclass;

+ (id)dragSourceForView:(id)arg1 dragObject:(id)arg2;
+ (bool)draggingSupported;

- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (bool)_shouldPerformHitTestingForDragSessionInView:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dragObject;
- (id)dragParametersForPreviewView:(id)arg1;
- (id)dragSourceView;
- (id)dropTarget;
- (id)initWithView:(id)arg1 dragObject:(id)arg2;
- (bool)isMailDrag;
- (id)overrideDragPreviewView;
- (void)setDragObject:(id)arg1;
- (void)setDragSourceView:(id)arg1;
- (void)setDropTarget:(id)arg1;
- (void)setOverrideDragPreviewView:(id)arg1;

@end
