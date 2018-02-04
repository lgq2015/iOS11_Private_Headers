/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKEffectsGridView : CMKGLView {
    bool  __atomicBlackAndWhite;
    bool  __fetchingGridFilters;
    NSDictionary * __gridFilters;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelBufferPoolSize;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    bool  _square;
}

@property (getter=_isAtomicBlackAndWhite, setter=_setAtomicBlackAndWhite:) bool _atomicBlackAndWhite;
@property (setter=_setFetchingGridFilters:) bool _fetchingGridFilters;
@property (setter=_setGridFilters:, retain) NSDictionary *_gridFilters;
@property (getter=isBlackAndWhite) bool blackAndWhite;
@property (getter=isSquare) bool square;

- (void).cxx_destruct;
- (unsigned long long)_cellCount;
- (unsigned long long)_cellsPerRow;
- (struct __CVBuffer { }*)_createPixelBufferForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_fetchingGridFilters;
- (unsigned long long)_filterIndexForGridIndex:(unsigned long long)arg1;
- (id)_gridFilters;
- (unsigned long long)_gridIndexForFilterIndex:(unsigned long long)arg1;
- (bool)_isAtomicBlackAndWhite;
- (void)_renderGridFilters:(id)arg1 withInputImage:(id)arg2 ciContext:(id)arg3 mirrorRendering:(bool)arg4;
- (void)_scalePixelBuffer:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;
- (void)_setAtomicBlackAndWhite:(bool)arg1;
- (void)_setFetchingGridFilters:(bool)arg1;
- (void)_setGridFilters:(id)arg1;
- (void)_setupGridFiltersIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_squareCropFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePixelBufferPoolForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (unsigned long long)filterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)filterIndices;
- (bool)isBlackAndWhite;
- (bool)isSquare;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFilterIndex:(unsigned long long)arg1;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (void)setBlackAndWhite:(bool)arg1;
- (void)setSquare:(bool)arg1;

@end
