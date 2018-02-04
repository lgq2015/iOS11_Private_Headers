/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {
    struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; struct EDBuildablePtg {} *x8; bool x9; int x10; unsigned short x11; unsigned short x12; } * mTree;
    int  mWarning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (bool)argTokenIsDurationAtIndex:(unsigned int)arg1;
- (int)argTokenTypeAtIndex:(unsigned int)arg1;
- (bool)convertLastRefsToArea;
- (bool)convertRefs:(unsigned int)arg1 toType:(int)arg2;
- (bool)convertRefs:(unsigned int)arg1 toTypes:(int*)arg2;
- (void)convertRefsInList:(struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; struct EDBuildablePtg {} *x8; bool x9; int x10; unsigned short x11; unsigned short x12; }*)arg1 toType:(int)arg2;
- (bool)convertToIntersect:(unsigned int)arg1;
- (bool)convertToList:(unsigned int)arg1;
- (bool)convertToList:(unsigned int)arg1 withFinalParen:(bool)arg2;
- (void)copyToFormula:(id)arg1;
- (bool)copyToken:(unsigned int)arg1 from:(id)arg2;
- (void)dealloc;
- (bool)fixTableOfConstantsRef:(struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; struct EDBuildablePtg {} *x8; bool x9; int x10; unsigned short x11; unsigned short x12; }*)arg1;
- (bool)fixTableOfConstantsRefs;
- (id)formula;
- (bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (bool)insertName:(unsigned long long)arg1 link:(unsigned long long)arg2 external:(bool)arg3 atIndex:(unsigned int)arg4;
- (bool)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned int)arg2 numArgs:(unsigned int)arg3;
- (bool)isConstantList:(unsigned int)arg1;
- (bool)isSupportedFormula;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(bool*)arg1 withEDLinks:(id)arg2;
- (bool)makeArrayForLastToken:(unsigned long long)arg1;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (unsigned int)removeOptionalPtgArgs:(unsigned int)arg1 minArgs:(unsigned int)arg2;
- (void)removeTokenAtIndex:(unsigned long long)arg1;
- (bool)replaceArgPtgAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (void)replaceStringInStringTokenAtIndex:(unsigned long long)arg1 content:(id)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)setWarning:(int)arg1;
- (bool)shrinkSpanningRef:(struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; struct EDBuildablePtg {} *x8; bool x9; int x10; unsigned short x11; unsigned short x12; }*)arg1;
- (bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (id)stringFromStringTokenAtIndex:(unsigned long long)arg1;
- (struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; struct EDBuildablePtg {} *x8; bool x9; int x10; unsigned short x11; unsigned short x12; }*)tokenAtIndex:(unsigned long long)arg1;
- (struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; struct EDBuildablePtg {} *x8; bool x9; int x10; unsigned short x11; unsigned short x12; }*)tokenAtIndex:(unsigned long long)arg1 previousToken:(struct EDBuildablePtg {}**)arg2;
- (int)tokenTypeAtIndex:(unsigned long long)arg1;
- (bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (int)warningType;
- (bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;

@end
