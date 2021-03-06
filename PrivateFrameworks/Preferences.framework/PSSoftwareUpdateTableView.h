/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateTableView : UITableView {
    UIActivityIndicatorView * _checkingForUpdateSpinner;
    UILabel * _checkingStatusLabel;
    NSString * _currentVersion;
    NSString * _sourceOfUpdateRestriction;
    int  _state;
    UILabel * _subtitleLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (nonatomic, retain) UILabel *checkingStatusLabel;
@property (nonatomic, retain) NSString *currentVersion;
@property (nonatomic, retain) NSString *sourceOfUpdateRestriction;
@property (nonatomic) int state;
@property (nonatomic, retain) UILabel *subtitleLabel;

- (void).cxx_destruct;
- (id)checkingForUpdateSpinner;
- (id)checkingStatusLabel;
- (id)currentVersion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)setCheckingForUpdateSpinner:(id)arg1;
- (void)setCheckingStatusLabel:(id)arg1;
- (void)setCurrentVersion:(id)arg1;
- (void)setSourceOfUpdateRestriction:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id)sourceOfUpdateRestriction;
- (int)state;
- (id)subtitleLabel;

@end
