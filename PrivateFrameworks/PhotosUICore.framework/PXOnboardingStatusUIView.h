/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXOnboardingStatusUIView : UIView {
    NSArray * _constraints;
    UILabel * _descriptionLabel;
    NSString * _descriptionText;
    bool  _paused;
    double  _progress;
    UIProgressView * _progressView;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, copy) NSString *descriptionText;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIProgressView *progressView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_createViews;
- (void)commonInit;
- (id)constraints;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPaused;
- (double)progress;
- (id)progressView;
- (void)setConstraints:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)updateConstraints;

@end
