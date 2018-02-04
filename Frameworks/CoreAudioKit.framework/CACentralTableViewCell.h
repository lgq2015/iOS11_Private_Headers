/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CACentralTableViewCell : UITableViewCell {
    NSArray * _activityHConstraints;
    UIActivityIndicatorView * _activityIndicator;
    NSArray * _activityVConstraints;
    UILabel * _connectionStatusLabel;
    UILabel * _deviceNameLabel;
    UILabel * _inputLabel;
    NSArray * _labelConstraints;
    UILabel * _outputLabel;
    UILabel * _slashLabel;
}

@property (nonatomic, retain) NSArray *activityHConstraints;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) NSArray *activityVConstraints;
@property (nonatomic, retain) UILabel *connectionStatusLabel;
@property (nonatomic, retain) UILabel *deviceNameLabel;
@property (nonatomic, retain) UILabel *inputLabel;
@property (nonatomic, retain) NSArray *labelConstraints;
@property (nonatomic, retain) UILabel *outputLabel;
@property (nonatomic, retain) UILabel *slashLabel;

- (id)activityHConstraints;
- (id)activityIndicator;
- (id)activityVConstraints;
- (id)connectionStatusLabel;
- (void)createInitialConstraints;
- (void)dealloc;
- (id)deviceNameLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)inputLabel;
- (id)labelConstraints;
- (id)outputLabel;
- (void)setActivityHConstraints:(id)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setActivityVConstraints:(id)arg1;
- (void)setConnectionStatusLabel:(id)arg1;
- (void)setDeviceNameLabel:(id)arg1;
- (void)setInputLabel:(id)arg1;
- (void)setLabelConstraints:(id)arg1;
- (void)setOutputLabel:(id)arg1;
- (void)setSlashLabel:(id)arg1;
- (id)slashLabel;
- (void)startIndicator;
- (void)stopIndicator;
- (void)updateConstraints;

@end
