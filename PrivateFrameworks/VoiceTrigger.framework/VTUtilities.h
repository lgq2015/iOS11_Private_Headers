/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTUtilities : NSObject

+ (bool)VTIsHorseman;
+ (double)_round:(double)arg1 withPlaces:(int)arg2;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (void)forceReload;
+ (bool)isAlwaysOn;
+ (bool)isInternalInstall;
+ (bool)isNano;
+ (id)sanitizeEventInfoForLogging:(id)arg1;
+ (bool)supportPremiumAssets;
+ (double)systemUpTime;

@end
