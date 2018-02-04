/* made by EzioChiu.
 */

@protocol FCHeadlineClusterOrdering <NSObject>

@required

- (NSOrderedSet *)orderTopicsWithClusteredHeadlines:(void *)arg1 additionalHeadlines:(void *)arg2 subscribedTagIDs:(void *)arg3 scoresByArticleID:(void *)arg4 personalizer:(void *)arg5 tagNameProvider:(void *)arg6 personalizationTreatment:(void *)arg7; // needs 7 arg types, found 12: NSDictionary *, NSArray *, NSSet *, NSDictionary *, <FCFeedPersonalizing> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSString *, id /* block */, NSString *, void*, FCPersonalizationTreatment *

@end