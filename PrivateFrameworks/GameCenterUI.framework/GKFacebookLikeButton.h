/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFacebookLikeButton : UIView {
    GKButton * _button;
    UIView * _containerSpacerLeft;
    UIView * _containerSpacerRight;
    UIView * _containerView;
    GKLabel * _labelView;
    UIImageView * _logoView;
    GKOpenGraphNode * _openGraphNode;
    NSArray * _replaceableConstraints;
    UIActivityIndicatorView * _spinner;
    GKStoreItemInternal * _storeItem;
}

@property (nonatomic, retain) GKButton *button;
@property (nonatomic, retain) UIView *containerSpacerLeft;
@property (nonatomic, retain) UIView *containerSpacerRight;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) GKLabel *labelView;
@property (nonatomic, retain) UIImageView *logoView;
@property (nonatomic, retain) GKOpenGraphNode *openGraphNode;
@property (nonatomic, retain) NSArray *replaceableConstraints;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic, retain) GKStoreItemInternal *storeItem;

- (void)_commonInit;
- (void)applyConstraints;
- (void)awakeFromNib;
- (id)button;
- (void)buttonPressed:(id)arg1;
- (void)configureButtonWithTitle:(id)arg1 state:(unsigned long long)arg2 imageName:(id)arg3;
- (id)containerSpacerLeft;
- (id)containerSpacerRight;
- (id)containerView;
- (void)createButton;
- (void)createLabelView;
- (void)createLogoView;
- (void)createSpinner;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (id)labelView;
- (id)logoView;
- (void)observeEnterForegroundNotification:(id)arg1;
- (id)openGraphNode;
- (id)replaceableConstraints;
- (void)setButton:(id)arg1;
- (void)setContainerSpacerLeft:(id)arg1;
- (void)setContainerSpacerRight:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setLabelView:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setOpenGraphNode:(id)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setStoreItem:(id)arg1;
- (id)spinner;
- (id)storeItem;
- (void)updateContent;
- (id)viewForBaselineLayout;

@end
