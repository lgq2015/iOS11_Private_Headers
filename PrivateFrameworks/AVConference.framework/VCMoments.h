/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMoments : NSObject <VCMomentsMessenger> {
    unsigned int  _capabilities;
    int  _currentActiveRequestsCount;
    id  _delegate;
    bool  _isClientRegistered;
    bool  _lastRequest;
    unsigned char  _mode;
    VCMomentsHistory * _momentsHistory;
    VideoAttributes * _remoteScreenAttributes;
    NSMutableSet * _requests;
    unsigned int  _streamToken;
    id  _transportDelegate;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
}

@property (nonatomic) unsigned int capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isClientRegistered;
@property (nonatomic, retain) VideoAttributes *remoteScreenAttributes;
@property (readonly) Class superclass;

+ (unsigned long long)deviceFreeDiskSpace;
+ (bool)deviceHasSufficientFreeSpace;

- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList { }*)arg1 timestamp:(unsigned int)arg2;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList { }*)arg1 timestamp:(unsigned int)arg2;
- (unsigned int)capabilities;
- (void)cleanupActiveRequests;
- (void)dealloc;
- (void)deregisterClient;
- (unsigned long long)directorySize:(id)arg1;
- (void)getInitialRemoteScreenAttributes:(id)arg1;
- (void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithStreamToken:(unsigned int)arg1 delegate:(id)arg2;
- (bool)isClientRegistered;
- (bool)isHistorySupported;
- (id)momentsDelegate;
- (void)notifyFinishWithRequest:(id)arg1 didSucceed:(bool)arg2 fileSize:(long long)arg3;
- (void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(bool)arg2;
- (void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(bool)arg2 fileSize:(long long)arg3;
- (bool)processClientRequest:(id)arg1 error:(id*)arg2;
- (void)processRemoteLivePhotoRequest:(id)arg1;
- (void)processRemotePhotoRequest:(id)arg1;
- (void)processRemoteVideoRequest:(id)arg1;
- (void)processRequest:(id)arg1;
- (void)registerClient;
- (id)remoteScreenAttributes;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setMomentsDelegate:(id)arg1;
- (void)setRemoteScreenAttributes:(id)arg1;
- (void)setTransportDelegate:(id)arg1;
- (id)transportDelegate;
- (void)updateRemoteScreenAttributes:(id)arg1;
- (void)updateVCMomentsMode;
- (bool)validateNumberOfRequestsWithError:(id*)arg1;

@end
