/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPlatform : NSObject {
    <NUDevice> * _cpuDevice;
    NSArray * _devices;
    <NUDevice> * _discreteDevice;
    bool  _hasExtendedColorDisplay;
    bool  _hasHeadlessGPU;
    <NUDevice> * _headlessDevice;
    <NUDevice> * _integratedDevice;
    <NUDevice> * _mainDevice;
    NSString * _name;
    bool  _supportsAutomaticGraphicsSwitching;
}

@property (nonatomic, retain) <NUDevice> *cpuDevice;
@property (nonatomic, readonly) bool defaultSupportsLiveVideoRendering;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) <NUDevice> *discreteDevice;
@property (nonatomic, readonly) NSArray *displays;
@property (nonatomic) bool hasExtendedColorDisplay;
@property (nonatomic) bool hasHeadlessGPU;
@property (nonatomic, retain) <NUDevice> *headlessDevice;
@property (nonatomic, retain) <NUDevice> *integratedDevice;
@property (nonatomic, readonly) <NUDevice> *mainDevice;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool supportsAutomaticGraphicsSwitching;
@property (nonatomic, readonly) bool supportsLiveVideoRendering;

+ (id)currentPlatform;

- (void).cxx_destruct;
- (void)clearCaches;
- (id)cpuDevice;
- (id)debugDescription;
- (id)defaultDevice;
- (bool)defaultSupportsLiveVideoRendering;
- (id)description;
- (id)devices;
- (id)discreteDevice;
- (id)displays;
- (bool)hasExtendedColorDisplay;
- (bool)hasHeadlessGPU;
- (id)headlessDevice;
- (id)integratedDevice;
- (id)mainDevice;
- (id)name;
- (void)setCpuDevice:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setDiscreteDevice:(id)arg1;
- (void)setHasExtendedColorDisplay:(bool)arg1;
- (void)setHasHeadlessGPU:(bool)arg1;
- (void)setHeadlessDevice:(id)arg1;
- (void)setIntegratedDevice:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSupportsAutomaticGraphicsSwitching:(bool)arg1;
- (bool)supportsAutomaticGraphicsSwitching;
- (bool)supportsLiveVideoRendering;

@end
