/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTurnParticipantCell : GKBasePlayerCell {
    GKLabel * _bottomLabel;
    UIButton * _detailButton;
    NSLayoutConstraint * _detailButtonConstraint;
    SEL  _detailPressedAction;
    NSLayoutConstraint * _iconLeadingConstraint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    bool  _isDetail;
    GKTurnBasedMatch * _match;
    GKTurnBasedParticipant * _participant;
    NSLayoutConstraint * _statusImageTrailingConstraint;
    UIImageView * _statusImageView;
    NSLayoutConstraint * _textContainerTrailingConstraint;
    GKContiguousContainerView * _textContainerView;
    GKLabel * _topLabel;
}

@property (nonatomic, retain) GKLabel *bottomLabel;
@property (nonatomic, retain) UIButton *detailButton;
@property (nonatomic, retain) NSLayoutConstraint *detailButtonConstraint;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic, retain) NSLayoutConstraint *iconLeadingConstraint;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) bool isDetail;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic, retain) GKTurnBasedParticipant *participant;
@property (nonatomic, retain) NSLayoutConstraint *statusImageTrailingConstraint;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, retain) NSLayoutConstraint *textContainerTrailingConstraint;
@property (nonatomic, retain) GKContiguousContainerView *textContainerView;
@property (nonatomic, retain) GKLabel *topLabel;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)bottomLabel;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)dealloc;
- (id)detailButton;
- (id)detailButtonConstraint;
- (void)detailPressed:(id)arg1;
- (SEL)detailPressedAction;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)iconLeadingConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isDetail;
- (id)match;
- (bool)matchWantsLocalPlayerAttention;
- (id)participant;
- (void)setBottomLabel:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setDetailButtonConstraint:(id)arg1;
- (void)setDetailPressedAction:(SEL)arg1;
- (void)setIconLeadingConstraint:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIsDetail:(bool)arg1;
- (void)setMatch:(id)arg1;
- (void)setParticipant:(id)arg1;
- (void)setStatusImageTrailingConstraint:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerTrailingConstraint:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (id)statusImageTrailingConstraint;
- (id)statusImageView;
- (id)textContainerTrailingConstraint;
- (id)textContainerView;
- (id)topLabel;
- (void)updateMarginConstraints;
- (id)viewForPopover;

@end
