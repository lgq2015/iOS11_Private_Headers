/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioTierPicker : NSObject {
    BitrateLimits * bitrateLimits;
    VCAudioTier * defaultTier;
    VCAudioTier * fallbackTier;
    int  operatingMode;
    NSMutableArray * tierTablesForRedNumPayloads;
    bool  useCaseWatchContinuity;
    bool  usingCellular;
}

@property (readonly) VCAudioTier *defaultTier;

+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned int)arg3 headerSize:(unsigned int)arg4 operatingMode:(int)arg5 usingCellular:(bool)arg6 useCaseWatchContinuity:(bool)arg7;
+ (bool)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2;
+ (bool)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 operatingMode:(int)arg4 redNumPayloads:(unsigned int)arg5 cellular:(bool)arg6;
+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;

- (id)allAudioTiers;
- (void)dealloc;
- (id)defaultTier;
- (id)initWithOperatingMode:(int)arg1 payloadConfigs:(id)arg2 packetsPerBundle:(id)arg3 supportedRedNumPayloads:(id)arg4 headerSize:(unsigned long long)arg5 usingCellular:(bool)arg6 useCaseWatchContinuity:(bool)arg7 defaultMaxCap:(unsigned long long)arg8;
- (void)printCreatedAudioTiers:(id)arg1;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;

@end
