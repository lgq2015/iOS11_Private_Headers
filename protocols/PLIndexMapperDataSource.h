/* made by EzioChiu.
 */

@protocol PLIndexMapperDataSource <NSObject>

@required

- (NSIndexSet *)filteredIndexes;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;

@end
