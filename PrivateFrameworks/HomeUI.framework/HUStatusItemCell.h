/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUStatusItemCell : UITableViewCell <HUCellProtocol> {
    NSLayoutConstraint * _firstBaselineToTopAnchorConstraint;
    HUGridLayoutOptions * _gridLayoutOptions;
    HFItem * _item;
    NSArray * _staticConstraints;
    UILabel * _titleLabel;
    UIView * _titleLabelSnapshot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSLayoutConstraint *firstBaselineToTopAnchorConstraint;
@property (nonatomic, retain) HUGridLayoutOptions *gridLayoutOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSArray *staticConstraints;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) UIView *titleLabelSnapshot;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (id)firstBaselineToTopAnchorConstraint;
- (id)gridLayoutOptions;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)prepareForReuse;
- (void)setGridLayoutOptions:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setItem:(id)arg1;
- (void)setStaticConstraints:(id)arg1;
- (void)setTitleLabelSnapshot:(id)arg1;
- (id)staticConstraints;
- (id)titleLabel;
- (id)titleLabelSnapshot;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
