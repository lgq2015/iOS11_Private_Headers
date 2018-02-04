/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKEffectsFullsizeView : CMKGLView {
    unsigned long long  _filterIndex;
    CIFilter * _selectedFilter;
    unsigned long long  _selectedFilterIndex;
}

@property unsigned long long filterIndex;

- (void).cxx_destruct;
- (void)_layoutGLLayer;
- (void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (id)_updateSelectedFilter;
- (unsigned long long)filterIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (void)setFilterIndex:(unsigned long long)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;

@end
