/* made by EzioChiu.
 */

@protocol HDNotificationServerInterface <NSObject>

@required

- (void)remote_setBadgeCount:(void *)arg1 forDomain:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
