/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBottomAxisBounds;
    double  mBottomAxisHeightChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBottomAxisLabelsBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftCategoryAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftChartTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftValueAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftValueAxisY2TitleOverhang;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBottomLegendBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCategoryAxisTitleBounds;
    bool  mCategoryAxisTitleSizeValid;
    bool  mChartAxisLabelsSizeValid;
    bool  mChartAxisSizeValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mChartBodyBounds;
    bool  mChartExplodedSizeValid;
    bool  mChartLayoutValid;
    bool  mChartLegendSizeValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mChartTitleBounds;
    bool  mChartTitleSizeValid;
    bool  mChartValueElementsGeometryValid;
    struct CGPoint { 
        double x; 
        double y; 
    }  mExplodedBodyShift;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mExplodedBounds;
    double  mHorizontalAxisOverhang;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLeftAxisBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLeftAxisLabelsBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLeftLegendBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOutsideLabelsChartTitleShift;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRightAxisBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRightAxisLabelsBounds;
    double  mRightAxisWidthChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRightLegendBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTopAxisBounds;
    double  mTopAxisHeightChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTopAxisLabelsBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTopLegendBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightCategoryAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightChartTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightValueAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightValueAxisY2TitleOverhang;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mValueAxisTitleBounds;
    bool  mValueAxisTitleSizeValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mValueAxisY2TitleBounds;
    bool  mValueAxisY2TitleSizeValid;
    double  mVerticalAxisOverhang;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeSageChartAreaBoundsForChartInfo:(id)arg1 geometryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 returningContainingViewportSize:(id*)arg3;

- (double)_bottomAxisOuterWidth;
- (double)_horizontalAxisLabelsHeight;
- (double)_leftAxisOuterWidth;
- (double)_rightAxisOuterWidth;
- (double)_seriesSymbolWidth;
- (double)_topAxisOuterWidth;
- (double)_verticalAxisLabelsWidth:(bool)arg1;
- (bool)aspectRatioLocked;
- (bool)bottomAxisLabelsVisible;
- (void)calculateCategoryAxisTitleSize;
- (void)calculateChartAxisLabelsSize;
- (void)calculateChartAxisSize;
- (void)calculateChartBodySize;
- (bool)calculateChartExplodedSize;
- (void)calculateChartTitleSize;
- (void)calculateValueAxisTitleSize;
- (void)calculateValueAxisY2TitleSize;
- (double)chartTitlePadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeSageLayoutCBBForSpiceDoc:(bool)arg1;
- (double)distanceFromXAxisUsingParagraphStyle:(id)arg1;
- (double)distanceFromYAxisUsingParagraphStyle:(id)arg1;
- (double)fontHeight:(id)arg1;
- (bool)isArea;
- (bool)isLine;
- (bool)isPie;
- (bool)isScatter;
- (bool)isVertical;
- (bool)leftAxisLabelsVisible;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 withParagraphStyle:(id)arg2;
- (bool)p_labelsVisible:(id)arg1;
- (id)p_model;
- (double)p_widthFromTicksAndStrokeForAxis:(id)arg1;
- (bool)rightAxisLabelsVisible;
- (double)seriesCategoryLabelsHorizontalGutter;
- (double)seriesCategoryLabelsVerticalGutter;
- (bool)topAxisLabelsVisible;
- (double)xAxisLabelHeight;
- (double)xAxisTitlePadding;
- (double)yAxisLabelHeight:(bool)arg1;
- (double)yAxisTitlePadding:(bool)arg1;

@end