/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDPowerBudget : NSObject {
    CDAttribute * _attribute;
    unsigned long long  _budgetingToken;
    NSString * _bundleId;
}

+ (id)defaultBudget;

- (void).cxx_destruct;
- (bool)_updateAttribute;
- (bool)canDoDiscretionaryWork;
- (void)doDiscretionaryWork:(id /* block */)arg1 orElse:(id /* block */)arg2;
- (void)endWork;
- (void)startWork;

@end
