/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSectionConfigSectionDescriptor : NSObject <NTSectionDescriptor> {
    NSString * _backgroundGradientColor;
    unsigned long long  _cachedResultCutoffTime;
    NSString * _compactName;
    NSString * _discoverMoreVideosSubtitle;
    NSString * _discoverMoreVideosTitle;
    NSURL * _discoverMoreVideosURL;
    bool  _displaysAsVideoPlaylist;
    unsigned long long  _fallbackOrder;
    NSObject<NTSectionFetchDescriptor> * _fetchDescriptor;
    NSString * _identifier;
    int  _leadingCellPromotionPolicy;
    unsigned long long  _maximumStoriesAllocation;
    unsigned long long  _minimumStoriesAllocation;
    NSString * _name;
    NSString * _nameColor;
    NSString * _personalizationFeatureID;
    int  _readArticlesFilterMethod;
    NSString * _referralBarName;
    int  _seenArticlesFilterMethod;
    long long  _seenArticlesMinimumTimeSinceFirstSeenToFilter;
    long long  _supplementalInterSectionFilterOptions;
    long long  _supplementalIntraSectionFilterOptions;
    bool  _videoPlaysMutedByDefault;
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
@property (nonatomic, copy) NSObject<NTSectionFetchDescriptor> *fetchDescriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) int leadingCellPromotionPolicy;
@property (nonatomic, readonly) unsigned long long maximumStoriesAllocation;
@property (nonatomic, readonly) unsigned long long minimumStoriesAllocation;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameColor;
@property (nonatomic, readonly, copy) NSString *personalizationFeatureID;
@property (nonatomic, readonly) int readArticlesFilterMethod;
@property (nonatomic, readonly, copy) NSString *referralBarName;
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
- (id)fetchDescriptor;
- (id)identifier;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithSectionConfig:(id)arg1 appConfiguration:(id)arg2 todayData:(id)arg3 supplementalFeedFilterOptions:(long long)arg4;
- (int)leadingCellPromotionPolicy;
- (unsigned long long)maximumStoriesAllocation;
- (unsigned long long)minimumStoriesAllocation;
- (id)name;
- (id)nameColor;
- (id)personalizationFeatureID;
- (int)readArticlesFilterMethod;
- (id)referralBarName;
- (int)seenArticlesFilterMethod;
- (long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
- (void)setFetchDescriptor:(id)arg1;
- (long long)supplementalInterSectionFilterOptions;
- (long long)supplementalIntraSectionFilterOptions;
- (bool)videoPlaysMutedByDefault;

@end
