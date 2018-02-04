/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTitledImageBalloonView : CKImageBalloonView {
    UIImageView * _chevron;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic) <CKTitledImageBalloonViewDelegate> *delegate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)chevron;
- (void)configureForLocatingChatItem:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setChevron:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (id)title;
- (id)titleLabel;

@end
