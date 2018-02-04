/* made by EzioChiu.
 */

@protocol GQHContext <NSObject>

@required

- (void)addScriptTagToHtml:(GQHXML *)arg1 state:(GQSDocument *)arg2;
- (void)createMaskedImageWithId:(struct __CFString { }*)arg1 geometry:(GQDAffineGeometry *)arg2 imageBinary:(GQDImageBinary *)arg3 cropGeometry:(GQDAffineGeometry *)arg4 maskingShapePath:(GQDPath *)arg5 alphaMaskBezier:(struct CGPath { }*)arg6 graphicStyle:(GQDSStyle *)arg7 isFloating:(bool)arg8 state:(GQHState *)arg9;
- (void)createShapeWithId:(struct __CFString { }*)arg1 path:(GQDPath *)arg2 geometry:(GQDAffineGeometry *)arg3 graphicStyle:(GQDSStyle *)arg4 isFloating:(bool)arg5 state:(GQHState *)arg6;
- (void)prepareContext:(GQHState *)arg1;
- (void)setBezierPath:(char *)arg1 state:(GQHState *)arg2;
- (void)setContextOpacity:(float)arg1 state:(GQHState *)arg2;
- (void)setFillColor:(GQDColor *)arg1 state:(GQHState *)arg2;
- (void)setGradient:(GQDRGradient *)arg1 state:(GQHState *)arg2;
- (void)setImageFill:(struct __CFURL { }*)arg1 srcSize:(struct CGSize { double x1; double x2; })arg2 mode:(int)arg3 state:(GQHState *)arg4;
- (void)setStrokeColor:(GQDColor *)arg1 width:(float)arg2 state:(GQHState *)arg3;
- (void)teardownContext:(GQHState *)arg1;
- (void)translate:(struct CGSize { double x1; double x2; })arg1 state:(GQHState *)arg2;

@end
