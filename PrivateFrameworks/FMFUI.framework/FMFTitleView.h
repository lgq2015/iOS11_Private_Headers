/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFTitleView : UIView {
    FMFLocation * _location;
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _titleBottomConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) FMFLocation *location;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleBottomConstraint;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_updateLabels:(id)arg1;
- (id)initFromNib;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleBottomConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleBottomConstraint;
- (id)titleLabel;
- (void)updateLocation:(id)arg1;

@end
