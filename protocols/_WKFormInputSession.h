/* made by EzioChiu.
 */

@protocol _WKFormInputSession <NSObject>

@required

- (NSString *)accessoryViewCustomButtonTitle;
- (bool)accessoryViewShouldNotShow;
- (UIView *)customInputView;
- (<_WKFocusedElementInfo> *)focusedElementInfo;
- (bool)forceSecureTextEntry;
- (bool)isValid;
- (void)setAccessoryViewCustomButtonTitle:(NSString *)arg1;
- (void)setAccessoryViewShouldNotShow:(bool)arg1;
- (void)setCustomInputView:(UIView *)arg1;
- (void)setForceSecureTextEntry:(bool)arg1;
- (void)setSuggestions:(NSArray *)arg1;
- (NSArray *)suggestions;
- (NSObject<NSSecureCoding> *)userObject;

@end
