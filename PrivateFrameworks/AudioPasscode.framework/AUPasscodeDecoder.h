/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface AUPasscodeDecoder : AUAudioUnit {
    unsigned int  _actualChannelCount;
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
    }  _apcDecoderConfig;
    AUPasscodeCodecConfiguration * _codecConfig;
    id /* block */  _dataHandler;
    unsigned int  _desiredChannelCount;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableData * _incomingPayload;
    struct BufferedInputBus { 
        AUAudioUnitBus *bus; 
        unsigned int maxFrames; 
        AVAudioPCMBuffer *pcmBuffer; 
        struct AudioBufferList {} *originalAudioBufferList; 
        struct AudioBufferList {} *mutableAudioBufferList; 
    }  _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    struct unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase> > { 
        struct __compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase> > { 
            struct APCDecoderBase {} *__first_; 
        } __ptr_; 
    }  _kernel;
    struct vector<DecodedDataMessage, std::__1::allocator<DecodedDataMessage> > { 
        struct DecodedDataMessage {} *__begin_; 
        struct DecodedDataMessage {} *__end_; 
        struct __compressed_pair<DecodedDataMessage *, std::__1::allocator<DecodedDataMessage> > { 
            struct DecodedDataMessage {} *__first_; 
        } __end_cap_; 
    }  _messagePool;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger> > { 
        struct __compressed_pair<RealtimeMessenger *, std::__1::default_delete<RealtimeMessenger> > { 
            struct RealtimeMessenger {} *__first_; 
        } __ptr_; 
    }  _rtMessenger;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { 
            char *__first_; 
        } __end_cap_; 
    }  _rxDataBuffer;
}

@property (nonatomic, retain) AUPasscodeCodecConfiguration *codecConfig;
@property (nonatomic, copy) id /* block */ dataHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })getAUDesc;
+ (void)registerAU;
+ (id)supportedDecoders;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)codecConfig;
- (id /* block */)dataHandler;
- (void)deallocateRenderResources;
- (id)dispatchQueue;
- (void)handleDecodedData:(void*)arg1 ofLength:(int)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)setCodecConfig:(id)arg1;
- (void)setDataHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;

@end
