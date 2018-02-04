/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDConditionalFormattingRule : NSObject {
    bool  mAboveAverage;
    bool  mAppliesToDateOnly;
    bool  mBottom;
    unsigned long long  mDifferentialStyleIndex;
    bool  mEqualAverage;
    NSMutableArray * mFormulas;
    int  mOperator;
    bool  mPercent;
    long long  mPriority;
    unsigned long long  mRank;
    EDResources * mResources;
    long long  mStdDev;
    bool  mStopIfTrue;
    NSString * mText;
    int  mTimePeriod;
    int  mType;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (bool)aboveAverage;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (bool)appliesToDateOnly;
- (bool)bottom;
- (long long)compareToOtherRuleUsingPriority:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)differentialStyle;
- (unsigned long long)differentialStyleIndex;
- (bool)equalAverage;
- (id)formulaAtIndex:(unsigned long long)arg1;
- (unsigned long long)formulaCount;
- (id)initWithResources:(id)arg1;
- (int)operatorEnum;
- (bool)percent;
- (long long)priority;
- (unsigned long long)rank;
- (void)setAboveAverage:(bool)arg1;
- (void)setAppliesToDateOnly:(bool)arg1;
- (void)setBottom:(bool)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (void)setDifferentialStyleIndex:(unsigned long long)arg1;
- (void)setEqualAverage:(bool)arg1;
- (void)setOperatorEnum:(int)arg1;
- (void)setPercent:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRank:(unsigned long long)arg1;
- (void)setStdDev:(long long)arg1;
- (void)setStopIfTrue:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTimePeriod:(int)arg1;
- (void)setType:(int)arg1;
- (long long)stdDev;
- (bool)stopIfTrue;
- (id)text;
- (int)timePeriod;
- (int)type;

@end
