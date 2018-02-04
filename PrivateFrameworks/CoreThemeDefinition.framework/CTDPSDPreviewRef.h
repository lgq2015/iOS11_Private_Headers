/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface CTDPSDPreviewRef : CUIPSDImageRef {
    long long  _columnWidth;
    struct _PSDImageInfo { 
        unsigned int width; 
        unsigned int height; 
        unsigned short mode; 
        unsigned short bitsPerSample; 
        unsigned short samplesPerPixel; 
        int isDrawable; 
    }  _imageInfo;
    long long  _layerCount;
    NSArray * _layerIndexLayout;
    long long  _rowHeight;
    long long  _sliceColumnCount;
    long long  _sliceCount;
    NSArray * _sliceRects;
    long long  _sliceRowCount;
}

- (void)dealloc;
- (void)evaluateSliceGrid;
- (bool)hasGradient;
- (bool)hasRegularSliceGrid;
- (long long)indexOfDrawingLayerType:(long long)arg1;
- (id)initWithPath:(id)arg1;
- (long long)numberOfAlphaChannels;
- (long long)numberOfGradientLayers;
- (long long)sliceColumnCount;
- (long long)sliceRowCount;

@end
