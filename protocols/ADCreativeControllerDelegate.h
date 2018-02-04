/* made by EzioChiu.
 */

@protocol ADCreativeControllerDelegate <NSObject>

@required

- (void)creativeControllerViewDidRequestCloseWithTapLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)creativeControllerViewDidRequestCreateCalendarEvent:(NSDictionary *)arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)creativeControllerViewDidRequestExpandURL:(NSURL *)arg1 withMaximumSize:(struct CGSize { double x1; double x2; })arg2 withTapLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)creativeControllerViewDidRequestOpenURL:(NSURL *)arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
