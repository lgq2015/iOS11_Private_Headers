/* made by EzioChiu.
 */

@protocol CKActionMenuGestureRecognizerButtonDelegate <NSObject>

@required

- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(CKActionMenuGestureRecognizerButton *)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(CKActionMenuGestureRecognizerButton *)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(CKActionMenuGestureRecognizerButton *)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(CKActionMenuGestureRecognizerButton *)arg1;
- (bool)actionMenuGestureRecognizerButtonIsShowingHint:(CKActionMenuGestureRecognizerButton *)arg1;
- (bool)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(CKActionMenuGestureRecognizerButton *)arg1;
- (bool)actionMenuGestureRecognizerButtonShouldShowHint:(CKActionMenuGestureRecognizerButton *)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(CKActionMenuGestureRecognizerButton *)arg1;

@end
