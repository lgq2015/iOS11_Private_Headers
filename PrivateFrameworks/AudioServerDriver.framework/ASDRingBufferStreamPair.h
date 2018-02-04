/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDRingBufferStreamPair : NSObject {
    ASDStream * _inputStream;
    ASDStream * _outputStream;
    <ASDManagedRingBuffer> * _ringBuffer;
    long long  _ringBufferFrameCapacity;
}

@property (nonatomic, readonly) ASDStream *inputStream;
@property (nonatomic, readonly) ASDStream *outputStream;
@property (nonatomic, readonly) <ASDManagedRingBuffer> *ringBuffer;
@property (nonatomic) long long ringBufferFrameCapacity;

- (void).cxx_destruct;
- (id)initWithRingBufferFrameCapacity:(long long)arg1 withPlugin:(id)arg2;
- (id)inputStream;
- (id)outputStream;
- (id)ringBuffer;
- (long long)ringBufferFrameCapacity;
- (void)setRingBufferFrameCapacity:(long long)arg1;

@end
