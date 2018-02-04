/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasImageViewController : UIViewController <VideosExtrasZoomingImageTransitionParticipant> {
    UIActivityIndicatorView * _activityIndicatorView;
    bool  _allowsPinchingImageForInteractiveZoomingImageTransition;
    MPUContentSizeLayoutConstraint * _bottomLabelConstraint;
    UILabel * _descriptionLabel;
    MPUContentSizeLayoutConstraint * _descriptionLeadingConstraint;
    NSArray * _gestureRecognizers;
    unsigned long long  _imageIndex;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext * _interactiveTransitionSourceContext;
    bool  _overlayHidden;
    UILabel * _subtitleLabel;
    MPUContentSizeLayoutConstraint * _subtitleLeadingConstraint;
    UIView * _textContainmentView;
    UILabel * _titleLabel;
    MPUContentSizeLayoutConstraint * _topLabelConstraint;
    VideosExtrasZoomableImageView * _zoomableImageView;
    NSString * _zoomingImageTransitionIdentifier;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) bool allowsPinchingImageForInteractiveZoomingImageTransition;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *bottomLabelConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint;
@property (nonatomic, retain) NSAttributedString *descriptionString;
@property (nonatomic, copy) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageIndex;
@property (nonatomic, retain) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext;
@property (nonatomic) bool overlayHidden;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint;
@property (nonatomic, retain) NSAttributedString *subtitleString;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textContainmentView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSAttributedString *titleString;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *topLabelConstraint;
@property (nonatomic, retain) VideosExtrasZoomableImageView *zoomableImageView;
@property (nonatomic, copy) NSString *zoomingImageTransitionIdentifier;

- (void).cxx_destruct;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (id)activityIndicatorView;
- (bool)allowsPinchingImageForInteractiveZoomingImageTransition;
- (id)bottomLabelConstraint;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionLeadingConstraint;
- (id)descriptionString;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)gestureRecognizers;
- (id)image;
- (unsigned long long)imageIndex;
- (id)interactiveTransitionSourceContext;
- (bool)overlayHidden;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAllowsPinchingImageForInteractiveZoomingImageTransition:(bool)arg1;
- (void)setBottomLabelConstraint:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLeadingConstraint:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setGestureRecognizers:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageIndex:(unsigned long long)arg1;
- (void)setInteractiveTransitionSourceContext:(id)arg1;
- (void)setOverlayHidden:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleLeadingConstraint:(id)arg1;
- (void)setSubtitleString:(id)arg1;
- (void)setTextContainmentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setTopLabelConstraint:(id)arg1;
- (void)setZoomableImageView:(id)arg1;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleLeadingConstraint;
- (id)subtitleString;
- (id)textContainmentView;
- (id)titleLabel;
- (id)titleString;
- (id)topLabelConstraint;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)zoomableImageView;
- (id)zoomingImageTransitionIdentifier;

@end
