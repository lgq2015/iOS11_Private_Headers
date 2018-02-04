/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPColumnMaker : NSObject {
    NSMutableArray * allParagraphs;
    NSMutableArray * columns;
    CPZone * currentZone;
    NSMutableArray * images;
    double  maxParagraphDistance;
    NSMutableArray * otherShapes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  pageBounds;
    NSMutableArray * paragraphWrappers;
    NSMutableArray * thinHorizontalShapes;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pageBounds;

- (void)anchorImages;
- (double)averageSpacing:(id)arg1;
- (void)callOuts;
- (bool)canSafelyAdd:(id)arg1 to:(id)arg2;
- (id)chunkAbove:(id)arg1 in:(id)arg2;
- (bool)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)column:(id)arg1 isLinkedBelowTo:(id)arg2;
- (id)columns;
- (bool)cuttingShapeBetween:(id)arg1 and:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)intersectionCallout:(id)arg1;
- (bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageBounds;
- (bool)paragraph:(id)arg1 isAbove:(id)arg2;
- (bool)paragraph:(id)arg1 isBelow:(id)arg2;
- (bool)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;
- (bool)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;
- (id)paragraphAbove:(id)arg1 in:(id)arg2;
- (id)paragraphBelow:(id)arg1 in:(id)arg2;
- (void)partitionShapes:(id)arg1;
- (void)setPageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)splitColumns:(id)arg1;

@end
