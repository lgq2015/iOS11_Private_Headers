/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface _MCDBrowsableContentTableViewPreloader : NSObject {
    bool  _cancelled;
    id /* block */  _cancelledBlock;
    MCDPCContainer * _container;
    long long  _index;
    NSIndexPath * _indexPath;
    bool  _isRootTableView;
    bool  _isTabbedBrowsing;
    MCDPCItem * _item;
    MPWeakTimer * _loadingTimer;
    UIViewController * _sourceViewController;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, readonly, copy) id /* block */ cancelledBlock;
@property (nonatomic, readonly) MCDPCContainer *container;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) bool isRootTableView;
@property (nonatomic) bool isTabbedBrowsing;
@property (nonatomic, readonly) MCDPCItem *item;
@property (nonatomic, retain) MPWeakTimer *loadingTimer;
@property (nonatomic, readonly) UIViewController *sourceViewController;

- (void).cxx_destruct;
- (void)_deregister;
- (void)_displayErrorAlertController:(id)arg1;
- (void)_loadContainerAndPush:(id)arg1;
- (void)_pushToPlayback:(id)arg1;
- (id /* block */)cancelledBlock;
- (id)container;
- (void)dealloc;
- (id)description;
- (long long)index;
- (id)indexPath;
- (id)initWithContainer:(id)arg1 index:(long long)arg2 sourceViewController:(id)arg3 rootTableView:(bool)arg4 tabbedBrowsing:(bool)arg5 cancelledBlock:(id /* block */)arg6;
- (bool)isCancelled;
- (bool)isRootTableView;
- (bool)isTabbedBrowsing;
- (id)item;
- (void)loadAndPush;
- (id)loadingTimer;
- (void)setCancelled:(bool)arg1;
- (void)setIsRootTableView:(bool)arg1;
- (void)setIsTabbedBrowsing:(bool)arg1;
- (void)setLoadingTimer:(id)arg1;
- (id)sourceViewController;

@end
