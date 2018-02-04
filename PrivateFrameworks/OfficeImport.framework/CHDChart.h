/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDChart : OADGraphic <OADDrawableContainer> {
    bool  mAutoTitleDeleted;
    OADGraphicProperties * mBackWallGraphicProperties;
    OADGraphicProperties * mChartAreaGraphicProperties;
    int  mChartDirection;
    CHDDefaultTextProperties * mDefaultTextProperties;
    bool  mDirectionChanged;
    int  mDisplayBlankCellsAs;
    NSMutableArray * mDrawables;
    EDWorkbook * mExternalData;
    OADGraphicProperties * mFloorGraphicProperties;
    bool  mHasSharedXValues;
    bool  mHasVisibleSeriesNames;
    CHDLegend * mLegend;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLogicalBounds;
    bool  mMSGraph;
    CHDPlotArea * mPlotArea;
    bool  mPlotVisibleCellsOnly;
    EDSheet * mSheet;
    OADGraphicProperties * mSideWallGraphicProperties;
    int  mStyleId;
    OADThemeOverrides * mThemeOverrides;
    CHDTitle * mTitle;
    CHDView3D * mView3D;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)binaryEffects:(bool)arg1;

- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)backWallGraphicProperties;
- (unsigned long long)categoryCount;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)chartAreaGraphicProperties;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (id)children;
- (void)dealloc;
- (id)defaultContentFormat;
- (id)defaultDataLabelFont;
- (unsigned long long)defaultFontIndex;
- (id)defaultFontWithResources:(id)arg1;
- (int)defaultLabelPosition;
- (id)defaultSeriesTitleFont;
- (id)defaultTextFont;
- (id)defaultTextProperties;
- (id)defaultThemeFont;
- (id)description;
- (int)direction;
- (int)displayBlankAs;
- (id)externalData;
- (id)floorGraphicProperties;
- (bool)hasSharedXValues;
- (bool)hasVisibleSeriesNames;
- (id)init;
- (bool)is3D;
- (bool)isAutoTitleDeleted;
- (bool)isBinary;
- (bool)isDirectionChanged;
- (bool)isMSGraph;
- (bool)isPie;
- (bool)isPlotVisibleCellsOnly;
- (bool)isScatterOrBubble;
- (id)legend;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logicalBounds;
- (id)mainType;
- (id)plotArea;
- (id)processors;
- (void)removeChild:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (unsigned long long)seriesCount;
- (void)setAutoTitleDeleted:(bool)arg1;
- (void)setBackWallGraphicProperties:(id)arg1;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setDirectionChanged:(bool)arg1;
- (void)setDisplayBlankAs:(int)arg1;
- (void)setExternalData:(id)arg1;
- (void)setFloorGraphicProperties:(id)arg1;
- (void)setHasSharedXValues:(bool)arg1;
- (void)setLegend:(id)arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMSGraph:(bool)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setPlotArea:(id)arg1;
- (void)setPlotVisibleCellsOnly:(bool)arg1;
- (void)setSheet:(id)arg1;
- (void)setSideWallGraphicProperties:(id)arg1;
- (void)setStyleId:(int)arg1;
- (void)setThemeOverrides:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setView3D:(id)arg1;
- (void)setVisibleSeriesNames:(bool)arg1;
- (id)sheet;
- (id)sideWallGraphicProperties;
- (int)styleId;
- (id)styleMatrix;
- (id)themeOverrides;
- (id)title;
- (id)view3D;
- (id)workbook;

@end
