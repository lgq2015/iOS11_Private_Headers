/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface SlidingPaneViewState : NSObject {
    unsigned long long  _edge;
    NSLayoutConstraint * _paneHorizontalPositionConstraint;
    NSLayoutConstraint * _paneVerticalPositionConstraint;
    ISPaneFrameView * _paneView;
    UIViewController * _paneViewController;
    bool  _shouldNotifyOfPaneSizeChanges;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) unsigned long long edge;
@property (nonatomic, retain) NSLayoutConstraint *paneHorizontalPositionConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paneVerticalPositionConstraint;
@property (nonatomic, retain) ISPaneFrameView *paneView;
@property (nonatomic, retain) UIViewController *paneViewController;
@property (nonatomic) bool shouldNotifyOfPaneSizeChanges;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)edge;
- (id)initWithViewController:(id)arg1 edge:(unsigned long long)arg2;
- (id)paneHorizontalPositionConstraint;
- (id)paneVerticalPositionConstraint;
- (id)paneView;
- (id)paneViewController;
- (void)setEdge:(unsigned long long)arg1;
- (void)setPaneHorizontalPositionConstraint:(id)arg1;
- (void)setPaneVerticalPositionConstraint:(id)arg1;
- (void)setPaneView:(id)arg1;
- (void)setPaneViewController:(id)arg1;
- (void)setShouldNotifyOfPaneSizeChanges:(bool)arg1;
- (void)setVisualEffectView:(id)arg1;
- (bool)shouldNotifyOfPaneSizeChanges;
- (id)visualEffectView;

@end
