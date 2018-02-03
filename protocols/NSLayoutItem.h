/* made by EzioChiu.
 */

@protocol NSLayoutItem <NSObject>

@required

- (unsigned long long)nsli_autoresizingMask;
- (struct CGSize { double x1; double x2; })nsli_convertSizeFromEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })nsli_convertSizeToEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (NSString *)nsli_description;
- (bool)nsli_descriptionIncludesPointer;
- (bool)nsli_isFlipped;
- (NSISEngine *)nsli_layoutEngine;
- (bool)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(double)arg3 container:(id <NSLayoutItem>)arg4;
- (bool)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(double)arg3 forConstraint:(NSLayoutConstraint *)arg4;
- (bool)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(NSString *)arg2 inConstraint:(NSLayoutConstraint *)arg3 error:(id*)arg4;
- (<NSLayoutItem> *)nsli_superitem;

@optional

- (void)nsli_addConstraint:(NSLayoutConstraint *)arg1;
- (void)nsli_addConstraint:(NSLayoutConstraint *)arg1 mutuallyExclusiveConstraints:(id*)arg2;
- (<NSLayoutItem> *)nsli_ancestorSharedWithItem:(id <NSLayoutItem>)arg1;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (bool)nsli_canHostIndependentVariableAnchor;
- (struct CGSize { double x1; double x2; })nsli_engineToUserScalingCoefficients;
- (NSISVariable *)nsli_heightVariable;
- (NSArray *)nsli_installedConstraints;
- (bool)nsli_isLegalConstraintItem;
- (bool)nsli_isRTL;
- (<NSLayoutItem> *)nsli_itemDescribingLayoutDirectionForConstraint:(NSLayoutConstraint *)arg1 toItem:(id <NSLayoutItem>)arg2;
- (NSLayoutAnchor *)nsli_layoutAnchorForAttribute:(long long)arg1;
- (<NSLayoutItem> *)nsli_layoutMarginsItem;
- (NSLayoutRect *)nsli_layoutRect;
- (bool)nsli_lowersExpressionRelativeToConstraintContainer;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (NSISVariable *)nsli_minXVariable;
- (NSISVariable *)nsli_minYVariable;
- (unsigned long long)nsli_piercingToken;
- (bool)nsli_removeConstraint:(NSLayoutConstraint *)arg1;
- (void)nsli_setPiercingToken:(unsigned long long)arg1;
- (NSISVariable *)nsli_widthVariable;

@end