/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAAggregatedTask : NSObject {
    PASampleAggregator * _aggregator;
    NSMutableDictionary * _binaryImages;
}

@property (readonly) PASampleTimeSeriesDataStore *sampleStore;

- (void).cxx_destruct;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)aggregator;
- (long long)compare:(id)arg1;
- (id)copyDescriptionForDisplayAddress:(unsigned long long)arg1 withSymbolicationAddress:(unsigned long long)arg2 inSymbolHandle:(id)arg3 displayFrameAddress:(bool)arg4 isKernel:(bool)arg5;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 andUpdateIfLower:(bool)arg2 isKernel:(bool)arg3;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 isKernel:(bool)arg2;
- (void)fillGaps;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (void)printBinaryImagesToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (id)sampleStore;
- (void)updateBinaryLocationIfLower:(id)arg1 isKernel:(bool)arg2;

@end