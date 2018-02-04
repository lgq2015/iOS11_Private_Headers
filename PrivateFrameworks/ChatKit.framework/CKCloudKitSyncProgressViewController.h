/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCloudKitSyncProgressViewController : UIViewController <IMCloudKitEventHandler> {
    UIButton * _actionButton;
    <CKCloudKitSyncProgressViewControllerDelegate> * _delegate;
    bool  _hidden;
    UIStackView * _horizontalStackView;
    IMCloudKitSyncProgress * _lastProgress;
    UIProgressView * _progressBar;
    UILabel * _progressLabel;
    UILabel * _userMessageLabel;
    UIStackView * _verticalStackView;
}

@property (nonatomic, readonly) UIButton *actionButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKCloudKitSyncProgressViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIStackView *horizontalStackView;
@property (nonatomic, retain) IMCloudKitSyncProgress *lastProgress;
@property (nonatomic, readonly) UIProgressView *progressBar;
@property (nonatomic, readonly) UILabel *progressLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *userMessageLabel;
@property (nonatomic, retain) UIStackView *verticalStackView;

- (void).cxx_destruct;
- (void)_actionButtonWasPressed:(id)arg1;
- (id)_createLabel;
- (id)actionButton;
- (void)addToToolbar:(id)arg1;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (id)delegate;
- (id)horizontalStackView;
- (id)init;
- (bool)isHidden;
- (id)lastProgress;
- (void)loadView;
- (id)progressBar;
- (id)progressLabel;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHorizontalStackView:(id)arg1;
- (void)setLastProgress:(id)arg1;
- (void)setVerticalStackView:(id)arg1;
- (void)updateWithCloudKitProgress:(id)arg1;
- (id)userMessageLabel;
- (id)verticalStackView;
- (void)viewWillLayoutSubviews;

@end
