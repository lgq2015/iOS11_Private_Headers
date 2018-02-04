/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalWellKnownPaths : NSObject

+ (id)calendarCachePath;
+ (id)calendarClientIdConflictsPath;
+ (id)calendarFileHandlerPath;
+ (id)calendarSyncChangesPath;
+ (id)calendarsFolderPath;
+ (bool)checkOrCreatePath:(id)arg1;
+ (id)eventsPendingChangesPath;
+ (void)initialize;
+ (id)mailInvitationDropPath;
+ (id)realHomeDirectoryPath;
+ (void)resetPaths;
+ (id)temporaryFilesPath;

@end
