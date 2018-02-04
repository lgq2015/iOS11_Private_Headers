/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFSelection : NSObject <NSCopying> {
    PDFSelectionPrivate * _private;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, readonly) NSArray *pages;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (id)activeColor;
- (void)addCGSelection:(struct CGPDFSelection { }*)arg1 forPage:(id)arg2;
- (void)addSelection:(id)arg1;
- (void)addSelectionCore:(id)arg1 normalize:(bool)arg2;
- (void)addSelectionNoNormalize:(id)arg1;
- (void)addSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 page:(id)arg2 normalize:(bool)arg3;
- (void)addSelections:(id)arg1;
- (id)asDestination;
- (id)attributedString;
- (id)attributedStringScaled:(double)arg1;
- (bool)beginsAndEndsOnWordBoundaries;
- (id)boundsArrayForPage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPage:(id)arg1;
- (struct CGPDFSelection { }*)cgSelectionForPage:(id)arg1;
- (id)cgSelectionPages;
- (struct __CFArray { }*)cgSelections;
- (id)color;
- (id)colorWithCGColor:(struct CGColor { }*)arg1 space:(struct CGColorSpace { }*)arg2;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAttributedStringForCGSelection:(struct CGPDFSelection { }*)arg1 scaled:(double)arg2;
- (void)dealloc;
- (id)description;
- (id)document;
- (void)drawForPage:(id)arg1 active:(bool)arg2;
- (void)drawForPage:(id)arg1 withBox:(long long)arg2 active:(bool)arg3;
- (void)drawForPage:(id)arg1 withBox:(int)arg2 active:(bool)arg3 inContext:(struct CGContext { }*)arg4;
- (void)extendSelectionAtEnd:(long long)arg1;
- (void)extendSelectionAtStart:(long long)arg1;
- (void)extendSelectionForLineBoundaries;
- (struct CGPoint { double x1; double x2; })firstCharCenter;
- (id)firstPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstSpanBoundsForPage:(id)arg1;
- (bool)forceBreaks;
- (id)html;
- (id)inactiveColor;
- (unsigned long long)indexOfFirstCharacterOnPage:(id)arg1;
- (unsigned long long)indexOfLastCharacterOnPage:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)initWithPage:(id)arg1;
- (bool)isEmpty;
- (id)lastPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastSpanBoundsForPage:(id)arg1;
- (struct CGPoint { double x1; double x2; })leftMostCharCenter;
- (void)normalize;
- (unsigned long long)numberOfTextRangesOnPage:(id)arg1;
- (id)pages;
- (unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)arg1;
- (unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })previewRangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (struct CGPoint { double x1; double x2; })rightMostCharCenter;
- (id)rtfdData;
- (id)selectionsByLine;
- (void)setActiveColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setForceBreaks:(bool)arg1;
- (void)setInactiveColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })spanBoundsForPage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)string;
- (void)subtractSelection:(id)arg1;
- (void)subtractSelectionCore:(id)arg1 normalize:(bool)arg2;
- (id)webArchive;

@end
