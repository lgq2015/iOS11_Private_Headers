/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDOpenMapsAction : DDAction

+ (bool)actionAvailableForCachedEvent:(id)arg1;
+ (bool)actionAvailableForContact:(id)arg1;

- (bool)canBePerformedByOpeningURL;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)performFromView:(id)arg1;

@end
