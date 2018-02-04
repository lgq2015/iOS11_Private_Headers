/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationHelper : NSObject

+ (void)applyMutations:(id)arg1 forImport:(bool)arg2 forStyleOwner:(id)arg3 withNonStylePropertyList:(id)arg4 toStylePropertyMap:(id)arg5 andNonStylePropertyMap:(id)arg6;
+ (id)convertToStyleSwapTuplesForStyleOwner:(id)arg1 styleSwapType:(int)arg2 nonStyleSwapType:(int)arg3 index:(unsigned long long)arg4 fromMutations:(id)arg5 forImport:(bool)arg6 withOptionalStyleValueConversionBlock:(id /* block */)arg7;
+ (int)safe_specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(bool)arg3;
+ (void)setValue:(id)arg1 forProperty:(int)arg2 ofStyleOwner:(id)arg3;
+ (int)specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(bool)arg3;
+ (id)styleSwapTuplesFromMutationTuples:(id)arg1 forImport:(bool)arg2;

- (id)init;

@end
