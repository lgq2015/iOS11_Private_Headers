/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingItemCollection : NSObject {
    NSArray * _arrayOfRankingItems;
    NSString * _bundleIdentifier;
    unsigned long long  _countOfVisibleResults;
}

@property (retain) NSArray *arrayOfRankingItems;
@property (retain) NSString *bundleIdentifier;
@property unsigned long long countOfVisibleResults;

- (void).cxx_destruct;
- (id)arrayOfRankingItems;
- (id)bundleIdentifier;
- (unsigned long long)countOfVisibleResults;
- (id)description;
- (void)setArrayOfRankingItems:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCountOfVisibleResults:(unsigned long long)arg1;

@end
