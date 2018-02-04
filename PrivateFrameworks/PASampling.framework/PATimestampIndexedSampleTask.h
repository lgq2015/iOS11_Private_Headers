/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PATimestampIndexedSampleTask : NSObject {
    unsigned long long  _lastTimestampIndex;
    PASampleTaskData * _sampleTask;
}

@property unsigned long long lastTimestampIndex;
@property (readonly) PASampleTaskData *sampleTask;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (unsigned long long)lastTimestampIndex;
- (id)sampleTask;
- (void)setLastTimestampIndex:(unsigned long long)arg1;

@end
