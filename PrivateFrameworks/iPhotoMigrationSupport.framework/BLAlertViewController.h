/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLAlertViewController : UIViewController {
    UIActivityIndicatorView * _activityIndicator;
    UIButton * _cancelButton;
    NSString * _cancelButtonTitle;
    <BLAlertViewControllerDelegate> * _delegate;
    UIButton * _firstOtherButton;
    NSString * _firstOtherButtonTitle;
    struct CGSize { 
        double width; 
        double height; 
    }  _formSize;
    bool  _hasActivity;
    NSString * _message;
    UILabel * _messageLabel;
    double  _progress;
    UIProgressView * _progressView;
    UIButton * _secondOtherButton;
    NSString * _secondOtherButtonTitle;
    bool  _showsActivityIndicator;
    bool  _showsProgressIndicator;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, readonly) long long cancelButtonIndex;
@property (nonatomic, retain) NSString *cancelButtonTitle;
@property (nonatomic) <BLAlertViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIButton *firstOtherButton;
@property (nonatomic, retain) NSString *firstOtherButtonTitle;
@property (nonatomic) struct CGSize { double x1; double x2; } formSize;
@property (nonatomic) bool hasActivity;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIProgressView *progressView;
@property (nonatomic, retain) UIButton *secondOtherButton;
@property (nonatomic, retain) NSString *secondOtherButtonTitle;
@property (nonatomic) bool showsActivityIndicator;
@property (nonatomic) bool showsProgressIndicator;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_recalculateFormSize;
- (void)_sizeContent;
- (id)activityIndicator;
- (void)cancelAction:(id)arg1;
- (id)cancelButton;
- (long long)cancelButtonIndex;
- (id)cancelButtonTitle;
- (id)delegate;
- (id)firstOtherButton;
- (void)firstOtherButtonAction:(id)arg1;
- (id)firstOtherButtonTitle;
- (struct CGSize { double x1; double x2; })formSize;
- (struct CGSize { double x1; double x2; })formSizeForOrientation:(long long)arg1;
- (bool)hasActivity;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 firstOtherButtonTitle:(id)arg4 secondOtherButtonTitle:(id)arg5;
- (id)message;
- (id)messageLabel;
- (double)progress;
- (id)progressView;
- (id)secondOtherButton;
- (void)secondOtherButtonAction:(id)arg1;
- (id)secondOtherButtonTitle;
- (void)setActivityIndicator:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstOtherButton:(id)arg1;
- (void)setFirstOtherButtonTitle:(id)arg1;
- (void)setFormSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasActivity:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSecondOtherButton:(id)arg1;
- (void)setSecondOtherButtonTitle:(id)arg1;
- (void)setShowsActivityIndicator:(bool)arg1;
- (void)setShowsProgressIndicator:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)showsActivityIndicator;
- (bool)showsProgressIndicator;
- (id)titleLabel;
- (void)updateProgressAndActivityIndicators;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
