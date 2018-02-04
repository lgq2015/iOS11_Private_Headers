/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSDetailController : PSViewController {
    PSEditingPane * _pane;
}

@property (nonatomic) PSEditingPane *pane;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)loadPane;
- (void)loadView;
- (id)pane;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paneFrame;
- (void)saveChanges;
- (void)setPane:(id)arg1;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)suspend;
- (id)title;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
