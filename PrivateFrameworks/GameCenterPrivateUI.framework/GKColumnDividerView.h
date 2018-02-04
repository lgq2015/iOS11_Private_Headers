/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKColumnDividerView : UICollectionReusableView {
    GKHairlineView * _hairlineView;
}

@property (nonatomic, retain) GKHairlineView *hairlineView;

- (void)dealloc;
- (id)hairlineView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHairlineView:(id)arg1;

@end
