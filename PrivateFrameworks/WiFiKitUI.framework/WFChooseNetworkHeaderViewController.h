/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFChooseNetworkHeaderViewController : UIViewController {
    UIActivityIndicatorView * _activityIndicatorView;
    bool  _animating;
    UILabel * _label;
    NSString * _title;
}

@property (nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) bool animating;
@property (nonatomic) UILabel *label;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (bool)animating;
- (id)init;
- (id)label;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
