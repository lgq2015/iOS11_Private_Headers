/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLCoverArticlesSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation

+ (unsigned long long)tileInfosUsedCount;
+ (bool)validTileInfoType:(id)arg1;

- (bool)isReliable;
- (id)rankedLayoutRequests;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;

@end
