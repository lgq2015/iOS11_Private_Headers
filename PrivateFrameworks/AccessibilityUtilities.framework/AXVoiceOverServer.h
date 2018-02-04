/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXVoiceOverServer : AXServer

+ (id)server;

- (bool)_connectIfNecessary;
- (id)_serviceName;
- (id)currentFocusedElement;
- (id)currentRotorName;
- (bool)isBrailleInputUIShowing;
- (id)lastScreenChange;
- (id)lastSoundsPlayed;
- (id)lastSpokenPhrases;
- (bool)triggerCommand:(long long)arg1;
- (bool)triggerCommand:(long long)arg1 withArgument:(id)arg2;

@end
