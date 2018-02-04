/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingTabNavigationBar : SUNavigationBar <SKUIPositionAdjusting> {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _positionOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIOffset { double x1; double x2; } positionOffset;
@property (readonly) Class superclass;

- (struct UIOffset { double x1; double x2; })positionOffset;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPositionOffset:(struct UIOffset { double x1; double x2; })arg1;

@end
