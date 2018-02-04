/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorBasePlayerViewController : UIViewController {
    NSLayoutConstraint * _playerContainerHeight;
    UIView * _playerContainerView;
    <MiroMemoryEditorPlayerViewDelegate> * _playerViewDelegate;
    UIView * _snapshotView;
    <MiroMemoryEditorToolbarOwner> * _toolbarOwner;
}

@property (nonatomic, retain) NSLayoutConstraint *playerContainerHeight;
@property (nonatomic, retain) UIView *playerContainerView;
@property (nonatomic) <MiroMemoryEditorPlayerViewDelegate> *playerViewDelegate;
@property (nonatomic, retain) UIView *snapshotView;
@property (nonatomic) <MiroMemoryEditorToolbarOwner> *toolbarOwner;

- (void).cxx_destruct;
- (id)playerContainerHeight;
- (id)playerContainerView;
- (id)playerViewDelegate;
- (void)setPlayerContainerHeight:(id)arg1;
- (void)setPlayerContainerView:(id)arg1;
- (void)setPlayerViewDelegate:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setToolbarOwner:(id)arg1;
- (id)snapshotView;
- (id)toolbarOwner;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
