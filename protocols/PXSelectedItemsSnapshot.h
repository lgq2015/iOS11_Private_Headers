/* made by EzioChiu.
 */

@protocol PXSelectedItemsSnapshot

@required

- (id)containsItemReference:(id)arg1;
- (long long)count;
- (id)itemForItemReference:(id)arg1;
- (id)itemReferenceAtIndex:(long long)arg1;

@end
