/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIState : NSObject {
    NSMutableArray * mDefaultStyleLabelNames;
    ODDDiagram * mDiagram;
    OADOrientedBounds * mDiagramOrientedBounds;
    OADDrawingTheme * mDrawingTheme;
    OADGroup * mGroup;
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
    int  mPointCount;
    int  mPointIndex;
    NSMutableArray * mPresentationNames;
    double  mScale;
    OADShapeStyle * mTextStyle;
}

- (void)dealloc;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (id)diagram;
- (id)diagramOrientedBounds;
- (id)drawingTheme;
- (id)group;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logicalBounds;
- (int)pointCount;
- (int)pointIndex;
- (id)presentationNameForPointType:(int)arg1;
- (double)scale;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;
- (void)setGroup:(id)arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 maintainAspectRatio:(bool)arg2;
- (void)setPointCount:(int)arg1;
- (void)setPointIndex:(int)arg1;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end
