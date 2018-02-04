/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMomentsHistoryBuffer : NSObject {
    int  _bufferLength;
    id  _delegate;
    unsigned int  _lastTimestamp;
    NSMutableDictionary * _sampleMap;
    NSMutableArray * _timestampQueue;
}

- (void)dealloc;
- (id)delegate;
- (void)dequeueOneFrame;
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer { }*)arg1 timestamp:(unsigned int)arg2;
- (void)flushBuffer;
- (struct opaqueCMSampleBuffer { }*)getClosestSampleForTimestamp:(unsigned int)arg1;
- (int)getCount;
- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer { }*)arg1 timestamp:(unsigned int)arg2;

@end
