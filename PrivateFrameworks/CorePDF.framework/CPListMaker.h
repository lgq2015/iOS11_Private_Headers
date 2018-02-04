/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPListMaker : NSObject <CPDisposable> {
    CPLayoutArea * area;
    CPList * list;
    NSArray * spacers;
    unsigned int  textLineCount;
    id * textLines;
}

+ (void)makeListsInChunk:(id)arg1;
+ (void)makeListsInLayoutArea:(id)arg1;
+ (void)makeListsInPage:(id)arg1;

- (void)dealloc;
- (void)dispose;
- (void)fetchTextLine:(id)arg1;
- (void)fetchTextLinesInColumn:(id)arg1;
- (void)finalize;
- (id)initWithLayoutArea:(id)arg1;
- (bool)makeListFrom:(struct CPListInfo { unsigned int x1; unsigned int x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct __CFString {} *x4; int x5; unsigned int x6; unsigned int x7; int x8; bool x9; bool x10; bool x11; void *x12; }*)arg1;
- (void)makeListItemFrom:(struct CPListInfo { unsigned int x1; unsigned int x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct __CFString {} *x4; int x5; unsigned int x6; unsigned int x7; int x8; bool x9; bool x10; bool x11; void *x12; }*)arg1 stopAt:(unsigned int)arg2;
- (void)makeLists;
- (void)makeListsInColumn:(id)arg1;

@end
