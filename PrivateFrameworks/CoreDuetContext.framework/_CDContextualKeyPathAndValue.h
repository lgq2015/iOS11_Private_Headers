/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextualKeyPathAndValue : NSObject {
    _CDContextualKeyPath * _keyPath;
    _CDContextValue * _value;
}

@property (nonatomic, retain) _CDContextualKeyPath *keyPath;
@property (nonatomic, retain) _CDContextValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 andValue:(id)arg2;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end