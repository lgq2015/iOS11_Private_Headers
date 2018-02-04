/* made by EzioChiu.
 */

@protocol _TVRCKeyboardImpl <NSObject>

@required

- (TVRCKeyboardAttributes *)attributes;
- (bool)isEditing;
- (void)sendReturnKey;
- (void)setKeyboardController:(TVRCKeyboardController *)arg1;
- (void)setText:(NSString *)arg1;
- (NSString *)text;

@end
