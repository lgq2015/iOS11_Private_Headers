/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteColumnConstraint : NSObject <NSCopying> {
    NSString * _name;
    unsigned long long  _options;
    long long  _type;
    <SiriCoreSQLiteValue> * _value;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) <SiriCoreSQLiteValue> *value;

+ (id)defaultColumnConstraintWithName:(id)arg1 value:(id)arg2;
+ (id)notNullColumnConstraintWithName:(id)arg1;
+ (id)primaryKeyColumnConstraintWithName:(id)arg1 usesAutoIncrement:(bool)arg2;
+ (id)uniqueColumnConstraintWithName:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 value:(id)arg3 options:(unsigned long long)arg4;
- (id)name;
- (unsigned long long)options;
- (long long)type;
- (id)value;

@end
