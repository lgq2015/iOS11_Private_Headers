/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDetailStatusOverlayView : UIView {
    UIImageView * _keyAssetImageView;
    UILabel * _messageField;
    UILabel * _subtitleField;
    NSArray * _viewConstraints;
}

@property (nonatomic, readonly) UIImageView *keyAssetImageView;
@property (nonatomic, readonly) UILabel *messageField;
@property (nonatomic, readonly) UILabel *subtitleField;
@property (nonatomic, copy) NSArray *viewConstraints;

- (void).cxx_destruct;
- (double)_imageHeightMultiplier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyImage:(id)arg2 message:(id)arg3 subtitleText:(id)arg4;
- (id)keyAssetImageView;
- (id)messageField;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setViewConstraints:(id)arg1;
- (id)subtitleField;
- (void)updateConstraints;
- (id)viewConstraints;

@end
