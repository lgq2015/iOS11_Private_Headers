/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTurnGameCell : GKBaseGameCell {
    GKLabel * _activeMatchesLabel;
    NSLayoutConstraint * _iconLeadingConstraint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    GKLabel * _localPlayerTurnsLabel;
    unsigned long long  _numberOfActiveMatches;
    unsigned long long  _numberOfLocalPlayerTurns;
    NSLayoutConstraint * _statusImageTrailingConstraint;
    UIImageView * _statusImageView;
    NSLayoutConstraint * _textContainerTrailingConstraint;
    GKContiguousContainerView * _textContainerView;
}

@property (nonatomic, retain) GKLabel *activeMatchesLabel;
@property (nonatomic, retain) NSLayoutConstraint *iconLeadingConstraint;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, retain) GKLabel *localPlayerTurnsLabel;
@property (nonatomic) unsigned long long numberOfActiveMatches;
@property (nonatomic) unsigned long long numberOfLocalPlayerTurns;
@property (nonatomic, retain) NSLayoutConstraint *statusImageTrailingConstraint;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, retain) NSLayoutConstraint *textContainerTrailingConstraint;
@property (nonatomic, retain) GKContiguousContainerView *textContainerView;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)activeMatchesLabel;
- (void)dealloc;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)iconLeadingConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (id)localPlayerTurnsLabel;
- (unsigned long long)numberOfActiveMatches;
- (unsigned long long)numberOfLocalPlayerTurns;
- (void)setActiveMatchesLabel:(id)arg1;
- (void)setIconLeadingConstraint:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLocalPlayerTurnsLabel:(id)arg1;
- (void)setNumberOfActiveMatches:(unsigned long long)arg1;
- (void)setNumberOfLocalPlayerTurns:(unsigned long long)arg1;
- (void)setStatusImageTrailingConstraint:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerTrailingConstraint:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (id)statusImageTrailingConstraint;
- (id)statusImageView;
- (id)textContainerTrailingConstraint;
- (id)textContainerView;
- (void)updateMarginConstraints;

@end
