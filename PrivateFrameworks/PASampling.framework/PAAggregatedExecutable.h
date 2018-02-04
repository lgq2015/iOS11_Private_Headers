/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAAggregatedExecutable : PAAggregatedTask {
    unsigned int  _count;
    unsigned long long  _firstTimestampIndex;
    unsigned long long  _lastTimestampIndex;
    NSUUID * _mainBinaryUuid;
    NSString * _name;
    NSMutableSet * _rootFrames;
}

@property (readonly) PAExecutableAggregator *aggregator;
@property unsigned int count;
@property unsigned long long firstTimestampIndex;
@property unsigned long long lastTimestampIndex;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) NSString *name;
@property (retain) NSMutableSet *rootFrames;

- (void).cxx_destruct;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)aggregator;
- (long long)compare:(id)arg1;
- (id)copyDescriptionForFrame:(id)arg1;
- (unsigned int)count;
- (unsigned long long)firstTimestampIndex;
- (unsigned long long)hash;
- (id)initForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastTimestampIndex;
- (id)mainBinaryUuid;
- (id)name;
- (void)printBinaryImagesToOutputStream:(id)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printStacksToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (id)rootFrames;
- (void)setCount:(unsigned int)arg1;
- (void)setFirstTimestampIndex:(unsigned long long)arg1;
- (void)setLastTimestampIndex:(unsigned long long)arg1;
- (void)setRootFrames:(id)arg1;

@end
