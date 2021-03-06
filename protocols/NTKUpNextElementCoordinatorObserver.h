/* made by EzioChiu.
 */

@protocol NTKUpNextElementCoordinatorObserver <NSObject>

@required

- (NSSet *)disabledDataSources;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didInsertElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didMoveElement:(NTKUpNextElement *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didReloadElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didRemoveElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (bool)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 isElementAtIndexPathVisible:(NSIndexPath *)arg2;
- (void)elementCoordinator:(void *)arg1 performBatchUpdateBlock:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: NTKUpNextElementCoordinator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (unsigned long long)state;

@end
