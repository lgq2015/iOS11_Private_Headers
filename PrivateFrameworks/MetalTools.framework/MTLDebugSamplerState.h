/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugSamplerState : MTLToolsSamplerState {
    MTLSamplerDescriptor * _descriptor;
}

@property (nonatomic, readonly, copy) MTLSamplerDescriptor *descriptor;

- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
