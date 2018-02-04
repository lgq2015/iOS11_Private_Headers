/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCFGDoubleTerminal : _HKCFGTerminal {
    id /* block */  _condition;
}

@property (nonatomic, copy) id /* block */ condition;

- (void).cxx_destruct;
- (id)_label;
- (unsigned long long)_minimumLength;
- (bool)_scanValue:(id*)arg1 withScanner:(id)arg2;
- (id)characterSet;
- (id /* block */)condition;
- (void)setCondition:(id /* block */)arg1;

@end
