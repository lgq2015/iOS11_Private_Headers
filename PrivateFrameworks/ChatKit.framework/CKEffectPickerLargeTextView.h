/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEffectPickerLargeTextView : CKEffectPickerView {
    bool  _finishedInitializing;
}

@property (nonatomic) bool finishedInitializing;

- (void)_touchUpInsideDotButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updateBalloonViewOrigin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateRoundedContainerView;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)cancelImpactSelection;
- (void)effectTypeDidChange:(id)arg1;
- (bool)finishedInitializing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sendButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 balloonViewOrigin:(struct CGPoint { double x1; double x2; })arg3 composition:(id)arg4 color:(BOOL)arg5;
- (double)marginBetweenPickerDotButtons;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)setFinishedInitializing:(bool)arg1;
- (bool)shouldAnimatePreviousLabelForCancel:(id)arg1;

@end
