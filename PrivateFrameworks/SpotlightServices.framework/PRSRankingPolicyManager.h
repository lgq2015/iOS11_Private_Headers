/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingPolicyManager : NSObject

+ (id)getSharedRankingPolicyManager;
+ (double)termFrequencyComponentFor:(id)arg1 matchingString:(id)arg2 weighted:(bool)arg3;
+ (double)termFrequencyComponentForWord:(id)arg1 inString:(id)arg2;

- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double*)arg3 qr_prop_query_norm_min_unordered_span:(double*)arg4 qr_query_min_pair_dist_in_title:(double*)arg5 prefix_match_norm_count:(double*)arg6;
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double*)arg3 qr_prop_query_norm_min_unordered_span:(double*)arg4 qr_query_min_pair_dist_in_title:(double*)arg5 prefix_match_norm_count:(double*)arg6 ordered_first_term_position:(double*)arg7 prefixMatch:(bool)arg8 queryBreakDown:(id)arg9 isVirtualField:(bool)arg10 locale:(id)arg11;
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double*)arg3 qr_prop_query_norm_min_unordered_span:(double*)arg4 qr_query_min_pair_dist_in_title:(double*)arg5 prefix_match_norm_count:(double*)arg6 prefixMatch:(bool)arg7;
- (id)cookSQFOnClientWithServerProbabilities:(id)arg1 qiCEPValues:(id)arg2 localResultOrder:(id)arg3 poorTextMatchCategories:(id)arg4 minimumBagCEP:(double)arg5 cook_sqf_topdown:(bool)arg6 cook_sqf_fallback_qi_cep:(bool)arg7;
- (id)cosineComponentsUsingWordMatches:(id)arg1 withField:(id)arg2 withCorpusCount:(double)arg3 prefixVersion:(bool)arg4;
- (bool)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long*)arg5;
- (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long*)arg6 minimumDistancePair:(long long*)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9;

@end
