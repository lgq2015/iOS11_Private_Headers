/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {
    struct shared_ptr<md::Anchor> { 
        struct Anchor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _anchor;
    <MDRenderTarget> * _displayLayer;
    bool  _followsTerrain;
    bool  _isUpdating;
    struct Coordinate2D<Degrees, double> { 
        struct Unit<DegreeUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<DegreeUnitDescription, double> { 
            double _value; 
        } longitude; 
    }  _lastCoordinate;
    struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; } * _lastLayoutContext;
    double  _pointsPerMeter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenPointInCanvas;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MDRenderTarget> *displayLayer;
@property (nonatomic) bool followsTerrain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<md::Anchor> { struct Anchor {} *x1; struct __shared_weak_count {} *x2; })_anchorWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)_updateCachedPointWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)anchorWorldPointDidChange:(void*)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (void)destroyAnchor;
- (id)displayLayer;
- (bool)followsTerrain;
- (void)layoutWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (struct CGPoint { double x1; double x2; })pointInLayer:(id)arg1;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (void)setDisplayLayer:(id)arg1;
- (void)setFollowsTerrain:(bool)arg1;
- (void)updateIfNeeded;

@end
