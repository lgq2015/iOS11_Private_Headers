/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell {
    NSArray * _groupAvatarViews;
    NSArray * _people;
    PXRoundedCornerOverlayView * _roundCornerOverlay;
}

@property (nonatomic, retain) NSArray *groupAvatarViews;
@property (nonatomic, retain) NSArray *people;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundCornerOverlay;

- (void).cxx_destruct;
- (void)_layoutAvatarViewsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)groupAvatarViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)people;
- (void)prepareForReuse;
- (id)roundCornerOverlay;
- (void)setGroupAvatarViews:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setRoundCornerOverlay:(id)arg1;

@end
