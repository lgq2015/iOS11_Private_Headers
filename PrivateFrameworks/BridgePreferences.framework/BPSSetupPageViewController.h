/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSSetupPageViewController : UIViewController <BPSBuddyController> {
    UIView * _contentView;
    <BPSBuddyControllerDelegate> * _delegate;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } computedTitleFrame;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BPSBuddyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computedTitleFrame;
- (id)contentView;
- (bool)contentViewIsInAdjustedScrollView;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (id)titleString;
- (void)updateTitleLabel;
- (double)verticalTitleInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
