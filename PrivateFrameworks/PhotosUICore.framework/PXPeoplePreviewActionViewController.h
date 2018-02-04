/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeoplePreviewActionViewController : UIViewController {
    <PXPeoplePreviewActionViewControllerDelegate> * _delegate;
    UIImage * _image;
    UIImageView * _imageView;
    PXPersonItem * _personItem;
    UIView * _placeholderView;
}

@property (nonatomic) <PXPeoplePreviewActionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) PXPersonItem *personItem;
@property (nonatomic, retain) UIView *placeholderView;

- (void).cxx_destruct;
- (id)_localizedFavoriteActionTitle;
- (id)_localizedRemoveActionTitle;
- (void)_removePerson;
- (void)_toggleFaceCollectionFavorited;
- (void)_toggleForDesiredType:(long long)arg1;
- (void)_updateImageView;
- (id)delegate;
- (id)image;
- (id)imageView;
- (id)initWithDelegate:(id)arg1;
- (id)personItem;
- (id)placeholderView;
- (id)previewActionItems;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPersonItem:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
