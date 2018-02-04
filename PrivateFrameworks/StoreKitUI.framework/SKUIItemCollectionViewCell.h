/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {
    bool  _layoutNeedsLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIItemCellLayout *layout;
@property (readonly) Class superclass;

- (void)applyLayoutAttributes:(id)arg1;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCellLayoutNeedsLayout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
