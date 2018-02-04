/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface _HMDCameraStreamTrackerAssertion : HMFObject {
    HMDCameraSessionID * _streamSessionID;
    HMDCameraStreamTracker * _streamTracker;
}

@property (nonatomic, readonly) HMDCameraSessionID *streamSessionID;
@property (nonatomic, readonly) HMDCameraStreamTracker *streamTracker;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;
- (id)streamSessionID;
- (id)streamTracker;

@end
