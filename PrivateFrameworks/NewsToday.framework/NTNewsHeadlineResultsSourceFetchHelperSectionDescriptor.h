/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNewsHeadlineResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor> {
    <NTSectionQueueDescriptor> * _parentSectionQueueDescriptor;
    <NTSectionDescriptor> * _sectionDescriptor;
}

@property (nonatomic, readonly, copy) NSString *backgroundGradientColor;
@property (nonatomic, readonly) unsigned long long cachedResultCutoffTime;
@property (nonatomic, readonly, copy) NSString *compactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *discoverMoreVideosSubtitle;
@property (nonatomic, readonly, copy) NSString *discoverMoreVideosTitle;
@property (nonatomic, readonly, copy) NSURL *discoverMoreVideosURL;
@property (nonatomic, readonly) bool displaysAsVideoPlaylist;
@property (nonatomic, readonly) unsigned long long fallbackOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) int leadingCellPromotionPolicy;
@property (nonatomic, readonly) unsigned long long maximumStoriesAllocation;
@property (nonatomic, readonly) unsigned long long minimumStoriesAllocation;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameColor;
@property (nonatomic, readonly, copy) <NTSectionQueueDescriptor> *parentSectionQueueDescriptor;
@property (nonatomic, readonly, copy) NSString *personalizationFeatureID;
@property (nonatomic, readonly) int readArticlesFilterMethod;
@property (nonatomic, readonly, copy) NSString *referralBarName;
@property (nonatomic, readonly, copy) <NTSectionDescriptor> *sectionDescriptor;
@property (nonatomic, readonly) int seenArticlesFilterMethod;
@property (nonatomic, readonly) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long supplementalInterSectionFilterOptions;
@property (nonatomic, readonly) long long supplementalIntraSectionFilterOptions;
@property (nonatomic, readonly) bool videoPlaysMutedByDefault;

- (void).cxx_destruct;
- (id)backgroundGradientColor;
- (unsigned long long)cachedResultCutoffTime;
- (id)compactName;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)discoverMoreVideosSubtitle;
- (id)discoverMoreVideosTitle;
- (id)discoverMoreVideosURL;
- (bool)displaysAsVideoPlaylist;
- (id)extractResultsFromCatchUpOperation:(id)arg1;
- (unsigned long long)fallbackOrder;
- (id)identifier;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithSectionDescriptor:(id)arg1 parentSectionQueueDescriptor:(id)arg2;
- (int)leadingCellPromotionPolicy;
- (unsigned long long)maximumStoriesAllocation;
- (unsigned long long)minimumStoriesAllocation;
- (id)name;
- (id)nameColor;
- (id)parentSectionQueueDescriptor;
- (id)personalizationFeatureID;
- (int)readArticlesFilterMethod;
- (id)referralBarName;
- (id)sectionDescriptor;
- (int)seenArticlesFilterMethod;
- (long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
- (long long)supplementalInterSectionFilterOptions;
- (long long)supplementalIntraSectionFilterOptions;
- (bool)videoPlaysMutedByDefault;

@end
