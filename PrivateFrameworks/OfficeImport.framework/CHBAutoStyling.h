/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)autoFill;
- (id)autoSeriesBorderStroke;
- (id)autoSeriesFill:(unsigned long long)arg1;
- (id)autoStroke;
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;
- (id)autoTextFill;
- (id)fillWithColorIndex:(unsigned long long)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(bool)arg3;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(id /* block */)arg4;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(bool)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(bool)arg7;
- (id)strokeWithColorIndex:(int)arg1;

@end
