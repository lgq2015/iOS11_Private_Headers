/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFBufferedQueue : NSObject {
    unsigned int  _currentSize;
    double  _maximumLatency;
    unsigned int  _maximumSize;
    NSMutableArray * _queue;
    double  _timeOfLastFlush;
}

@property (nonatomic) double maximumLatency;
@property (nonatomic) unsigned int maximumSize;
@property (nonatomic, readonly) unsigned int size;

- (bool)_flush;
- (bool)addItem:(id)arg1;
- (void)dealloc;
- (bool)flush;
- (bool)flushIfNecessary;
- (bool)handleItems:(id)arg1;
- (id)init;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (bool)isEmpty;
- (double)maximumLatency;
- (unsigned int)maximumSize;
- (void)removeAllObjects;
- (void)setMaximumLatency:(double)arg1;
- (void)setMaximumSize:(unsigned int)arg1;
- (unsigned int)size;
- (unsigned long long)sizeForItem:(id)arg1;

@end