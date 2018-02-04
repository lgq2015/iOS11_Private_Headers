/* made by EzioChiu.
 */

@protocol NTKUpNextElementDataSourceDelegate <NSObject>

@required

- (void)addElements:(NSArray *)arg1 toSection:(unsigned long long)arg2;
- (NSObject<OS_dispatch_queue> *)elementOperationQueue;
- (bool)hasElementWithId:(NSString *)arg1 inSection:(unsigned long long)arg2;
- (void)invalidateElements;
- (bool)isElementWithIdVisible:(NSString *)arg1;
- (void)refreshElement:(NTKUpNextElement *)arg1;
- (void)refreshElement:(NTKUpNextElement *)arg1 inSection:(unsigned long long)arg2;
- (void)reloadElement:(NTKUpNextElement *)arg1;
- (void)reloadElement:(NTKUpNextElement *)arg1 inSection:(unsigned long long)arg2;
- (void)reloadElement:(NTKUpNextElement *)arg1 withElementId:(NSString *)arg2 inSection:(unsigned long long)arg3;
- (void)removeElements:(NSArray *)arg1 fromSection:(unsigned long long)arg2;
- (void)removeElementsWithIds:(NSArray *)arg1;

@end
