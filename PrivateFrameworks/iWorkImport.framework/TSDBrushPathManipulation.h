/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDBrushPathManipulation : TSDPathManipulation {
    struct CGPath { } * mBrushStroke;
    NSMutableArray * mMiddleSections;
    double  mRepeatLength;
    NSMutableDictionary * mSections;
    double  mSmallLimitWidth;
    NSMutableArray * mSmallSections;
    bool  mSplitAtSharpAngles;
}

@end
