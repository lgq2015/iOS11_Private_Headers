/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioCoverImageSelectionTableViewCell : UITableViewCell {
    UIImageView * _cameraImageView;
    UIImageView * _coverImageView;
    UILabel * _placeholderLabel;
}

@property (nonatomic, retain) UIImage *coverImage;
@property (nonatomic, copy) NSString *placeholderText;

- (void).cxx_destruct;
- (id)coverImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)placeholderText;
- (void)setCoverImage:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPlaceholderText:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
