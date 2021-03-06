/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCDADocumentFieldFilter : _HKFilter {
    NSRegularExpression * _comparisonExpression;
    NSString * _comparisonValue;
    NSString * _keyPath;
    unsigned long long  _operatorType;
}

@property (nonatomic, readonly) NSRegularExpression *comparisonExpression;
@property (nonatomic, readonly) NSString *comparisonValue;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) unsigned long long operatorType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 comparisonValue:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_comparisonExpression;
- (bool)acceptsDataObject:(id)arg1;
- (id)comparisonExpression;
- (id)comparisonValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (unsigned long long)operatorType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_escapeForLike:(id)arg1;
- (id)_globForLike:(id)arg1;
- (id)predicateWithProfile:(id)arg1;

@end
