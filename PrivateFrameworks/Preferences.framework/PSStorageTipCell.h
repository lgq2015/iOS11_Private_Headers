/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageTipCell : PSTableCell {
    UIImageView * _appIconView;
    UIImageView * _checkIconView;
    NSMutableArray * _constraints;
    UIButton * _enableButton;
    double  _enableWidth;
    NSString * _hformat;
    bool  _isOption;
    float  _percent;
    float  _prevPercent;
    UILabel * _progressLabel;
    PSStorageProgressView * _progressView;
    double  _progressWidth;
    UIActivityIndicatorView * _spinner;
    UILabel * _titleLabel;
    double  _titleWidth;
}

- (void).cxx_destruct;
- (void)_activateOption;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end
