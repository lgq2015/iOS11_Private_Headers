/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraMetricsLogEvent : HMDLogEvent {
    HMDAccessory * _accessory;
    bool  _isLocal;
    HMDCameraSessionID * _sessionID;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly) bool isLocal;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;

- (void).cxx_destruct;
- (id)accessory;
- (id)initWithMetricUUID:(id)arg1 sessionID:(id)arg2 cameraAccessory:(id)arg3 isLocal:(bool)arg4;
- (bool)isLocal;
- (id)sessionID;

@end
