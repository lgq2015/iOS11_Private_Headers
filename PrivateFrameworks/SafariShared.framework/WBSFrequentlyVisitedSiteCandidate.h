/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFrequentlyVisitedSiteCandidate : NSObject {
    WBSHistoryItem * _historyItem;
    float  _score;
}

@property (nonatomic, readonly) WBSHistoryItem *historyItem;
@property (nonatomic, readonly) float score;

- (void).cxx_destruct;
- (id)historyItem;
- (id)initWithHistoryItem:(id)arg1 score:(float)arg2;
- (float)score;

@end
