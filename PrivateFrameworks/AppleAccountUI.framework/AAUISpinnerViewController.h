/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISpinnerViewController : UIViewController {
    UILabel * _label;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, retain) UILabel *label;
@property (getter=isSpinning, nonatomic) bool spinning;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSpinning;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setSpinning:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
