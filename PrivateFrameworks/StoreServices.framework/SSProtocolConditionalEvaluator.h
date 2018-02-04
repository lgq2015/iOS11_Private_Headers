/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSProtocolConditionalEvaluator : NSObject {
    SSProtocolConditionalContext * _context;
    NSDictionary * _dictionary;
}

+ (id)defaultConditionalContext;
+ (void)setDefaultConditionalContext:(id)arg1;

- (id)_arrayByEvaluatingChildrenOfArray:(id)arg1 withForcedValue:(long long)arg2;
- (bool)_checkConditions:(id)arg1 withOperator:(id)arg2;
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)arg1 withForcedValue:(long long)arg2;
- (id)_dictionaryByEvaluatingDictionary:(id)arg1 withForcedValue:(long long)arg2;
- (id)_dictionaryByEvaluatingWithForcedValue:(long long)arg1;
- (int)_logicalOperatorForString:(id)arg1;
- (void)dealloc;
- (id)dictionaryByEvaluatingConditions;
- (id)dictionaryByRemovingConditions;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 conditionalContext:(id)arg2;

@end
