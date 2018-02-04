/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface AUPasscodeEncoder : AUAudioUnit {
    struct map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > > { 
        struct __tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _apcEncoderConfig;
    id /* block */  _assetEndedAndSilencedHandler;
    long long  _assetLength;
    long long  _assetSampleCount;
    NSDictionary * _carrierInfo;
    AUPasscodeCodecConfiguration * _codecConfig;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage> > { 
        struct __compressed_pair<EOFReachedMessage *, std::__1::default_delete<EOFReachedMessage> > { 
            struct EOFReachedMessage {} *__first_; 
        } __ptr_; 
    }  _eofMessage;
    struct BufferedInputBus { 
        AUAudioUnitBus *bus; 
        unsigned int maxFrames; 
        AVAudioPCMBuffer *pcmBuffer; 
        struct AudioBufferList {} *originalAudioBufferList; 
        struct AudioBufferList {} *mutableAudioBufferList; 
    }  _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    struct unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase> > { 
        struct __compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase> > { 
            struct APCEncoderBase {} *__first_; 
        } __ptr_; 
    }  _kernel;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    bool  _outputIsSilenced;
    NSData * _payload;
    struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger> > { 
        struct __compressed_pair<RealtimeMessenger *, std::__1::default_delete<RealtimeMessenger> > { 
            struct RealtimeMessenger {} *__first_; 
        } __ptr_; 
    }  _rtMessenger;
    bool  _silenceOutputOnNextAssetEnding;
}

@property (nonatomic, copy) id /* block */ assetEndedAndSilencedHandler;
@property (nonatomic) long long assetLength;
@property (nonatomic, retain) NSDictionary *carrierInfo;
@property (nonatomic, retain) AUPasscodeCodecConfiguration *codecConfig;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic) bool silenceOutputOnNextAssetEnding;

+ (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })getAUDesc;
+ (void)registerAU;
+ (id)supportedEncoders;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id /* block */)assetEndedAndSilencedHandler;
- (long long)assetLength;
- (bool)canProcessInPlace;
- (id)carrierInfo;
- (id)codecConfig;
- (void)dealloc;
- (void)deallocateRenderResources;
- (id)dispatchQueue;
- (void)handleEOFReachedForAsset;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (id)payload;
- (void)reset;
- (void)setAssetEndedAndSilencedHandler:(id /* block */)arg1;
- (void)setAssetLength:(long long)arg1;
- (void)setCarrierInfo:(id)arg1;
- (void)setCodecConfig:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSilenceOutputOnNextAssetEnding:(bool)arg1;
- (bool)silenceOutputOnNextAssetEnding;

@end
