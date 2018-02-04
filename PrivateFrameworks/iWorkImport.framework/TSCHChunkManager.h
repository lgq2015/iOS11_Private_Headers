/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChunkManager : NSObject {
    TSCHChunkMap * mCachedChunkMap;
    TSUWeakReference * mWeakChart;
}

+ (id)p_allChartDeliveryStylesLocalized:(bool)arg1;
+ (id)p_allLocalizedChartDeliveryStyles;
+ (id)p_allNonLocalizedChartDeliveryStyles;
+ (id)p_makeAllChartDeliveryStylesLocalized:(bool)arg1;

- (void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned long long)arg2 finalTexture:(bool)arg3 seriesStart:(long long*)arg4 seriesCount:(long long*)arg5;
- (void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned long long)arg2 chunkIndex:(unsigned long long)arg3 finalTexture:(bool)arg4 valueStart:(long long*)arg5 valueCount:(long long*)arg6;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (unsigned long long)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned long long)arg1;
- (unsigned long long)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned long long)arg1;
- (unsigned long long)chunkCountForChartDeliveryStyle:(unsigned long long)arg1;
- (id)containedTextForChartDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2 displayName:(id)arg3;
- (void)dealloc;
- (bool)hasBackgroundLayerForPieChart;
- (id)initWithChartInfo:(id)arg1;
- (bool)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1;
- (bool)lastChunkForSeriesIndex:(unsigned long long)arg1 currentChunk:(unsigned long long)arg2 chunkStyle:(unsigned long long)arg3;
- (id)p_backgroundStringForChartWithTitle:(id)arg1;
- (id)p_cachedChunkMap;
- (id)p_chart;
- (unsigned long long)p_chunkCountForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 chunkMap:(id)arg3;
- (id)p_chunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 forceUpdateCache:(bool)arg3;
- (id)p_createChunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2;
- (bool)p_hasBackgroundFillForChart:(id)arg1;
- (bool)p_hasBackgroundLayerForPieChartForChart:(id)arg1;
- (bool)p_isMultiDataForChart:(id)arg1;
- (bool)p_isPieForChart:(id)arg1;
- (bool)p_legendOnForChart:(id)arg1;
- (id)p_nameForMultiDataSetCategory:(unsigned long long)arg1 chart:(id)arg2;
- (id)p_seriesNameForSeriesAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2 chart:(id)arg3;
- (bool)p_titleOnForChart:(id)arg1;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2;
- (void)updateCache:(unsigned long long)arg1;

@end
