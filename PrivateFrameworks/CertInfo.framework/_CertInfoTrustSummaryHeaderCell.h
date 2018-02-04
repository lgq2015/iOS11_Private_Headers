/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell {
    _CertInfoActionButton * _actionButton;
    UIImage * _certificateImage;
    UIImage * _notTrustedGradient;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    bool  _trusted;
    _CertInfoGradientLabel * _trustedLabel;
}

@property (nonatomic, readonly) _CertInfoActionButton *actionButton;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic, copy) NSString *trustSubtitle;
@property (nonatomic, copy) NSString *trustTitle;
@property (getter=isTrusted, nonatomic) bool trusted;

- (void).cxx_destruct;
- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (id)_trustedLabel;
- (id)actionButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isTrusted;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setActionButtonTitle:(id)arg1 destructive:(bool)arg2 animated:(bool)arg3;
- (void)setExpired:(bool)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (void)setTrusted:(bool)arg1;
- (id)trustSubtitle;
- (id)trustTitle;

@end
