/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXUserEventTimer : NSObject

+ (id)sharedInstance;

- (void)setLockScreenDimTimerEnabled:(bool)arg1;
- (void)userEventOccurred;

@end
