/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMatchingAlgorithm : NSObject {
    long long * mCostMatrix;
    bool * mIsColCovered;
    bool * mIsRowCovered;
    bool * mIsStarInColumn;
    bool * mIsStarInRow;
    char * mMaskMatrix;
    long long  mMatrixDimension;
    id * mObjectMapping;
    NSMutableArray * mResults;
    long long  mZ0Col;
    long long  mZ0Row;
}

+ (id)bestMatchesFromArray:(id)arg1;

- (void)p_allocateMatrices;
- (id)p_bestMatchesFromArray:(id)arg1;
- (void)p_deallocateMatrices;
- (int)p_doStep1;
- (int)p_doStep2;
- (int)p_doStep3;
- (int)p_doStep4;
- (int)p_doStep5;
- (int)p_doStep6;
- (bool)p_step4FindAZeroAndReturnRow:(int*)arg1 column:(int*)arg2;
- (int)p_step4IndexOfStarredZeroInRow:(int)arg1;

@end
