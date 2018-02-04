/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChunkMap : NSObject {
    unsigned long long  mChunkMapCount;
    unsigned long long  mChunkStyle;
    unsigned long long * mSeriesMap;
    unsigned long long * mValuesMap;
}

@property (nonatomic, readonly) unsigned long long count;

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithChart:(id)arg1 chunkStyle:(unsigned long long)arg2;
- (bool)p_canAddChunkForSeries:(id)arg1 valueIndex:(long long)arg2;
- (void)p_setupCacheForElementsInSeriesWithModel:(id)arg1;
- (void)p_setupCacheForElementsInSetsWithModel:(id)arg1;
- (void)p_setupCacheForSeriesWithModel:(id)arg1;
- (void)p_setupCacheForSetsWithModel:(id)arg1;
- (unsigned long long)seriesIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)valueIndexAtIndex:(unsigned long long)arg1;

@end
