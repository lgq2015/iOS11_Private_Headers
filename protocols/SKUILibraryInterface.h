/* made by EzioChiu.
 */

@protocol SKUILibraryInterface <NSObject>

@required

- (void)enumerateStatesForLibraryItems:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKUILibraryItem *, SKUILibraryItemState *, bool*, void*
- (SKUILibraryItemState *)stateForLibraryItem:(SKUILibraryItem *)arg1;

@optional

- (NSSet *)exposedPlatformItemKinds;
- (bool)performActionForLibraryItem:(SKUILibraryItem *)arg1;
- (void)removeMediaItemsForLibraryItems:(NSArray *)arg1;
- (SKUILibraryItemState *)stateForLibraryItemAfterLibraryIntegration:(SKUILibraryItem *)arg1;

@end