/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKAggregateSearchTargetProvider : NSObject <TSKSearchTargetProvider> {
    NSArray * _searchTargetProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *searchTargetProviders;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithSearchTargetProviders:(id)arg1;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (void)p_enumerateTargetProvidersFromTargetIndex:(unsigned long long)arg1 direction:(unsigned long long)arg2 action:(id /* block */)arg3;
- (unsigned long long)p_firstTargetIndexForProvider:(id)arg1;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (id)searchTargetProviders;
- (void)setSearchTargetProviders:(id)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(id /* block */)arg2;

@end
