/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMutableSectionedCollection : MPSectionedCollection

- (void)_initializeAsEmptySectionedCollection;
- (void)appendItem:(id)arg1;
- (void)appendItems:(id)arg1;
- (void)appendSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSectionFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeAllObjects;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)removeSectionAtIndex:(long long)arg1;
- (void)replaceObjectAtIndexPath:(id)arg1 withObject:(id)arg2;

@end
