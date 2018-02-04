/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCloudPhotoWelcomeView : UIView {
    UILabel * _bodyLabel;
    bool  _buttonsEnabled;
    UIView * _containerView;
    <PUCloudPhotoWelcomeViewDelegate> * _delegate;
    struct { 
        bool goButtonTapped; 
        bool learnMoreTapped; 
        bool notNowTapped; 
    }  _delegateRespondsTo;
    UILabel * _finePrintLabel;
    UIButton * _goButton;
    NSLayoutConstraint * _goButtonWidthConstraint;
    UIImageView * _graphicImageView;
    NSArray * _layoutConstraints;
    UIButton * _learnMoreButton;
    UIButton * _notNowButton;
    UIScrollView * _scrollView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *bodyLabel;
@property (getter=areButtonsEnabled, nonatomic) bool buttonsEnabled;
@property (nonatomic) <PUCloudPhotoWelcomeViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *finePrintLabel;
@property (nonatomic, readonly) UIButton *goButton;
@property (nonatomic, readonly) UIImageView *graphicImageView;
@property (nonatomic, readonly) UIButton *learnMoreButton;
@property (nonatomic, readonly) UIButton *notNowButton;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (void)_goButtonTapped:(id)arg1;
- (void)_handleNotNowTapped:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateFontAndStyle;
- (bool)areButtonsEnabled;
- (id)bodyLabel;
- (id)delegate;
- (id)finePrintLabel;
- (id)goButton;
- (id)graphicImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (id)notNowButton;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
