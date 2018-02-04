/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl, VCAudioIOSink, VCAudioIOSource> {
    NSMutableArray * _allClients;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _format;
    VCAudioRelay * _relay;
    unsigned int  _relayIOType;
    unsigned int  _relayType;
    unsigned int  _samplesPerFrame;
    NSMutableArray * _sinkClients;
    struct AudioEventQueue_t { } * _sinkEventQueue;
    struct opaqueVCAudioBufferList { } * _sourceBuffer;
    NSMutableArray * _sourceClients;
    struct AudioEventQueue_t { } * _sourceEventQueue;
    NSMutableArray * _startingIOClients;
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initializeStateStrings;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceRemoteFacing;
+ (id)sharedInstanceSafeViewClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;

- (void)_cleanupDeadClients;
- (bool)addClient:(id)arg1;
- (void)addStartingClient:(id)arg1 controllerFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2;
- (void)computeFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 newClient:(id)arg2;
- (void)dealloc;
- (void)flushEventQueue:(struct AudioEventQueue_t { }*)arg1;
- (id)initWithRelayType:(unsigned int)arg1 relayIOType:(unsigned int)arg2;
- (void)loadRelay;
- (id)newRelayIOWithCompletionHandler:(id /* block */)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t { }*)arg1 clientList:(id)arg2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (bool)removeClient:(id)arg1;
- (void)startClient:(id)arg1;
- (bool)startRelayIO:(id)arg1;
- (bool)stateIdleWithNegotiatedFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)statePrepareWithNegotiatedFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)stateRunningWithNegotiatedFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)stateStartingWithNegotiatedFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (void)stopClient:(id)arg1;
- (void)unloadRelay;
- (void)updateClient:(id)arg1;
- (bool)updateStateWithClient:(id)arg1;

@end
