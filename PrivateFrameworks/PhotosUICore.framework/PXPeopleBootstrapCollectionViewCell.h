/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell {
    UIImageView * _badgeView;
    UIImageView * _checkmark;
    struct CGSize { 
        double width; 
        double height; 
    }  _checkmarkImageSize;
    bool  _confirmed;
    UIImage * _confirmedImage;
    PXPersonImageRequest * _imageRequest;
    UIImageView * _imageView;
    bool  _isMergeCandidate;
    bool  _isVerified;
    unsigned long long  _presentationStatus;
    PXRoundedCornerOverlayView * _roundCornerOverlay;
    UIImage * _unconfirmedImage;
}

@property (nonatomic, readonly) UIImageView *badgeView;
@property (nonatomic, readonly) UIImageView *checkmark;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } checkmarkImageSize;
@property (nonatomic) bool confirmed;
@property (nonatomic, readonly) UIImage *confirmedImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PXPersonImageRequest *imageRequest;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) bool isMergeCandidate;
@property (nonatomic) bool isVerified;
@property (nonatomic) unsigned long long presentationStatus;
@property (nonatomic, readonly) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (nonatomic, readonly) UIImage *unconfirmedImage;

+ (id)cloudBadgeImage;
+ (id)cloudErrorBadgeImage;

- (void).cxx_destruct;
- (bool)_isRTL;
- (void)_updateCellSizing;
- (id)badgeView;
- (id)checkmark;
- (struct CGSize { double x1; double x2; })checkmarkImageSize;
- (bool)confirmed;
- (id)confirmedImage;
- (id)image;
- (id)imageRequest;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMergeCandidate;
- (bool)isVerified;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (unsigned long long)presentationStatus;
- (id)roundCornerOverlay;
- (void)setConfirmed:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageRequest:(id)arg1;
- (void)setIsMergeCandidate:(bool)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setPresentationStatus:(unsigned long long)arg1;
- (id)unconfirmedImage;

@end
