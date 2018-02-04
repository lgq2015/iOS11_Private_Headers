/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPageSetup : NSObject {
    float  mBottomMargin;
    bool  mCustomFirstPageNumber;
    unsigned long long  mFirstPageNumber;
    unsigned long long  mFitToHeight;
    unsigned long long  mFitToWidth;
    float  mFooterMargin;
    float  mHeaderMargin;
    float  mLeftMargin;
    int  mOrientation;
    int  mPageOrder;
    float  mRightMargin;
    unsigned long long  mScale;
    float  mTopMargin;
}

+ (id)pageSetup;

- (float)bottomMargin;
- (bool)customFirstPageNumber;
- (id)description;
- (unsigned long long)firstPageNumber;
- (unsigned long long)fitToHeight;
- (unsigned long long)fitToWidth;
- (float)footerMargin;
- (float)headerMargin;
- (id)init;
- (float)leftMargin;
- (int)order;
- (int)orientation;
- (float)rightMargin;
- (unsigned long long)scale;
- (void)setBottomMargin:(float)arg1;
- (void)setCustomFirstPageNumber:(bool)arg1;
- (void)setFirstPageNumber:(unsigned long long)arg1;
- (void)setFitToHeight:(unsigned long long)arg1;
- (void)setFitToWidth:(unsigned long long)arg1;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setOrder:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setScale:(unsigned long long)arg1;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;

@end
