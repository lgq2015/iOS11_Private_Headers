/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface CloudTabServices : NSObject

+ (id)_serverConnection;
+ (void)clearAllCloudTabDevices;
+ (void)clearTabsForCurrentDevice;
+ (void)didToggleCloudTabs:(bool)arg1;
+ (void)didToggleCloudTabs:(bool)arg1 terminateAfterUpdating:(bool)arg2;
+ (void)didTogglePrivateBrowsing:(bool)arg1;

@end
