/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportQueue : NSObject {
    unsigned long long  _index;
    NSMutableArray * _items;
}

- (void).cxx_destruct;
- (id)completedItems;
- (id)currentItem;
- (id)description;
- (void)didCompleteItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (bool)isCompleted;
- (id)items;
- (id)itemsNotCompleted;
- (void)removeItem:(id)arg1;
- (void)setItems:(id)arg1;

@end
