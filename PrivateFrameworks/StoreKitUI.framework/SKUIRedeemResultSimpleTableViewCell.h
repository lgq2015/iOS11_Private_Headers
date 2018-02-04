/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemResultSimpleTableViewCell : UITableViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _childContentInsets;
    UIView * _childContentView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } childContentInsets;
@property (nonatomic, retain) UIView *childContentView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })childContentInsets;
- (id)childContentView;
- (void)layoutSubviews;
- (void)setChildContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setChildContentView:(id)arg1;

@end
