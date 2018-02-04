/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {
    MKCalloutBackgroundView * _calloutBackgroundView;
    UILayoutGuide * _centerContentLeadingGuide;
    UILayoutGuide * _centerContentTrailingGuide;
    UIView<_MKCalloutAccessoryView> * _detailView;
    NSLayoutConstraint * _detailViewBottomConstraint;
    NSLayoutConstraint * _detailViewMinTopConstraint;
    NSLayoutConstraint * _detailViewTrailingConstraint;
    UIView<_MKCalloutAccessoryView> * _externalLeftView;
    UIView<_MKCalloutAccessoryView> * _externalRightView;
    UIView<_MKCalloutAccessoryView> * _leftView;
    NSLayoutConstraint * _leftViewCenterContentMarginConstraint;
    NSLayoutConstraint * _leftViewHorizontalPositionConstraint;
    UILayoutGuide * _leftViewLeftSpacer;
    NSLayoutConstraint * _leftViewMinCalloutWidthConstraint;
    UILayoutGuide * _leftViewTopSpacer;
    NSLayoutConstraint * _leftViewTopSpacerBottomConstraint;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    _MKSmallCalloutPassthroughButton * _maskedContainerView;
    NSLayoutConstraint * _maxWidthConstraint;
    NSLayoutConstraint * _minWidthConstraint;
    bool  _needsPreferredContentSizeUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    UIView<_MKCalloutAccessoryView> * _rightView;
    NSLayoutConstraint * _rightViewCenterContentMarginConstraint;
    NSLayoutConstraint * _rightViewHorizontalPositionConstraint;
    NSLayoutConstraint * _rightViewMinCalloutWidthConstraint;
    UILayoutGuide * _rightViewRightSpacer;
    UILayoutGuide * _rightViewTopSpacer;
    NSLayoutConstraint * _rightViewTopSpacerBottomConstraint;
    bool  _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKUILabel * _subtitleLabel;
    NSLayoutConstraint * _titleBaselineFromTopConstraint;
    NSLayoutConstraint * _titleBaselineFromTopMinimumConstraint;
    _MKUILabel * _titleLabel;
    NSArray * _titleLabelConstraints;
    NSLayoutConstraint * _titleMinimumBaselineToBottomConstraint;
    NSLayoutConstraint * _unmaskedContainerLeadingConstraint;
    NSLayoutConstraint * _unmaskedContainerTrailingConstraint;
    UIView * _unmaskedContainerView;
}

@property (nonatomic, retain) MKCalloutBackgroundView *calloutBackgroundView;
@property (nonatomic, copy) NSString *calloutSubtitle;
@property (nonatomic, copy) NSString *calloutTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double minimumWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, retain) UIView *rightView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_maskedContainerView;
- (void)_setNeedsUpdatePreferredContentSize;
- (void)_updateAccessoryViewStyles;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutBackgroundView;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftView;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (double)maximumWidth;
- (double)minimumWidth;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reset;
- (id)rightView;
- (void)setCalloutBackgroundView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
