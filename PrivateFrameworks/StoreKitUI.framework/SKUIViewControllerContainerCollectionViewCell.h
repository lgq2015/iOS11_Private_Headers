/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {
    NSIndexPath * _indexPath;
    bool  _managesViewControllerContainerViewLayout;
    double  _maximumContentWidth;
    SKUIViewControllerContainerView * _viewControllerContainerView;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) bool managesViewControllerContainerViewLayout;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, readonly) UIView *viewControllerContainerView;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)indexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)managesViewControllerContainerViewLayout;
- (double)maximumContentWidth;
- (void)setManagesViewControllerContainerViewLayout:(bool)arg1;
- (void)setMaximumContentWidth:(double)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (id)viewControllerContainerView;

@end
