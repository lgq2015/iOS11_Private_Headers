/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMyArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    <FCHeadlineClusterOrdering> * _headlineClusterOrderer;
    <FCHeadlineClustering> * _headlineClusterer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCHeadlineClusterOrdering> *headlineClusterOrderer;
@property (nonatomic, retain) <FCHeadlineClustering> *headlineClusterer;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic, readonly) bool requiresForYouCatchUpOperation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canEmitGroupsWithType:(long long)arg1;
- (bool)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2;
- (id)groupEmitterIdentifier;
- (id)headlineClusterOrderer;
- (id)headlineClusterer;
- (id)initWithHeadlineClusterer:(id)arg1 headlineClusterOrderer:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)requiresForYouCatchUpOperation;
- (void)setHeadlineClusterOrderer:(id)arg1;
- (void)setHeadlineClusterer:(id)arg1;
- (bool)supportsPagination;
- (bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
