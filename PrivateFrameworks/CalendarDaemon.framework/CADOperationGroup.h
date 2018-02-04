/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADOperationGroup : NSObject {
    ClientConnection * _conn;
}

@property (nonatomic, readonly) ClientConnection *conn;

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;
+ (id)whitelistedBundles;

- (void).cxx_destruct;
- (bool)accessGrantedToPerformSelector:(SEL)arg1;
- (id)conn;
- (id)initWithClientConnection:(id)arg1;

@end
