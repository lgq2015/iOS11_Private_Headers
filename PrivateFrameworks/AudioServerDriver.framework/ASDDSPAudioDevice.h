/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDDSPAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    ASDAudioDeviceDSPConfiguration * _currentDSPConfiguration;
    ASDAudioDeviceDSPDatabase * _dspDatabase;
    NSString * _resourcePath;
    ASDAudioDevice * _underlyingDevice;
}

@property (nonatomic, retain) ASDAudioDeviceDSPConfiguration *currentDSPConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ASDAudioDeviceDSPDatabase *dspDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ASDAudioDevice *underlyingDevice;

+ (id)dspItemsInConfiguration:(id)arg1 notInConfiguration:(id)arg2;

- (void).cxx_destruct;
- (void)addInputStream:(id)arg1;
- (void)addOutputStream:(id)arg1;
- (bool)applyDeviceDSPConfiguration:(id)arg1;
- (bool)applyStreamDSPConfiguration:(id)arg1 toStream:(id)arg2;
- (bool)canBeDefaultDevice;
- (bool)canBeDefaultSystemDevice;
- (bool)changeSamplingRate:(double)arg1;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 forObject:(id)arg2;
- (unsigned int)clockAlgorithm;
- (unsigned int)clockDomain;
- (bool)clockIsStable;
- (id)currentDSPConfiguration;
- (id)deviceName;
- (id)dspDatabase;
- (id)findDSPConfigurationForCurrentState;
- (id /* block */)getZeroTimestampBlock;
- (id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 deviceDSPDatabase:(id)arg3 plugin:(id)arg4;
- (unsigned int)inputSafetyOffset;
- (bool)isHidden;
- (id)manufacturerName;
- (id)modelName;
- (id)modelUID;
- (unsigned int)outputSafetyOffset;
- (void)removeInputStream:(id)arg1;
- (void)removeOutputStream:(id)arg1;
- (bool)requestConfigurationChangeForDevice:(id)arg1 withBlock:(id /* block */)arg2;
- (double)samplingRate;
- (id)samplingRates;
- (void)setCurrentDSPConfiguration:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setSamplingRate:(double)arg1;
- (int)startIOForClient:(unsigned int)arg1;
- (int)stopIOForClient:(unsigned int)arg1;
- (unsigned int)timestampPeriod;
- (unsigned int)transportType;
- (id)underlyingDevice;
- (bool)underlyingDeviceHasAllProperties:(id)arg1;
- (bool)updateDeviceDSPConfiguration;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;

@end
