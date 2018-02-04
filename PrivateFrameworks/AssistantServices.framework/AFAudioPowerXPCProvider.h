/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding> {
    _AFAudioPowerXPCSharedMemory * _sharedMemory;
    AFXPCWrapper * _wrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didEndAccessPower;
- (bool)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2;
- (id)initWithXPCWrapper:(id)arg1;
- (void)willBeginAccessPower;

@end
