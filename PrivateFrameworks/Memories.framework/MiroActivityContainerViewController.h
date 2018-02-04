/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroActivityContainerViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    NSLayoutConstraint * _activityDisplayHeightConstraint;
    MiroActivityViewController * _activityViewController;
    UIButton * _button;
    UIBarButtonItem * _cancel;
    UIBarButtonItem * _cancelBarButtonItem;
    <MiroActivityContainerViewControllerProtocol> * _delegate;
    bool  _isVertical;
    MiroActivityItemProvider * _itemProvider;
    MiroActivityViewController * _landscapePopoverView;
    NSArray * _lastViewConstraints;
    UIView * _lineView;
    UIBarButtonItem * _next;
    UIBarButtonItem * _nextBarButtonItem;
    bool  _playAltClips;
    MiroShareOrientationSelectionView * _shareOrientationView;
}

@property (nonatomic, retain) NSLayoutConstraint *activityDisplayHeightConstraint;
@property (nonatomic, retain) MiroActivityViewController *activityViewController;
@property (nonatomic) UIButton *button;
@property (nonatomic) UIBarButtonItem *cancel;
@property (nonatomic, retain) UIBarButtonItem *cancelBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroActivityContainerViewControllerProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isVertical;
@property (nonatomic) MiroActivityItemProvider *itemProvider;
@property (nonatomic, retain) MiroActivityViewController *landscapePopoverView;
@property (nonatomic, retain) NSArray *lastViewConstraints;
@property (nonatomic, retain) UIView *lineView;
@property (nonatomic) UIBarButtonItem *next;
@property (nonatomic, retain) UIBarButtonItem *nextBarButtonItem;
@property (nonatomic) bool playAltClips;
@property (nonatomic, retain) MiroShareOrientationSelectionView *shareOrientationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityDisplayHeightConstraint;
- (id)activityViewController;
- (void)adaptViewToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)button;
- (void)buttonAction:(id)arg1;
- (id)cancel;
- (void)cancelAction:(id)arg1;
- (id)cancelBarButtonItem;
- (id)constraintsForViews;
- (void)createShareOrientationView;
- (id)delegate;
- (bool)isVertical;
- (id)itemProvider;
- (id)landscapePopoverView;
- (id)lastViewConstraints;
- (id)lineView;
- (id)next;
- (void)nextAction:(id)arg1;
- (id)nextBarButtonItem;
- (bool)playAltClips;
- (void)prepareContentSizeForiPad;
- (void)prepareWithActivityViewController:(id)arg1 itemProvider:(id)arg2;
- (void)setActivityDisplayHeightConstraint:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setCancel:(id)arg1;
- (void)setCancelBarButtonItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsVertical:(bool)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setLandscapePopoverView:(id)arg1;
- (void)setLastViewConstraints:(id)arg1;
- (void)setLineView:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setNextBarButtonItem:(id)arg1;
- (void)setPlayAltClips:(bool)arg1;
- (void)setShareOrientationView:(id)arg1;
- (void)setupConstraints;
- (id)shareOrientationView;
- (double)theRealDisplayHeight;
- (void)updatePresenceOfCancelButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
