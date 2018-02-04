/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapTile : VKTile <NSCopying> {
    struct shared_ptr<md::LabelMapTile> { 
        struct LabelMapTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _labelMapTile;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _localBounds;
    float  _maximumStyleZ;
    bool  _needsRasterization;
    VKRasterTile * _rasterized;
    double  _stateDates;
    /* Warning: unhandled array encoding: '[33@]' */ id  _stateMetas;
    unsigned long long  _states;
    VKTile * _tiles;
}

@property (nonatomic) struct shared_ptr<md::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; } labelMapTile;
@property (nonatomic, readonly) float maximumStyleZ;
@property (nonatomic) bool needsRasterization;
@property (nonatomic, retain) VKRasterTile *rasterized;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned char)arg4 timestamp:(double)arg5;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (struct shared_ptr<md::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; })labelMapTile;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })localBoundsForLayer:(unsigned char)arg1;
- (float)maximumStyleZ;
- (bool)needsRasterization;
- (void)populateDebugNode:(struct shared_ptr<md::DebugTreeNode> { struct DebugTreeNode {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)rasterized;
- (void)setLabelMapTile:(struct shared_ptr<md::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setNeedsRasterization:(bool)arg1;
- (void)setRasterized:(id)arg1;
- (void)setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned char)arg4;
- (id)tileForLayer:(unsigned char)arg1;
- (unsigned long long)tileStateForLayer:(unsigned char)arg1;
- (double)timeTileEnteredStateForLayer:(unsigned char)arg1;
- (void)updateViewDependentStateWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;

@end
