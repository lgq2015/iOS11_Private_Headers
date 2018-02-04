/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDParagraphBuild : PDBuild {
    double  mAutoAdvanceTime;
    int  mBuildLevel;
    bool  mIsReversedParagraphOrder;
    NSMutableArray * mTimeNodeDataList;
    int  mType;
}

- (id)addTimeNodeData;
- (double)autoAdvanceTime;
- (int)buildLevel;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)arg1;
- (void)setBuildLevel:(int)arg1;
- (void)setIsReversedParagraphOrder:(bool)arg1;
- (void)setType:(int)arg1;
- (id)timeNodeDataAtIndex:(unsigned long long)arg1;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;
- (int)type;

@end
