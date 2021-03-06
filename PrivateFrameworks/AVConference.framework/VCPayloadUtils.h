/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCPayloadUtils : NSObject

+ (unsigned int)bitrateForAMRCodecMode:(int)arg1;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)arg1;
+ (unsigned int)bitrateForCodecType:(long long)arg1 mode:(int)arg2;
+ (unsigned int)bitrateForEVSCodecMode:(int)arg1;
+ (unsigned int)blockSizeForPayload:(int)arg1;
+ (bool)canBundleExternallyForPayload:(int)arg1 forBundlingScheme:(int)arg2 operatingMode:(int)arg3;
+ (bool)canSetBitrateForPayload:(int)arg1;
+ (long long)codecTypeForPayload:(int)arg1;
+ (unsigned int)internalBundleFactorForPayload:(int)arg1;
+ (bool)isPayloadSupportedInFaceTime:(int)arg1;
+ (bool)isUseCaseWatchContinuity:(int)arg1 primaryPayload:(int)arg2;
+ (int)payloadForCodecType:(long long)arg1;
+ (float)qualityForPayload:(int)arg1 forBitrate:(unsigned int)arg2;
+ (unsigned int)sampleRateForPayload:(int)arg1;
+ (bool)shouldEnablePacketSizeLimitForPayload:(int)arg1;
+ (bool)shouldUseCookieForPayload:(int)arg1;
+ (bool)supportsCodecRateModesForCodecType:(long long)arg1;

@end
