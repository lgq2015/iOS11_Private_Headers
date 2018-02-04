/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface _WBSSearchFoundationFeedbackGenerator : NSObject <_CompletionListRankingObserverFeedbackGenerator> {
    NSString * _currentSectionBundleIdentifier;
    NSMutableArray * _currentSectionResultRankingFeedbackObjects;
    SFRankingFeedback * _rankingFeedback;
    NSDate * _rankingStartDate;
    NSMutableArray * _sectionRankingFeedbackObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_CompletionListRankingObserverFeedbackGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SFRankingFeedback *rankingFeedback;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commitPreviousSectionIfNecessary;
- (void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3;
- (void)didBeginRanking;
- (void)didBeginSectionWithBundleIdentifier:(id)arg1;
- (void)didEndRanking;
- (id)init;
- (id)rankingFeedback;
- (void)removeAllSectionsAndItems;

@end
