/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAudioHardwareManager : NSObject

+ (bool)channelsAreAirplay:(id)arg1 route:(id)arg2;
+ (bool)channelsAreWiredHeadphones:(id)arg1;
+ (id)channelsForPort:(id)arg1;
+ (id)defaultPort;
+ (id)defaultPortChannels;
+ (void)disableMultiroute;
+ (void)enableMultiroute;
+ (void)setDefaultPort:(id)arg1;
+ (void)setDefaultPortChannels:(id)arg1;
+ (id)sharedManager;

- (void)_handleSurroundSoundDefaults:(id)arg1 returnedChannels:(id)arg2 port:(id)arg3 source:(long long)arg4;
- (id)_savedIdForRouteDescription:(id)arg1;
- (id)init;
- (id)savedChannelsForOutput:(id)arg1 forSource:(long long)arg2;
- (void)setSavedChannels:(id)arg1 forOutput:(id)arg2 forSource:(long long)arg3;

@end
