/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRemoteQueueSinkNode : BWSinkNode {
    bool  _attachPanoramaMetadata;
    struct opaqueCMFormatDescription { } * _cachedVideoFormatDescription;
    bool  _cameraSupportsFlash;
    int  _clientVideoRetainedBufferCount;
    <BWRemoteQueueSinkNodeDelegate> * _delegate;
    bool  _disableFlatDictionaryVDOMetadata;
    bool  _discardsLateSampleBuffers;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPTS;
    struct OpaqueFigFlatDictionaryKeySpec { } * _makerNoteKeySpec;
    bool  _mediaTypeIsVideo;
    struct OpaqueFigSimpleMutex { } * _peerTerminationMutex;
    bool  _pixelBufferAttachmentModificationAllowed;
    int  _receiverPID;
    struct remoteQueueSenderOpaque { } * _remoteQueueSender;
    bool  _removeCameraIntrinsicMatrixAttachment;
    bool  _sentDiagnosticMetadata;
    struct shmemPoolOpaque { } * _sharedMemoryPool;
    struct __CFAllocator { } * _sharedMemoryPoolCFAllocator;
    NSDictionary * _videoColorInfoOverride;
}

@property (nonatomic) <BWRemoteQueueSinkNodeDelegate> *delegate;

+ (void)initialize;

- (void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_handlePeerTerminated;
- (bool)attachPanoramaMetadata;
- (bool)cameraSupportsFlash;
- (int)clientVideoRetainedBufferCount;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didReachEndOfDataForInput:(id)arg1;
- (bool)discardsLateSampleBuffers;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1 receiverPID:(int)arg2;
- (id)nodeSubType;
- (bool)pixelBufferAttachmentModificationAllowed;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (bool)removeCameraIntrinsicMatrixAttachment;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachPanoramaMetadata:(bool)arg1;
- (void)setCameraSupportsFlash:(bool)arg1;
- (void)setClientVideoRetainedBufferCount:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscardsLateSampleBuffers:(bool)arg1;
- (void)setPixelBufferAttachmentModificationAllowed:(bool)arg1;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(bool)arg1;
- (void)setVideoColorInfoOverride:(id)arg1;
- (id)videoColorInfoOverride;

@end
