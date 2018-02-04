/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraphMaker : NSObject {
    NSMutableArray * avail;
    NSMutableArray * compoundedShapesOnPage;
    double  currentSpacing;
    CPPage * page;
    NSMutableArray * paragraphs;
    CPZone * parent;
    bool  spacingSet;
}

+ (bool)line:(id)arg1 alignsWith:(id)arg2;

- (void)addCompoundedShapesOn:(id)arg1 to:(id)arg2;
- (void)addLinesTo:(id)arg1;
- (unsigned long long)alignmentOf:(id)arg1 and:(id)arg2;
- (unsigned long long)alignmentOf:(id)arg1 and:(id)arg2 and:(id)arg3;
- (void)dealloc;
- (bool)firstWordOf:(id)arg1 fits:(id)arg2 indent:(double)arg3;
- (bool)fitsBelow:(id)arg1 alignment:(unsigned long long)arg2 spacing:(double)arg3 from:(int)arg4;
- (int)indexOfUniqueLineBelow:(id)arg1 from:(int)arg2;
- (bool)isGraphicBetween:(id)arg1 and:(id)arg2;
- (bool)line:(id)arg1 isAlignedWith:(id)arg2;
- (bool)line:(id)arg1 isBelow:(id)arg2;
- (bool)line:(id)arg1 isDirectlyBelow:(id)arg2;
- (int)linesThatOverlapLineAt:(int)arg1 between:(double)arg2 and:(double)arg3 from:(int)arg4;
- (void)makeParagraphsIn:(id)arg1;
- (id)newInitialParagraph;
- (int)paragraph:(id)arg1 splits:(id)arg2;
- (id)paragraphs;
- (bool)spacingOf:(id)arg1 and:(id)arg2 and:(id)arg3 is:(double*)arg4;
- (bool)styleOf:(id)arg1 differsFromStyleOf:(id)arg2;

@end
