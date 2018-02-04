/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSmallCalloutViewController : UIViewController <CalloutViewControllerProtocol> {
    <MKSmallCalloutViewControllerDelegate> * _delegate;
    MKSmallCalloutView * _smallCalloutView;
}

@property (getter=isButtonEnabled, nonatomic) bool buttonEnabled;
@property (nonatomic, retain) MKCalloutBackgroundView *calloutBackgroundView;
@property (nonatomic, copy) NSString *calloutSubtitle;
@property (nonatomic, copy) NSString *calloutTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKSmallCalloutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double minimumWidth;
@property (nonatomic, retain) UIView *rightView;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })defaultSize;

- (void).cxx_destruct;
- (id)_smallCalloutView;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutBackgroundView;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (id)delegate;
- (id)detailView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isButtonEnabled;
- (id)leftView;
- (void)loadView;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (double)maximumWidth;
- (double)minimumWidth;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reset;
- (id)rightView;
- (void)setButtonEnabled:(bool)arg1;
- (void)setCalloutBackgroundView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setCalloutTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
