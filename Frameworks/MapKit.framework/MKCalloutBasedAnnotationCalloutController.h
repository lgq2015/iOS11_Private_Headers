/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCalloutBasedAnnotationCalloutController : MKAnnotationCalloutController {
    UICalloutView * _calloutView;
}

- (void).cxx_destruct;
- (void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(struct CGPoint { double x1; double x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 animated:(bool)arg5;
- (bool)_isShowingCallout;
- (void)_setDetailAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)_setTitle:(id)arg1;
- (id)_subtitle;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (double)defaultCalloutHeight;
- (void)hideCalloutAnimated:(bool)arg1;
- (id)init;
- (bool)isCalloutExpanded;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(bool)arg2 scrollToFit:(bool)arg3 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
