/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMState : CMState {
    CMOutlineState * currentListState;
    NSMutableDictionary * listStates;
    unsigned long long  mBlockIndex;
    unsigned int  mCurrentPage;
    bool  mIsFrame;
    bool  mIsFrameEnd;
    bool  mIsFrameStart;
    bool  mIsHeaderOrFooter;
    WDText * mLastFooter;
    WDText * mLastHeader;
    float  mLeftMargin;
    float  mPageHeight;
    unsigned long long  mRunIndex;
    float  mTopMargin;
    float  mTotalPageHeight;
    CMOutlineState * outlineState;
}

- (void).cxx_destruct;
- (unsigned long long)blockIndex;
- (void)clearCurrentListState;
- (id)currentListState;
- (unsigned int)currentPage;
- (void)dealloc;
- (id)init;
- (bool)isCurrentListDefinitionId:(int)arg1;
- (bool)isCurrentListStateOverridden;
- (bool)isFrame;
- (bool)isFrameEnd;
- (bool)isFrameStart;
- (bool)isHeaderOrFooter;
- (id)lastFooter;
- (id)lastHeader;
- (float)leftMargin;
- (id)listStateForListDefinitionId:(int)arg1;
- (id)listStateForListDefinitionWithId:(int)arg1 settingUpStateIfNeededWithDocument:(id)arg2;
- (id)outlineState;
- (float)pageHeight;
- (float)pageOffset;
- (unsigned long long)runIndex;
- (void)setBlockIndex:(unsigned long long)arg1;
- (void)setCurrentListState:(id)arg1;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setIsFrame:(bool)arg1;
- (void)setIsFrameEnd:(bool)arg1;
- (void)setIsFrameStart:(bool)arg1;
- (void)setIsHeaderOrFooter:(bool)arg1;
- (void)setLastFooter:(id)arg1;
- (void)setLastHeader:(id)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setListState:(id)arg1 forListDefinitionId:(int)arg2;
- (void)setPageHeight:(float)arg1;
- (void)setRunIndex:(unsigned long long)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setTotalPageHeight:(float)arg1;
- (float)topMargin;
- (float)totalPageHeight;

@end
