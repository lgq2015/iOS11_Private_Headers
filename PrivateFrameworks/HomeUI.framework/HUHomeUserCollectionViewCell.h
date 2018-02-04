/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomeUserCollectionViewCell : UICollectionViewCell <HUCellProtocol> {
    HUContactView * _contactView;
    HFItem * _item;
}

@property (nonatomic) double avatarDiameter;
@property (nonatomic, retain) HUContactView *contactView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

+ (id)_requiredKeyDescriptors;

- (void).cxx_destruct;
- (void)_createSubviews;
- (double)avatarDiameter;
- (id)contactView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)prepareForReuse;
- (void)setAvatarDiameter:(double)arg1;
- (void)setContactView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
