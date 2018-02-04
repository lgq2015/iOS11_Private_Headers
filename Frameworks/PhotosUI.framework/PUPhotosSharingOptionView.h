/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingOptionView : UICollectionReusableView <PXUIAssetBadgeViewDelegate> {
    SEL  _action;
    bool  _enabled;
    bool  _selected;
    id  _target;
    PXUIAssetBadgeView * _toggleGlyphButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isSelected;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end