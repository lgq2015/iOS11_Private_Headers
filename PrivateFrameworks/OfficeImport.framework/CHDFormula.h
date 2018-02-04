/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDFormula : EDFormula {
    EDReferenceCollection * mReferences;
    EDWorkbook * mWorkbook;
}

+ (id)formulaWithReference:(id)arg1;
+ (id)formulaWithReferences:(id)arg1;

- (id)constantValuesFromConstantStringFormula;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)dealloc;
- (id)initWithReference:(id)arg1;
- (id)initWithReferences:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (bool)isConstantStringFormula;
- (void)prepareTokens;
- (id)references;
- (id)referencesFromFormula;
- (void)setReferences:(id)arg1;
- (void)setWorkbook:(id)arg1;

@end
