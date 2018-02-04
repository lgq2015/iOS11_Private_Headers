/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKRule : NSObject {
    long long  _salience;
}

@property (nonatomic) long long salience;

+ (id)ruleWithBlockPredicate:(id /* block */)arg1 action:(id /* block */)arg2;
+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(float)arg3;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(float)arg3;

- (bool)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
- (long long)salience;
- (void)setSalience:(long long)arg1;

@end
