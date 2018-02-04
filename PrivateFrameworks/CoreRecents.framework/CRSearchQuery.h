/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRSearchQuery : NSObject <NSSecureCoding> {
    id /* block */  _comparator;
    NSArray * _domains;
    unsigned long long  _implicitGroupThreshold;
    unsigned long long  _options;
    NSPredicate * _predicate;
    id /* block */  _weightDecayer;
}

@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, copy) NSArray *domains;
@property (nonatomic) unsigned long long implicitGroupThreshold;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, copy) id /* block */ weightDecayer;

+ (id /* block */)frecencyComparator;
+ (id /* block */)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (id /* block */)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (bool)supportsSecureCoding;

- (id /* block */)comparator;
- (void)dealloc;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)implicitGroupThreshold;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)options;
- (id)predicate;
- (void)setComparator:(id /* block */)arg1;
- (void)setDomains:(id)arg1;
- (void)setImplicitGroupThreshold:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setWeightDecayer:(id /* block */)arg1;
- (id /* block */)weightDecayer;

@end
