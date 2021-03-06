/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchCategoricalHistogram : NSObject <NSSecureCoding> {
    NSMutableDictionary * _categoryToCategoryId;
    ATXHistogramData * _histogramData;
    NSMutableDictionary * _lastDates;
    double  _launchThreshold;
    unsigned short  _maxCategoryCount;
    unsigned short  _maxCategoryId;
    double  _maxSSIDCount;
    NSDictionary * _parameters;
    NSString * _prevCategory;
    unsigned short  _prevCategoryId;
    long long  _pruningMethod;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

@property (nonatomic, readonly) unsigned short categoryCount;
@property (nonatomic, readonly) unsigned short maxCategoryCount;
@property (nonatomic, readonly) long long pruningMethod;

+ (id)stringForPruningMethod:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)_categoryIdforCategory:(id)arg1;
- (unsigned short)_eventIdforBundleId:(id)arg1;
- (void)_garbageCollectCategoryIds;
- (void)_reduceCategoryCountTo:(unsigned short)arg1;
- (void)_setMaxCategoryCount:(unsigned short)arg1 pruningMethod:(long long)arg2;
- (bool)_tryGetCategoryIdforCategory:(id)arg1 createIfMissing:(bool)arg2 categoryIdOut:(unsigned short*)arg3;
- (bool)_tryGetEventIdforBundleId:(id)arg1 createIfMissing:(bool)arg2 eventIdOut:(unsigned short*)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 weight:(float)arg4;
- (bool)bundleHasBeenLaunched:(id)arg1;
- (unsigned short)categoryCount;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistogram:(id)arg1 categoryToCategoryId:(id)arg2 maxCategoryId:(unsigned short)arg3 maxCategoryCount:(unsigned short)arg4 lastDates:(id)arg5 pruningMethod:(long long)arg6;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 maxCategoryCount:(unsigned short)arg2 pruningMethod:(long long)arg3;
- (id)lastDate;
- (double)launchPopularityWithBundleId:(id)arg1 category:(id)arg2;
- (unsigned short)maxCategoryCount;
- (double)overallLaunchPopularityForBundleId:(id)arg1;
- (double)overallLaunchPopularityForBundleId:(id)arg1 category:(id)arg2;
- (double)overallLaunchPopularityForCategory:(id)arg1;
- (long long)pruningMethod;
- (double)ratio:(double)arg1 over:(double)arg2;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 category:(id)arg2;
- (int)removeHistoryForAllBundleIds:(id)arg1;
- (bool)removeHistoryForBundleId:(id)arg1;
- (bool)removeHistoryForCategory:(id)arg1;
- (void)removeMappingForCategory:(id)arg1;
- (void)resetData;
- (void)swapWithCoder:(id)arg1;
- (double)totalLaunches;
- (double)totalLaunchesForCategory:(id)arg1;
- (void)verifyDataIntegrity;

@end
