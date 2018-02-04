/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSwipeSelectionManager : NSObject {
    id  __pausingChangesToken;
    PUPhotoSelectionManager * __restorePhotoSelectionManager;
    long long  __selectionMode;
    NSIndexPath * __startingIndexPath;
    <PUSwipeSelectionManagerDataSource> * _datasource;
    <PUSwipeSelectionManagerDelegate> * _delegate;
    struct NSMutableDictionary { Class x1; } * _oldIndexesPaths;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenTouchLocation;
    PXUIAutoScroller * _selectionAutoScroller;
}

@property (setter=_setPausingChangesToken:, nonatomic, retain) id _pausingChangesToken;
@property (setter=_setRestorePhotoSelectionManager:, nonatomic, retain) PUPhotoSelectionManager *_restorePhotoSelectionManager;
@property (setter=_setSelectionMode:, nonatomic) long long _selectionMode;
@property (setter=_setStartingIndexPath:, nonatomic, copy) NSIndexPath *_startingIndexPath;
@property (nonatomic) <PUSwipeSelectionManagerDataSource> *datasource;
@property (nonatomic) <PUSwipeSelectionManagerDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } screenTouchLocation;
@property (nonatomic, retain) PXUIAutoScroller *selectionAutoScroller;

- (void).cxx_destruct;
- (struct NSMutableDictionary { Class x1; }*)_indexesPathsRangeForIndexPath:(id)arg1;
- (id)_pausingChangesToken;
- (id)_restorePhotoSelectionManager;
- (long long)_selectionMode;
- (long long)_selectionModeForRestoringStateOfIndexPath:(id)arg1;
- (void)_setPausingChangesToken:(id)arg1;
- (void)_setRestorePhotoSelectionManager:(id)arg1;
- (void)_setSelectionMode:(long long)arg1;
- (void)_setStartingIndexPath:(id)arg1;
- (id)_startingIndexPath;
- (void)beginSelectionFromIndexPath:(id)arg1;
- (id)datasource;
- (void)dealloc;
- (id)delegate;
- (void)endSelection;
- (id)init;
- (id)initWithSelectionMode:(long long)arg1 photoSelectionManager:(id)arg2;
- (struct CGPoint { double x1; double x2; })screenTouchLocation;
- (id)selectionAutoScroller;
- (void)setDatasource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScreenTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectionAutoScroller:(id)arg1;
- (void)updateSelectionWithCurrentIndexPath:(id)arg1 leftClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;

@end
