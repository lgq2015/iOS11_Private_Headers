/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDClockDevice : ASDObject {
    id /* block */  _beginIOOperationBlock;
    id /* block */  _beginIOOperationBlockUnretained;
    bool  _canChangeDeviceName;
    unsigned int  _clockAlgorithm;
    unsigned int  _clockDomain;
    bool  _clockIsStable;
    <ASDDeviceConfigurationChangeDelegate> * _configurationChangeDelegate;
    NSObject<OS_dispatch_queue> * _controlQueue;
    NSMutableArray * _controls;
    NSString * _deviceName;
    NSString * _deviceUID;
    id /* block */  _endIOOperationBlock;
    id /* block */  _endIOOperationBlockUnretained;
    id /* block */  _getZeroTimestampBlock;
    id /* block */  _getZeroTimestampBlockUnretained;
    bool  _hidden;
    unsigned int  _inputLatency;
    long long  _ioReferenceCount;
    NSObject<OS_dispatch_queue> * _ioReferenceQueue;
    bool  _isAlive;
    bool  _isRunning;
    NSString * _manufacturerName;
    NSString * _modelName;
    NSString * _modelUID;
    unsigned int  _outputLatency;
    NSObject<OS_dispatch_queue> * _sampleRateQueue;
    double  _samplingRate;
    NSArray * _samplingRates;
    unsigned int  _timestampPeriod;
    unsigned int  _transportType;
    NSObject<OS_dispatch_semaphore> * _wakeSemaphore;
}

@property (nonatomic, copy) id /* block */ beginIOOperationBlock;
@property (nonatomic, readonly) id /* block */*beginIOOperationBlockUnretainedPtr;
@property (nonatomic) bool canChangeDeviceName;
@property (nonatomic) unsigned int clockAlgorithm;
@property (nonatomic) unsigned int clockDomain;
@property (nonatomic) bool clockIsStable;
@property (nonatomic) <ASDDeviceConfigurationChangeDelegate> *configurationChangeDelegate;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *deviceUID;
@property (nonatomic, copy) id /* block */ endIOOperationBlock;
@property (nonatomic, readonly) id /* block */*endIOOperationBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ getZeroTimestampBlock;
@property (nonatomic, readonly) id /* block */*getZeroTimestampBlockUnretainedPtr;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) unsigned int inputLatency;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *ioReferenceQueue;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *modelUID;
@property (nonatomic) unsigned int outputLatency;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) double samplingRate;
@property (nonatomic, copy) NSArray *samplingRates;
@property (nonatomic) unsigned int timestampPeriod;
@property (nonatomic) unsigned int transportType;

- (void).cxx_destruct;
- (void)_updateSafetyOffsets:(double)arg1;
- (void)_updateTimestampPeriod:(double)arg1;
- (int)addClient:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg1;
- (void)addControl:(id)arg1;
- (id /* block */)beginIOOperationBlock;
- (id /* block */*)beginIOOperationBlockUnretainedPtr;
- (bool)canChangeDeviceName;
- (bool)changeDeviceName:(id)arg1;
- (bool)changeSamplingRate:(double)arg1;
- (unsigned int)clockAlgorithm;
- (unsigned int)clockDomain;
- (bool)clockIsStable;
- (id)configurationChangeDelegate;
- (id)controls;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (void)dealloc;
- (id)deviceName;
- (id)deviceUID;
- (id /* block */)endIOOperationBlock;
- (id /* block */*)endIOOperationBlockUnretainedPtr;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (id /* block */)getZeroTimestampBlock;
- (id /* block */*)getZeroTimestampBlockUnretainedPtr;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithDeviceUID:(id)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;
- (unsigned int)inputLatency;
- (id)ioReferenceQueue;
- (bool)isHidden;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isRunning;
- (id)manufacturerName;
- (id)modelName;
- (id)modelUID;
- (unsigned int)objectClass;
- (unsigned int)outputLatency;
- (void)performConfigurationChange:(void*)arg1;
- (int)performStartIO;
- (int)performStopIO;
- (int)removeClient:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg1;
- (void)removeControl:(id)arg1;
- (void)requestConfigurationChange:(id /* block */)arg1;
- (double)samplingRate;
- (id)samplingRates;
- (void)setBeginIOOperationBlock:(id /* block */)arg1;
- (void)setCanChangeDeviceName:(bool)arg1;
- (void)setClockAlgorithm:(unsigned int)arg1;
- (void)setClockDomain:(unsigned int)arg1;
- (void)setClockIsStable:(bool)arg1;
- (void)setConfigurationChangeDelegate:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEndIOOperationBlock:(id /* block */)arg1;
- (void)setGetZeroTimestampBlock:(id /* block */)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInputLatency:(unsigned int)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelUID:(id)arg1;
- (void)setOutputLatency:(unsigned int)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setSamplingRate:(double)arg1;
- (void)setSamplingRates:(id)arg1;
- (void)setTimestampPeriod:(unsigned int)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)startIOForClient:(unsigned int)arg1;
- (int)stopIOForClient:(unsigned int)arg1;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (unsigned int)timestampPeriod;
- (unsigned int)transportType;
- (void)updateTimestampPeriod;

@end
