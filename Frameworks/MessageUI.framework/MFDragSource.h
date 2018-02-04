/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFDragSource : NSObject <UIDragInteractionDelegate_Private> {
    bool  _allowsDragOverridingMasterSwitch;
    <MFDragSourceDelegate> * _delegate;
    struct { 
        bool respondsToTeamDataForItem; 
        bool respondsToTargetedPreviewForItem; 
        bool respondsToPreviewForItem; 
        bool respondsToSuggestedNameForItem; 
        bool respondsToLocalObjectForItem; 
        bool respondsToDragWillEnd; 
        bool respondsToAllowsMoveOperation; 
        bool respondsToIsRestrictedToMail; 
        bool respondsToDataOwner; 
    }  _delegateFlags;
    UIDragInteraction * _dragInteraction;
    UIView * _sourceView;
}

@property (nonatomic) bool allowsDragOverridingMasterSwitch;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFDragSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragInteraction *dragInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_api_dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)_api_dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (bool)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1;
- (bool)allowsDragOverridingMasterSwitch;
- (id)delegate;
- (id)dragInteraction;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (id)initWithView:(id)arg1 delegate:(id)arg2;
- (void)setAllowsDragOverridingMasterSwitch:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragInteraction:(id)arg1;
- (id)sourceView;

@end
