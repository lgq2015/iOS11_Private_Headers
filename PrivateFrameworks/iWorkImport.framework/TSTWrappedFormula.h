/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWrappedFormula : TSTFormula {
    int  mFunctionIndex;
}

@property (nonatomic) int functionIndex;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)functionIndex;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(id /* block */)arg2;
- (void)setFunctionIndex:(int)arg1;

@end
