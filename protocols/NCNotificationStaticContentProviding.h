/* made by EzioChiu.
 */

@protocol NCNotificationStaticContentProviding <NSObject>

@required

- (id /* block */)cancelAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)clearAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)closeAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (NSDate *)date;
- (id /* block */)defaultAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (<NCNotificationStaticContentProvidingDelegate> *)delegate;
- (UIImage *)icon;
- (NSArray *)interfaceActions;
- (bool)isDateAllDay;
- (unsigned long long)messageNumberOfLines;
- (NSString *)primarySubtitleText;
- (NSString *)primaryText;
- (NSString *)secondaryText;
- (void)setDelegate:(id <NCNotificationStaticContentProvidingDelegate>)arg1;
- (bool)showsTextInputOnAppearance;
- (UIImage *)thumbnail;
- (NSTimeZone *)timeZone;
- (NSString *)title;

@end
