/* made by EzioChiu.
 */

@protocol EMFEmojiPreferenceActions <NSObject>

@required

- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(EMFEmojiToken *)arg1;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2 typingName:(NSString *)arg3;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(NSString *)arg2;

@end
