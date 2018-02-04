/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent> {
    NSArray * mChildren;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mDrawingRectCache;
    bool  mDrawingRectCacheValid;
    struct CGSize { 
        double width; 
        double height; 
    }  mLayoutSize;
    bool  mLayoutSizeSet;
    struct CGSize { 
        double width; 
        double height; 
    }  mMinSizeCache;
    bool  mMinSizeCacheValid;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mOverhangRectCache;
    bool  mOverhangRectCacheValid;
    TSCHChartLayoutItem * mParent;
    bool  mTreeBuilt;
}

@property (nonatomic, readonly) TSCHChartInfo *chartInfo;
@property (nonatomic, readonly) unsigned long long dataSetIndex;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } drawingOffset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingRect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic, readonly) bool isInResize;
@property (nonatomic) struct CGPoint { double x1; double x2; } layoutOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutRect;
@property (nonatomic) struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; } layoutSettings;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (readonly) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, readonly) TSCHChartModel *model;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overhangRect;
@property (nonatomic, readonly) TSCHChartLayoutItem *parent;
@property (nonatomic, readonly) TSCHChartRootLayoutItem *root;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rootedDrawingRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rootedLayoutRect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } startingSize;

+ (id)chartLayoutWithChartInfo:(id)arg1;

- (void)buildSubTree;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (id)chartInfo;
- (void)clearAll;
- (void)clearDrawingRect;
- (void)clearLayoutSize;
- (void)clearMinSize;
- (void)clearOverhangRect;
- (void)clearParent;
- (unsigned long long)dataSetIndex;
- (void)dealloc;
- (id)description;
- (struct CGPoint { double x1; double x2; })drawingOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRect;
- (struct CGSize { double x1; double x2; })drawingSize;
- (id)hitChartElements:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (id)initWithParent:(id)arg1;
- (bool)isInResize;
- (struct CGPoint { double x1; double x2; })layoutOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutRect;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })layoutSettings;
- (struct CGSize { double x1; double x2; })layoutSize;
- (void)layoutUsingMethod:(int)arg1;
- (struct CGSize { double x1; double x2; })minSize;
- (id)model;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (double)overhangMagnitudeForEdge:(unsigned int)arg1;
- (struct CGPoint { double x1; double x2; })overhangOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overhangRect;
- (struct CGSize { double x1; double x2; })overhangSize;
- (id)p_description;
- (void)p_iterateChildrenWithBlock:(id /* block */)arg1;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)parent;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (id)renderersWithRep:(id)arg1;
- (id)root;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootedDrawingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootedLayoutRect;
- (void)setLayoutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })startingSize;
- (bool)stopIteratingItemsContainingPoint:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;

@end
