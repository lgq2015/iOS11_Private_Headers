/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKEditActionsView : UIView {
    NSArray * _actionButtons;
    GKCollectionViewCell * _cell;
    NSArray * _editActionConstraints;
    CALayer * _maskLayer;
    double  _visibleWidth;
}

@property (nonatomic, retain) NSArray *actionButtons;
@property (nonatomic) GKCollectionViewCell *cell;
@property (nonatomic, retain) NSArray *editActionConstraints;
@property (nonatomic, retain) CALayer *maskLayer;
@property (nonatomic) double visibleWidth;

- (id)actionButtons;
- (id)cell;
- (void)dealloc;
- (void)didTouchEditAction:(id)arg1;
- (void)didTouchMoreEditAction:(id)arg1;
- (id)editActionConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cell:(id)arg2;
- (id)maskLayer;
- (void)prepareActionButtons;
- (void)setActionButtons:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setEditActionConstraints:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setVisibleWidth:(double)arg1;
- (double)visibleWidth;

@end
