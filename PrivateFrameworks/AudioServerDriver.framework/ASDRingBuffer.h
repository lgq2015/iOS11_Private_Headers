/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDRingBuffer : NSObject <ASDRingBuffer> {
    bool  _allocated;
    long long  _frameCapacity;
    ASDStreamFormat * _readFormat;
    struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer> > { 
        struct __compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer> > { 
            struct AudioRingBuffer {} *__first_; 
        } __ptr_; 
    }  _ringBuffer;
    ASDStreamFormat * _writeFormat;
}

@property (getter=isAllocated, nonatomic) bool allocated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long frameCapacity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ readBlock;
@property (nonatomic, retain) ASDStreamFormat *readFormat;
@property (nonatomic, readonly) id /* block */ readWithZerosBlock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ writeBlock;
@property (nonatomic, retain) ASDStreamFormat *writeFormat;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allocate;
- (void)clear;
- (void)deallocate;
- (long long)frameCapacity;
- (id)initWithFrameCapacity:(long long)arg1;
- (id)initWithFrameCapacity:(long long)arg1 writeFormat:(id)arg2 readFormat:(id)arg3;
- (bool)isAllocated;
- (id /* block */)readBlock;
- (id)readFormat;
- (id /* block */)readWithZerosBlock;
- (void)setAllocated:(bool)arg1;
- (void)setFrameCapacity:(long long)arg1;
- (void)setReadFormat:(id)arg1;
- (void)setWriteFormat:(id)arg1;
- (id /* block */)writeBlock;
- (id)writeFormat;

@end
