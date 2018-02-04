/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingItemRelativeFeatureContext : NSObject {
    unsigned long long  _absRankFeature;
    id /* block */  _comparator;
    NSPredicate * _predicate;
    unsigned long long  _relRankFeature;
}

@property (nonatomic) unsigned long long absRankFeature;
@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) unsigned long long relRankFeature;

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned long long*)arg2 relRankFeatureOut:(unsigned long long*)arg3;
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1;
+ (id)_relativeContextsForFeatures:(id)arg1;
+ (id /* block */)_resultComparatorForRelativeFeature:(unsigned long long)arg1;
+ (id)relativeContextsForBundle:(id)arg1;
+ (id)relativeContextsForResultSet;

- (void).cxx_destruct;
- (unsigned long long)absRankFeature;
- (id /* block */)comparator;
- (id)initWithFeature:(unsigned long long)arg1;
- (id)predicate;
- (unsigned long long)relRankFeature;
- (void)setAbsRankFeature:(unsigned long long)arg1;
- (void)setComparator:(id /* block */)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRelRankFeature:(unsigned long long)arg1;

@end
