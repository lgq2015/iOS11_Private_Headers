/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLBatch : NSObject {
    NFLBatchContext * _batchContext;
    double  _batchHeight;
    NSMutableArray * _layoutInfos;
}

@property (nonatomic, copy) NFLBatchContext *batchContext;
@property (nonatomic) double batchHeight;
@property (nonatomic, retain) NSMutableArray *layoutInfos;

- (void).cxx_destruct;
- (void)addLayoutInfo:(id)arg1;
- (void)addLayoutInfos:(id)arg1;
- (id)batchContext;
- (double)batchHeight;
- (id)init;
- (id)layoutInfos;
- (void)setBatchContext:(id)arg1;
- (void)setBatchHeight:(double)arg1;
- (void)setLayoutInfos:(id)arg1;

@end
