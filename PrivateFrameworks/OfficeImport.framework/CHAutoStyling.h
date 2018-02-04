/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHAutoStyling : NSObject {
    CHDChart * mChart;
    OADDrawingTheme * mDrawingTheme;
}

+ (id)autoStylingWithChart:(id)arg1 drawingTheme:(id)arg2;

- (void)dealloc;
- (int)defaultMarkerStyleForSeriesIndex:(unsigned long long)arg1;
- (id)drawingTheme;
- (id)initWithChart:(id)arg1 drawingTheme:(id)arg2;
- (void)replaceStrokeAndFillInEmptyMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2;

@end
