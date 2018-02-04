/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHostingAreaLayoutView : UIView {
    UIView * _hostedView;
}

@property (nonatomic, retain) UIView *hostedView;

+ (id)blackBackgroundViewHostingView:(id)arg1;
+ (id)viewHostingView:(id)arg1;

- (void).cxx_destruct;
- (id)hostedView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHostedView:(id)arg1;
- (bool)translatesAutoresizingMaskIntoConstraints;

@end
