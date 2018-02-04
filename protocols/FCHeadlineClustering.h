/* made by EzioChiu.
 */

@protocol FCHeadlineClustering <NSObject>

@required

- (FCClusteredHeadlines *)clusterHeadlinesByTopic:(NSArray *)arg1 subscribedTags:(FCSubscribedTags *)arg2 personalizer:(id <FCFeedPersonalizing>)arg3 rules:(FCHeadlineClusteringRules *)arg4;

@end
