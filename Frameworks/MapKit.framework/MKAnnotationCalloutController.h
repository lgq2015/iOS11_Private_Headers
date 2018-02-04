/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotationCalloutController : NSObject {
    MKAnnotationView * _annotationView;
    <MKAnnotationCalloutControllerDelegate> * _delegate;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    bool  _needsCalloutUpdate;
}

@property (nonatomic, retain) MKAnnotationView *annotationView;
@property (nonatomic) <MKAnnotationCalloutControllerDelegate> *delegate;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;

- (void).cxx_destruct;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (bool)_isShowingCallout;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (void)_removeAccessoryTargets;
- (void)_setDetailAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setNeedsCalloutUpdate;
- (void)_setRightAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)_setTitle:(id)arg1;
- (id)_subtitle;
- (void)_updateCallout;
- (void)_updateCalloutAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleCenteringRectInView:(id)arg1;
- (id)annotationView;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (double)defaultCalloutHeight;
- (id)delegate;
- (void)hideCalloutAnimated:(bool)arg1;
- (bool)isCalloutExpanded;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAnnotationView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(bool)arg2 scrollToFit:(bool)arg3 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
