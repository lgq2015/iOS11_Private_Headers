/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent> {
    NSNumber * _referenceTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *referenceTimestamp;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (void)addIDSConnectionSetup:(id)arg1;
- (void)addIDSSession:(id)arg1;
- (void)addInitialConfiguration:(id)arg1;
- (void)addReconfiguration:(id)arg1;
- (void)addStreamMessaging:(id)arg1;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(bool)arg3;
- (id)metricForAWD;
- (id)referenceTimestamp;
- (void)setReferenceTimestamp:(id)arg1;
- (unsigned int)timeSinceReference:(id)arg1;

@end
