/* made by EzioChiu.
 */

@protocol _UIRemoteKeyboardInputViewPlaceholder

@required

- (UIView *)associatedView;
- (UIView *)fallbackView;
- (struct CGSize { double x1; double x2; })fixedSize;
- (UIView *)placeheldView;
- (bool)refreshPlaceholder;
- (void)setAssociatedView:(UIView *)arg1;
- (void)setFallbackView:(UIView *)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;

@end
