/* made by EzioChiu.
 */

@protocol PUMutablePhotosGlobalFooterView <NSObject>

@required

- (UIView *)accessoryView;
- (id /* block */)action:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (NSString *)actionConfirmationAlertButtonTitle;
- (NSString *)actionConfirmationAlertTitle;
- (NSString *)actionTitle;
- (bool)isPaused;
- (double)progress;
- (void)setAccessoryView:(UIView *)arg1;
- (void)setAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setActionConfirmationAlertButtonTitle:(NSString *)arg1;
- (void)setActionConfirmationAlertTitle:(NSString *)arg1;
- (void)setActionTitle:(NSString *)arg1;
- (void)setPaused:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setSubtitle1:(NSString *)arg1;
- (void)setSubtitle2:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle1;
- (NSString *)subtitle2;
- (NSString *)title;

@end
