/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDDSPStream : ASDStream {
    struct unique_ptr<applesauce::experimental::sync::LockFreeHashTable<unsigned long long, ASDDSPGraphHelper *, 3>, std::__1::default_delete<applesauce::experimental::sync::LockFreeHashTable<unsigned long long, ASDDSPGraphHelper *, 3> > > { 
        struct __compressed_pair<applesauce::experimental::sync::LockFreeHashTable<unsigned long long, ASDDSPGraphHelper *, 3> *, std::__1::default_delete<applesauce::experimental::sync::LockFreeHashTable<unsigned long long, ASDDSPGraphHelper *, 3> > > { 
            struct LockFreeHashTable<unsigned long long, ASDDSPGraphHelper *, 3> {} *__first_; 
        } __ptr_; 
    }  _clientToGraphMap;
    ASDStreamDSPConfiguration * _currentDSPConfiguration;
    NSUserDefaults * _defaults;
    NSObject<OS_dispatch_queue> * _dspQueue;
    struct list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper> > { 
        struct __list_node_base<ASDDSPGraphHelper, void *> { 
            struct __list_node_base<ASDDSPGraphHelper, void *> {} *__prev_; 
            struct __list_node_base<ASDDSPGraphHelper, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ASDDSPGraphHelper, void *> > > { 
            unsigned long long __first_; 
        } __size_alloc_; 
    }  _graphHelpers;
    bool  _isRunning;
    bool  _keepGraphInitialized;
    long long  _maximumFramesPerIOCycle;
    ASDAudioDevice * _owningDevice;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    struct unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper> > { 
        struct __compressed_pair<ASDDSPStreamHelper *, std::__1::default_delete<ASDDSPStreamHelper> > { 
            struct ASDDSPStreamHelper {} *__first_; 
        } __ptr_; 
    }  _streamHelper;
    NSArray * _underlyingStreams;
}

@property (nonatomic, retain) ASDStreamDSPConfiguration *currentDSPConfiguration;
@property (nonatomic, readonly) ASDDSPGraph *hardwareDSP;
@property (nonatomic) bool keepGraphInitialized;
@property (nonatomic, readonly) long long maximumFramesPerIOCycle;
@property (nonatomic, retain) NSArray *underlyingStreams;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_allocateStreamingResources;
- (void)_allocateStreamingResourcesForGraphHelper:(struct ASDDSPGraphHelper { struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph> > { struct __compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph> > { struct Graph {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<AUProcessingBlock_DSPGraph, std::__1::default_delete<AUProcessingBlock_DSPGraph> > { struct __compressed_pair<AUProcessingBlock_DSPGraph *, std::__1::default_delete<AUProcessingBlock_DSPGraph> > { struct AUProcessingBlock_DSPGraph {} *x_1_2_1; } x_3_1_1; } x3; unsigned long long x4; }*)arg1;
- (void)_deallocateStreamingResources;
- (id)_hardwareDSP;
- (void)_resumeProcessing;
- (void)_suspendProcessing;
- (void)_updateLatency;
- (void)_updateMaximumFramesPerIOCycle;
- (bool)addClientDSP:(id)arg1 forClient:(unsigned int)arg2;
- (bool)addClientDSP:(id)arg1 withKey:(unsigned long long)arg2;
- (bool)addHardwareDSP:(id)arg1;
- (bool)changePhysicalFormat:(id)arg1;
- (id)clientDSPForClient:(unsigned int)arg1;
- (id)currentDSPConfiguration;
- (bool)graphStructureIsValid:(id)arg1 clientID:(unsigned long long)arg2;
- (id)hardwareDSP;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned int)arg3 plugin:(id)arg4;
- (bool)keepGraphInitialized;
- (long long)maximumFramesPerIOCycle;
- (id /* block */)processOutputBlock;
- (id /* block */)readInputBlock;
- (bool)removeClientDSPForClient:(unsigned int)arg1;
- (bool)removeClientDSPwithKey:(unsigned long long)arg1;
- (bool)removeHardwareDSP;
- (void)resumeProcessing;
- (void)setCurrentDSPConfiguration:(id)arg1;
- (void)setKeepGraphInitialized:(bool)arg1;
- (void)setUnderlyingStreams:(id)arg1;
- (void)startStream;
- (void)stopStream;
- (void)suspendProcessing;
- (id)underlyingStreams;
- (void)updateLatency;
- (id /* block */)writeMixBlock;

@end
