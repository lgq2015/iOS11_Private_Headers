/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNumericSuggestion : NSObject {
    NSString * _displayValue;
    bool  _usedMaximumSuggestion;
    NSDecimalNumber * _value;
}

@property (nonatomic, copy) NSString *displayValue;
@property (nonatomic) bool usedMaximumSuggestion;
@property (nonatomic, readonly, copy) NSDecimalNumber *value;

+ (id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)displayValue;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 currencyCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDisplayValue:(id)arg1;
- (void)setUsedMaximumSuggestion:(bool)arg1;
- (bool)usedMaximumSuggestion;
- (id)value;

@end
