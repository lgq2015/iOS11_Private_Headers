/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUISpinnerView : RUIElement {
    UILabel * _label;
    RUIObjectModel * _objectModel;
    UIActivityIndicatorView * _spinner;
    UIColor * _spinnerColor;
    UIView * _view;
}

@property (nonatomic) RUIObjectModel *objectModel;
@property (nonatomic, retain) UIColor *spinnerColor;

- (void).cxx_destruct;
- (id)objectModel;
- (void)setObjectModel:(id)arg1;
- (void)setSpinnerColor:(id)arg1;
- (id)spinnerColor;
- (id)spinnerView;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
