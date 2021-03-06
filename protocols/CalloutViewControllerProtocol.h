/* made by EzioChiu.
 */

@protocol CalloutViewControllerProtocol <NSObject>

@required

- (void)beginMapsTransitionMovingSideways;
- (NSString *)calloutSubtitle;
- (NSString *)calloutTitle;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (UIView *)detailView;
- (UIView *)leftView;
- (UIView *)rightView;
- (void)setCalloutSubtitle:(NSString *)arg1;
- (void)setCalloutSubtitle:(NSString *)arg1 animated:(bool)arg2;
- (void)setCalloutTitle:(NSString *)arg1;
- (void)setDetailView:(UIView *)arg1;
- (void)setDetailView:(UIView *)arg1 animated:(bool)arg2;
- (void)setLeftView:(UIView *)arg1;
- (void)setLeftView:(UIView *)arg1 animated:(bool)arg2;
- (void)setRightView:(UIView *)arg1;
- (void)setRightView:(UIView *)arg1 animated:(bool)arg2;

@end
