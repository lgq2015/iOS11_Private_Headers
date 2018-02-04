/* made by EzioChiu.
 */

@protocol MiroEditorClipCollection <NSObject>

@required

- (MiroEditorClipCell *)cellForClip:(id <MiroClip>)arg1;
- (<MiroEditorClipCollectionDataSource> *)dataSource;
- (<MiroEditorClipCollectionDelegate> *)delegate;
- (NSIndexPath *)initialIndexPath;
- (void)setDataSource:(id <MiroEditorClipCollectionDataSource>)arg1;
- (void)setDelegate:(id <MiroEditorClipCollectionDelegate>)arg1;
- (void)setInitialIndexPath:(NSIndexPath *)arg1;
- (void)snapToIndexPath:(NSIndexPath *)arg1 animated:(bool)arg2;

@end
