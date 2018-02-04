/* made by EzioChiu.
 */

@protocol TSDMutableContainerInfo <TSDContainerInfo>

@required

- (void)addChildInfo:(NSObject<TSDInfo> *)arg1;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 above:(NSObject<TSDInfo> *)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 below:(NSObject<TSDInfo> *)arg2;
- (void)moveChildren:(NSArray *)arg1 toIndexes:(NSIndexSet *)arg2;
- (void)removeChildInfo:(NSObject<TSDInfo> *)arg1;
- (void)replaceChildInfo:(NSObject<TSDInfo> *)arg1 with:(NSObject<TSDInfo> *)arg2;
- (void)setChildInfos:(NSArray *)arg1;

@end
