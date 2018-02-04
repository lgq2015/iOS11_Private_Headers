/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFAudioPowerXPCSharedMemory : NSObject {
    unsigned long long  _mappedLength;
    void * _sharedRegion;
}

@property (nonatomic, readonly) float averagePower;
@property (nonatomic, readonly) float peakPower;

- (void)_destroyMapping;
- (float)averagePower;
- (void)dealloc;
- (id)initWithXPCObject:(id)arg1;
- (float)peakPower;

@end
