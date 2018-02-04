/* made by EzioChiu.
 */

@protocol _MFSearchResultsConsumer <NSObject>

@required

- (void)_addResults:(NSArray *)arg1 ofType:(unsigned long long)arg2;
- (void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(NSMutableSet *)arg2 toResults:(NSMutableArray *)arg3;
- (bool)_didFinishSearchForType:(unsigned long long)arg1;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (bool)_isResetting;
- (bool)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;

@end
