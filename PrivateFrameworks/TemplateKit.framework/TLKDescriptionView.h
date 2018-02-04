/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKDescriptionView : TLKView <NUIContainerBoxViewDelegate, NUIContainerStackViewDelegate> {
    <TLKDescriptionViewDelegate> * _delegate;
    UITextView * _detailsTextView;
    TLKImage * _image;
    NUIContainerBoxView * _imageAndDescriptionBoxView;
    TLKImageView * _imageView;
    UIBezierPath * _imageViewExclusionPath;
    UIButton * _moreButton;
    UIBezierPath * _moreButtonExclusionPath;
    NSString * _moreButtonText;
    TLKMultilineText * _text;
    TLKMultilineText * _title;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property <TLKDescriptionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) UITextView *detailsTextView;
@property (readonly) unsigned long long hash;
@property (retain) TLKImage *image;
@property (retain) NUIContainerBoxView *imageAndDescriptionBoxView;
@property (retain) TLKImageView *imageView;
@property (retain) UIBezierPath *imageViewExclusionPath;
@property (retain) UIButton *moreButton;
@property (retain) UIBezierPath *moreButtonExclusionPath;
@property (retain) NSString *moreButtonText;
@property (readonly) Class superclass;
@property (retain) TLKMultilineText *text;
@property (retain) TLKMultilineText *title;
@property (retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (long long)containerBoxView:(id)arg1 horizontalAlignmentForArrangedSubview:(id)arg2;
- (long long)containerBoxView:(id)arg1 verticalAlignmentForArrangedSubview:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)delegate;
- (id)detailTextViewText;
- (id)detailsTextView;
- (id)exclusionPathsForTextView;
- (id)image;
- (id)imageAndDescriptionBoxView;
- (id)imageExclusionPath;
- (id)imageView;
- (id)imageViewExclusionPath;
- (id)init;
- (id)moreButton;
- (id)moreButtonExclusionPath;
- (bool)moreButtonIsHidden;
- (void)moreButtonPressed;
- (id)moreButtonText;
- (long long)numberOfLines;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)setDelegate:(id)arg1;
- (void)setDetailsTextView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAndDescriptionBoxView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageViewExclusionPath:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setMoreButtonExclusionPath:(id)arg1;
- (void)setMoreButtonText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldHideMoreButtonForTextView:(id)arg1;
- (void)simulateMoreButtonPress;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)text;
- (id)title;
- (id)titleLabel;

@end
