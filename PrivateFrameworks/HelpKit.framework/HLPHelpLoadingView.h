/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpLoadingView : UIView {
    UIActivityIndicatorView * _activityIndicatorView;
    <HLPHelpLoadingViewDelegate> * _delegate;
    UIImageView * _errorImageView;
    UILabel * _errorMessageLabel;
    UILabel * _errorTitleLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) <HLPHelpLoadingViewDelegate> *delegate;
@property (nonatomic, retain) UILabel *errorMessageLabel;
@property (nonatomic, retain) UILabel *errorTitleLabel;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (id)delegate;
- (id)errorMessageLabel;
- (id)errorTitleLabel;
- (id)init;
- (void)removeErrorView;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorMessageLabel:(id)arg1;
- (void)setErrorTitleLabel:(id)arg1;
- (void)showActivityIndicator:(bool)arg1;
- (void)showDefaultErrorMessage;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)showHelpBookInfo;
- (void)showNoConnectionErrorMessage;
- (void)updateFonts;

@end
