/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView, SKUIViewElementView, UIScrollViewAccessibilityDelegate> {
    UIButton * _actionButton;
    SKUIButtonViewElement * _actionButtonViewElement;
    SKUICellScrollView * _actionsScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    SKUICheckboxInputViewElement * _editModeCheckboxElement;
    UIImageView * _editModeControl;
    UIView * _highlightBackgroundView;
    SKUIHorizontalLockupView * _lockupView;
    UIColor * _lockupViewBackgroundColor;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isScrollingCellToHideActionButton, nonatomic, readonly) bool scrollingCellToHideActionButton;
@property (readonly) Class superclass;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_actionButtonAction:(id)arg1;
- (void)_addEditControlAnimated:(bool)arg1;
- (id)_attributedStringForActionButton:(id)arg1 context:(id)arg2;
- (id)_editControlImage;
- (id)_highlightBackgroundColor;
- (bool)_isActionsScrollViewEnabled;
- (void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2;
- (void)_reloadHighlightBackgroundView;
- (void)_reloadLockupViewBackgroundColor;
- (void)_removeEditControlAnimated:(bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (void)hideDeleteButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDeleteButtonHidden;
- (bool)isScrollingCellToHideActionButton;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
