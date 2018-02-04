/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher {
    ASAsset * _suAsset;
}

+ (id)matcherDocumentationFromAsset:(id)arg1;
+ (id)matcherForInstalledDocumentationFromAsset:(id)arg1;

- (id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2;
- (id)_queryPredicateForProperties:(id)arg1;
- (id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1;
- (void)dealloc;
- (id)initWithSoftwareUpdateAsset:(id)arg1;
- (id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2;

@end
