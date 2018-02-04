/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    UIImageView * _imageView;
    <PXPerson> * _person;
}

@property (retain) UIImageView *imageView;
@property (nonatomic, retain) <PXPerson> *person;

- (void).cxx_destruct;
- (void)_updateImageAndWait:(bool)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)person;
- (void)setImageView:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPersonAndWaitForImage:(id)arg1;
- (void)updateImage;
- (void)viewScaleDidChange;

@end
