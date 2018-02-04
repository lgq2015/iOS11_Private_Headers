/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression {
    SCRCMathExpression * _base;
    SCRCMathExpression * _subscript;
    SCRCMathExpression * _superscript;
}

@property (nonatomic, retain) SCRCMathExpression *base;
@property (nonatomic, retain) SCRCMathExpression *subscript;
@property (nonatomic, retain) SCRCMathExpression *superscript;

- (void).cxx_destruct;
- (id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id*)arg3;
- (id)base;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (bool)isBaseSubSuperscript;
- (bool)isNumber;
- (bool)isRangeSubSuperscript;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (void)setBase:(id)arg1;
- (void)setSubscript:(id)arg1;
- (void)setSuperscript:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)subscript;
- (id)superscript;

@end
