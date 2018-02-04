/* made by EzioChiu.
 */

@protocol MFDeviceDriver

@required

- (int)activateTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (int)alphaBlend:(MFDeviceContext *)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(MFBitmap *)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_sourceConstantOpacity:(unsigned char)arg11 in_useSourceAlphaChannel:(bool)arg12 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg13 in_colour:(unsigned int)arg14;
- (int)angleArc:(MFDeviceContext *)arg1 x:(int)arg2 y:(int)arg3 radius:(unsigned int)arg4 startAngle:(double)arg5 sweepAngle:(double)arg6;
- (int)arc:(MFDeviceContext *)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)arcTo:(MFDeviceContext *)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)bezier:(MFDeviceContext *)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7 x4:(int)arg8 y4:(int)arg9;
- (int)bezierTo:(MFDeviceContext *)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7;
- (int)bitBlt:(MFDeviceContext *)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(MFBitmap *)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_rop:(unsigned int)arg9 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg10 in_colour:(unsigned int)arg11;
- (int)chord:(MFDeviceContext *)arg1 leftRect:(int)arg2 topRect:(int)arg3 rightRect:(int)arg4 bottomRect:(int)arg5 xStartArc:(int)arg6 yStartArc:(int)arg7 xEndArc:(int)arg8 yEndArc:(int)arg9;
- (MFBitmap *)createBitmap:(MFDeviceContext *)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;
- (MFBitmap *)createDIBitmap:(MFDeviceContext *)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;
- (MFBitmap *)createDIBitmap:(MFDeviceContext *)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;
- (MFFont *)createFont:(int)arg1;
- (MFFont *)createFont:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(NSString *)arg15;
- (MFFont *)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(NSString *)arg15 elfFullName:(NSString *)arg16 elfStyle:(NSString *)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;
- (MFBrush *)createHatchBrush:(OITSUColor *)arg1 in_hatchstyle:(int)arg2;
- (MFBrush *)createNullBrush;
- (MFPath *)createPath;
- (MFBrush *)createPatternBrush:(MFBitmap *)arg1 usePaletteForBilevel:(bool)arg2;
- (MFPen *)createPen;
- (MFPen *)createPen:(int)arg1 in_width:(int)arg2 in_colour:(OITSUColor *)arg3 in_userStyleArray:(double*)arg4;
- (MFRegion *)createRegionWithPath:(MFPath *)arg1;
- (MFRegion *)createRegionWithRects:(NSArray *)arg1 in_dc:(MFDeviceContext *)arg2;
- (MFBrush *)createSolidBrush:(OITSUColor *)arg1;
- (int)ellipse:(MFDeviceContext *)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;
- (int)excludeClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)extTextOut:(MFDeviceContext *)arg1 px:(int*)arg2 py:(int*)arg3 in_text:(id)arg4 options:(int)arg5 left:(int)arg6 top:(int)arg7 right:(int)arg8 bottom:(int)arg9 spacingValues:(int*)arg10 numValues:(int)arg11;
- (int)intersectClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)lineTo:(MFDeviceContext *)arg1 x:(double)arg2 y:(double)arg3;
- (int)maskBlt:(MFDeviceContext *)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(MFBitmap *)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_maskImage:(MFBitmap *)arg9 in_xMask:(int)arg10 in_yMask:(int)arg11 in_rop:(unsigned int)arg12 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg13 in_colour:(unsigned int)arg14;
- (int)patBlt:(MFDeviceContext *)arg1 in_x:(int)arg2 in_y:(int)arg3 in_width:(int)arg4 in_height:(int)arg5 in_rop:(unsigned int)arg6;
- (int)pie:(MFDeviceContext *)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)plgBlt:(MFDeviceContext *)arg1 in_destinationParallelogram:(struct CGPoint { double x1; double x2; }*)arg2 in_sourceImage:(MFBitmap *)arg3 in_xSrc:(int)arg4 in_ySrc:(int)arg5 in_widthSrc:(int)arg6 in_heightSrc:(int)arg7 in_maskImage:(MFBitmap *)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg11 in_colour:(unsigned int)arg12;
- (int)polyPolygon:(MFDeviceContext *)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_polyCounts:(int*)arg3 in_count:(int)arg4;
- (int)polyPolyline:(MFDeviceContext *)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_polyCounts:(int*)arg3 in_count:(int)arg4;
- (int)polygon:(MFDeviceContext *)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_count:(int)arg3;
- (int)polyline:(MFDeviceContext *)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_count:(int)arg3;
- (int)rectangle:(MFDeviceContext *)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;
- (int)roundRect:(MFDeviceContext *)arg1 left:(int)arg2 top:(int)arg3 right:(int)arg4 bottom:(int)arg5 rx:(double)arg6 ry:(double)arg7;
- (int)setMetaRgn;
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;
- (int)stretchBlt:(MFDeviceContext *)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(MFBitmap *)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg12 in_colour:(unsigned int)arg13;
- (int)textOut:(MFDeviceContext *)arg1 px:(int*)arg2 py:(int*)arg3 in_text:(NSString *)arg4;

@end
