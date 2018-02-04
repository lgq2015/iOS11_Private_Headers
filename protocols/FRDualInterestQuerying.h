/* made by EzioChiu.
 */

@protocol FRDualInterestQuerying

@required

+ (NSPredicate *)predicateForIdentifiersWithPrefix:(NSString *)arg1;
+ (NSPredicate *)predicateForIdentifiersWithPrefixes:(NSArray *)arg1 afterDate:(NSDate *)arg2;

- (void)enumerateIndentifierDualCountsWithFilter:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 10: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, unsigned long long, unsigned long long, bool*, void*
- (void)enumerateIndentifierDualCountsWithPrefix:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, unsigned long long, unsigned long long, bool*, void*

@end
