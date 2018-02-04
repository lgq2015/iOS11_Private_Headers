/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDevice : NSObject {
    NSString * _buildVersion;
    NSString * _deviceName;
    GKEventEmitter<GKLockStatusObserver> * _emitter;
    bool  _gameKitAvailable;
    NSString * _gameKitVersion;
    NSString * _osVersion;
    NSString * _udid;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) GKEventEmitter<GKLockStatusObserver> *emitter;
@property (getter=isGameKitAvailable, nonatomic, readonly) bool gameKitAvailable;
@property (nonatomic, readonly) NSString *gameKitVersion;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *udid;

+ (id)currentDevice;

- (void)_initPlatform;
- (id)_platformUDID;
- (void)addLockStatusObserver:(id)arg1;
- (void)beginObservingKeyBagStatusWithCallback:(int (*)arg1;
- (id)buildVersion;
- (id)buildVersionHeader;
- (void)dealloc;
- (id)deviceName;
- (id)emitter;
- (id)gameKitVersion;
- (id)init;
- (bool)isDevelopmentDevice;
- (bool)isFocusDevice;
- (bool)isGameKitAvailable;
- (bool)isProductType:(unsigned int)arg1;
- (id)osVersion;
- (id)processNameHeader;
- (id)protocolVersionHeader;
- (void)removeLockStatusObserver:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEmitter:(id)arg1;
- (void)stopObservingKeyBagStatus;
- (id)storeUserAgent;
- (id)udid;
- (id)userAgent;
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;

@end
