/* made by EzioChiu.
 */

@protocol TSKAccessControllerReadTicket <NSObject>

@required

- (void)beginExtendingLifetime;
- (void)endExtendingLifetime;

@end
