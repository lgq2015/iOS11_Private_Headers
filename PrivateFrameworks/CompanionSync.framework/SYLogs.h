/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogs : NSObject

+ (void)initialize;
+ (id)logFolder;
+ (bool)shouldDisplaySyncErrorMessage;
+ (bool)shouldDumpIDSOnSyncError;
+ (bool)shouldLogBubblesToAggD;

@end
