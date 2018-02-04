/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAccountErrorDisplayer : NSObject

+ (bool)_reauthorizeForAccount:(id)arg1 usingViewController:(id)arg2;
+ (bool)errorIsActionable:(unsigned long long)arg1;
+ (unsigned long long)moreSevereErrorOfError:(unsigned long long)arg1 andError:(unsigned long long)arg2;
+ (void)presentAlertForAccount:(id)arg1 error:(unsigned long long)arg2 usingViewController:(id)arg3;
+ (void)presentAlertForOfflineErrorUsingViewController:(id)arg1;
+ (unsigned long long)severityForError:(unsigned long long)arg1;

@end
