/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNHintCache : NSObject {
    TNPageCoordinateDictionary * mHintCacheEntryDictionary;
    TSDDrawableInfo * mInfo;
    bool  mIsMaxColumnValid;
    bool  mIsMaxRowValid;
    TNPageController * mPageController;
    struct { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } topLeft; 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } bottomRight; 
    }  mPageRange;
}

@property (retain) TSDDrawableInfo *info;
@property (readonly) TNPageController *pageController;

- (void)dealloc;
- (id)info;
- (id)initWithInfo:(id)arg1 pageController:(id)arg2;
- (void)invalidate;
- (id)layoutAtCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 parentLayout:(id)arg2;
- (id)p_hintCacheEntryAtCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)pageController;
- (struct { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeWithUpperBound:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setInfo:(id)arg1;

@end
