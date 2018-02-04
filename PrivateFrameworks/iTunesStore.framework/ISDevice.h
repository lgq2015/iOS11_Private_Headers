/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDevice : NSObject <ISSingleton> {
    long long  _biometricStyle;
    unsigned long long  _daemonLaunchCount;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _guid;
    double  _lastFreeSpaceRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *deviceName;
@property (readonly) NSString *guid;
@property (readonly) NSString *hardwareName;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly) NSString *systemName;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (int)_deviceClass;
- (bool)checkCapabilities:(id)arg1 withMismatches:(id*)arg2;
- (id)copyProtocolConditionalContext;
- (void)dealloc;
- (long long)deviceBiometricStyle;
- (id)deviceName;
- (id)guid;
- (id)hardwareName;
- (id)init;
- (bool)releasePowerAssertion:(id)arg1;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)resetLocationAndPrivacy;
- (id)serialNumber;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (id)systemName;
- (bool)takePowerAssertion:(id)arg1;

@end
