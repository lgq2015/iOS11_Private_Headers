/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPMarginAdjustRep : TSDRep {
    bool  _bottomKnobEncroachingFooter;
    bool  _hideKnobs;
    double  _minBottomMargin;
    double  _minTopMargin;
    bool  _topKnobEncroachingHeader;
}

@property (nonatomic) bool hideKnobs;
@property (nonatomic) double minBottomMargin;
@property (nonatomic) double minTopMargin;
@property (nonatomic, readonly) TPPaginatedPageInfo *pageInfo;

- (bool)directlyManagesLayerContent;
- (bool)hideKnobs;
- (void)hideKnobsEncroachingHeader:(double)arg1 orFooter:(double)arg2;
- (double)minBottomMargin;
- (double)minTopMargin;
- (id)pageInfo;
- (void)setHideKnobs:(bool)arg1;
- (void)setMinBottomMargin:(double)arg1;
- (void)setMinTopMargin:(double)arg1;

@end
