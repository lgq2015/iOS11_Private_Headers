/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteQueryCriterion : NSObject <NSCopying> {
    NSString * _columnName;
    long long  _comparisonOperator;
    long long  _logicalOperator;
    NSArray * _subcriteria;
    <SiriCoreSQLiteValue> * _value;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) NSString *columnName;
@property (nonatomic, readonly) long long comparisonOperator;
@property (nonatomic, readonly) long long logicalOperator;
@property (nonatomic, readonly, copy) NSArray *subcriteria;
@property (nonatomic, readonly, copy) <SiriCoreSQLiteValue> *value;
@property (nonatomic, readonly, copy) NSArray *values;

+ (id)andQueryCriterionWithSubcriteria:(id)arg1;
+ (id)andQueryCriterionWithSubcriteriaProvider:(id /* block */)arg1;
+ (id)betweenQueryCriterionWithColumnName:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 negation:(bool)arg4;
+ (id)equalToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)greaterThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)greaterThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)inQueryCriterionWithColumnName:(id)arg1 values:(id)arg2 negation:(bool)arg3;
+ (id)isNullQueryCriterionWithColumnName:(id)arg1 negation:(bool)arg2;
+ (id)isQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(bool)arg3;
+ (id)lessThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)lessThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)likeQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(bool)arg3;
+ (id)notEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)orQueryCriterionWithSubcriteria:(id)arg1;
+ (id)orQueryCriterionWithSubcriteriaProvider:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)columnName;
- (long long)comparisonOperator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteria:(id)arg6;
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteriaProvider:(id /* block */)arg6;
- (long long)logicalOperator;
- (id)subcriteria;
- (id)value;
- (id)values;

@end
