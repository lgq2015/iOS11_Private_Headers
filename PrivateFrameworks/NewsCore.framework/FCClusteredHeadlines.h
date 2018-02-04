/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCClusteredHeadlines : NSObject {
    NSDictionary * _d_headlinesByNonWhitelistedTopicID;
    NSArray * _discardedOrphanedHeadlines;
    NSDictionary * _headlinesByTopicID;
    NSArray * _orphanedHeadlines;
}

@property (nonatomic, readonly, copy) NSArray *d_allHeadlines;
@property (nonatomic, copy) NSDictionary *d_headlinesByNonWhitelistedTopicID;
@property (nonatomic, copy) NSArray *discardedOrphanedHeadlines;
@property (nonatomic, copy) NSDictionary *headlinesByTopicID;
@property (nonatomic, copy) NSArray *orphanedHeadlines;

- (void).cxx_destruct;
- (id)d_JSONRepresentationWithTagController:(id)arg1 subscriptionList:(id)arg2;
- (id)d_allHeadlines;
- (id)d_headlinesByNonWhitelistedTopicID;
- (void)d_sanityCheckAgainstInputHeadlines:(id)arg1;
- (id)discardedOrphanedHeadlines;
- (void)filterClustersToTopicIDs:(id)arg1;
- (id)headlinesByTopicID;
- (id)orphanedHeadlines;
- (void)setD_headlinesByNonWhitelistedTopicID:(id)arg1;
- (void)setDiscardedOrphanedHeadlines:(id)arg1;
- (void)setHeadlinesByTopicID:(id)arg1;
- (void)setOrphanedHeadlines:(id)arg1;

@end
