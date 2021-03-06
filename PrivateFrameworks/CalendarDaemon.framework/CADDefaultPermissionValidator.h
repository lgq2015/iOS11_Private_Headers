/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {
    ClientConnection * _connection;
}

@property (readonly) bool canMakeSpotlightChanges;
@property (readonly) bool canModifyCalendarDatabase;
@property (readonly) bool canModifySuggestedEventCalendar;
@property (retain) ClientConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasCalendarToolEntitlement;
@property (readonly) bool hasContactsUIEntitlement;
@property (readonly) bool hasMigrationEntitlement;
@property (readonly) bool hasSyncClientEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) bool internalAccessLevelGranted;
@property (readonly) Class superclass;
@property (readonly) bool testingAccessLevelGranted;

- (void).cxx_destruct;
- (bool)_valueForBooleanEntitlement:(id)arg1 defaultValue:(bool)arg2;
- (bool)canMakeSpotlightChanges;
- (bool)canModifyCalendarDatabase;
- (bool)canModifySuggestedEventCalendar;
- (id)connection;
- (bool)hasCalendarToolEntitlement;
- (bool)hasContactsUIEntitlement;
- (bool)hasMigrationEntitlement;
- (bool)hasSyncClientEntitlement;
- (id)initWithClientConnection:(id)arg1;
- (bool)internalAccessLevelGranted;
- (void)setConnection:(id)arg1;
- (bool)testingAccessLevelGranted;

@end
