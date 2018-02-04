/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkNoContentBannerView : UIView {
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (retain) UILabel *subtitleLabel;
@property (nonatomic, retain) NSString *subtitleString;
@property (retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleString;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleString:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleString;
- (id)titleLabel;
- (id)titleString;

@end
