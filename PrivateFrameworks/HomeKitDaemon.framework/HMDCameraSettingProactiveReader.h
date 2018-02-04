/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraSettingProactiveReaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _logID;
    HMFMessage * _message;
    NSSet * _streamControlMessageHandlers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSettingProactiveReaderDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) HMFMessage *message;
@property (nonatomic, readonly) NSSet *streamControlMessageHandlers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (id)accessory;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 message:(id)arg5 streamMessageHandlers:(id)arg6 logID:(id)arg7;
- (id)logID;
- (id)logIdentifier;
- (id)message;
- (void)readSetting;
- (id)streamControlMessageHandlers;
- (id)workQueue;

@end
