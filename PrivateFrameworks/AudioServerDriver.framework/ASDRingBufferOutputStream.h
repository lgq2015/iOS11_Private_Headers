/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDRingBufferOutputStream : ASDStream {
    struct unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList> > { 
        struct __compressed_pair<ASDBufferList *, std::__1::default_delete<ASDBufferList> > { 
            struct ASDBufferList {} *__first_; 
        } __ptr_; 
    }  _bufferList;
    <ASDManagedRingBuffer> * _ringBuffer;
}

@property (nonatomic, retain) <ASDManagedRingBuffer> *ringBuffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2;
- (id)ringBuffer;
- (void)setPhysicalFormat:(id)arg1;
- (void)setRingBuffer:(id)arg1;
- (void)startStream;
- (void)stopStream;
- (id /* block */)writeMixBlock;

@end
