/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedTilingLayout : PXTilingLayout {
    PXCollectionTileLayoutTemplate * __tileLayoutTemplate;
    <PXMemoriesFeedTilingLayoutDelegate> * _delegate;
    struct { 
        bool contentsRectForItemAtIndexPathForAspectRatio; 
        bool titleFontNameForItemAtIndexPath; 
    }  _delegateRespondsTo;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _highlightedMemoryIndexPath;
    PXSectionedLayoutSnapshot * _layoutSnapshot;
    PXIndexPathSet * _selectedMemoryIndexPaths;
    PXMemoriesSpec * _spec;
}

@property (nonatomic, readonly) PXCollectionTileLayoutTemplate *_tileLayoutTemplate;
@property (nonatomic, readonly) PXMemoriesFeedDataSource *dataSource;
@property (nonatomic) <PXMemoriesFeedTilingLayoutDelegate> *delegate;
@property (nonatomic) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } highlightedMemoryIndexPath;
@property (nonatomic, readonly) PXSectionedLayoutSnapshot *layoutSnapshot;
@property (nonatomic, retain) PXIndexPathSet *selectedMemoryIndexPaths;
@property (nonatomic, retain) PXMemoriesSpec *spec;

- (void).cxx_destruct;
- (void)_addTileWithKind:(long long)arg1 entryIndex:(unsigned long long)arg2 memoryIndex:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 forAspectRatio:(double)arg2;
- (void)_enumerateTilesInLayoutItem:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_invalidateSelectionTilesWithTag:(id)arg1;
- (long long)_itemKindForTileKind:(long long)arg1;
- (id)_tileLayoutTemplate;
- (id)_titleFontNameForMemoryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)_zPositionForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)dataSource;
- (long long)dataSourceIdentifierForTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)delegate;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)getGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg4;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })highlightedMemoryIndexPath;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForMemoryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)indexPathsForMemoriesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithSpec:(id)arg1 layoutSnapshot:(id)arg2;
- (id)layoutSnapshot;
- (void)prepareLayout;
- (id)selectedMemoryIndexPaths;
- (void)setDelegate:(id)arg1;
- (void)setHighlightedMemoryIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setLayoutSnapshot:(id)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectedMemoryIndexPaths:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })tileIdentifierAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 withTileKind:(long long)arg2;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;

@end
