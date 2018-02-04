/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLPipelayerInternalSegment : NSObject {
    unsigned long long  _cumulativeHeadlinesUsedCount;
    <NFLPipelayerDelegate> * _delegate;
    NSObject<NFLPipeSegment> * _pipeSegment;
    unsigned long long  _pipeSegmentType;
}

@property (nonatomic) unsigned long long cumulativeHeadlinesUsedCount;
@property (nonatomic) <NFLPipelayerDelegate> *delegate;
@property (nonatomic, retain) NSObject<NFLPipeSegment> *pipeSegment;
@property (nonatomic) unsigned long long pipeSegmentType;

- (void).cxx_destruct;
- (unsigned long long)cumulativeHeadlinesUsedCount;
- (id)delegate;
- (id)description;
- (id)pipeSegment;
- (unsigned long long)pipeSegmentType;
- (void)setCumulativeHeadlinesUsedCount:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPipeSegment:(id)arg1;
- (void)setPipeSegmentType:(unsigned long long)arg1;

@end
