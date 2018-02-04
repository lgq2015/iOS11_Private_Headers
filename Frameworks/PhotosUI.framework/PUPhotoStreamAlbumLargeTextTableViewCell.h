/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoStreamAlbumLargeTextTableViewCell : PUPhotoStreamAlbumTableViewCell {
    UIImageView * _albumImageView;
    NSArray * _currentConstraints;
    UILabel * _detailLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *albumImageView;
@property (nonatomic, retain) NSArray *currentConstraints;
@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;
- (id)albumImageView;
- (id)currentConstraints;
- (id)detailLabel;
- (id)detailText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAlbumImageView:(id)arg1;
- (void)setCurrentConstraints:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)text;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
