/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentView : UIView <CKAttachmentView> {
    UILabel * _actionLabel;
    UIImageView * _iconImageView;
    CKMediaObject * _mediaObject;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *actionLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)action;
- (id)actionLabel;
- (id)icon;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaObject;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAction:(id)arg1;
- (void)setActionLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;

@end
