/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesStore : NSObject <PXPlacesGeotaggedItemDataSource> {
    unsigned long long  _capacityPerNode;
    <PXPlacesGeotaggedItemDataSourceDelegate> * _delegate;
    NSObject<OS_dispatch_semaphore> * _itemChangeSemaphore;
    NSMutableSet * _itemsToAdd;
    NSMutableArray * _itemsToAddArray;
    NSMutableSet * _itemsToRemove;
    long long  _numberOfItems;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    struct _PXQuadTreeStoreNode { struct _PXQuadTreeStoreNode {} *x1; struct _PXQuadTreeStoreNode {} *x2; struct _PXQuadTreeStoreNode {} *x3; struct _PXQuadTreeStoreNode {} *x4; unsigned long long x5; unsigned long long x6; struct { struct { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; id x8; struct { /* ? */ } x9; } * _rootNode;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    int  _updateCount;
}

@property (readonly) NSSet *allItems;
@property (readonly) unsigned long long capacityPerNode;
@property (readonly, copy) NSString *debugDescription;
@property <PXPlacesGeotaggedItemDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableSet *itemsToAdd;
@property (retain) NSMutableArray *itemsToAddArray;
@property (retain) NSMutableSet *itemsToRemove;
@property (nonatomic, readonly) long long numberOfItems;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (readonly) Class superclass;

- (void)_commitChanges;
- (id)_findItemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addItemsFromArray:(id)arg1;
- (id)allItems;
- (void)beginUpdates;
- (unsigned long long)capacityPerNode;
- (void)dealloc;
- (id)delegate;
- (void)endUpdates;
- (id)findItemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCapacityPerNode:(unsigned long long)arg1;
- (id)itemsToAdd;
- (id)itemsToAddArray;
- (id)itemsToRemove;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })minimalEncompassingMapRect;
- (long long)numberOfItems;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)removeItem:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)runNodeDebugCollector:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemsToAdd:(id)arg1;
- (void)setItemsToAddArray:(id)arg1;
- (void)setItemsToRemove:(id)arg1;
- (void)setRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
