/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCoreAutomationNotifications : NSObject

+ (id)sharedInstance;

- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(bool)arg2 messagesDidSync:(bool)arg3 attachmentsDidSync:(bool)arg4;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2;
- (void)postCoreAutomationNotificationWithAction:(id)arg1;
- (void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(bool)arg2;

@end
