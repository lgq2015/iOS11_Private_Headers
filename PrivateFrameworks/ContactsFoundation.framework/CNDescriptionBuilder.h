/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNDescriptionBuilder : NSObject {
    NSMutableString * _description;
    NSObject * _object;
    NSString * _separator;
}

@property (nonatomic, copy) NSString *separator;

+ (id)descriptionBuilderWithObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2;

- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendName:(id)arg1 boolValue:(bool)arg2;
- (id)appendName:(id)arg1 doubleValue:(double)arg2;
- (id)appendName:(id)arg1 intValue:(int)arg2;
- (id)appendName:(id)arg1 integerValue:(long long)arg2;
- (id)appendName:(id)arg1 object:(id)arg2;
- (id)appendName:(id)arg1 pointerValue:(void*)arg2;
- (id)appendName:(id)arg1 selector:(SEL)arg2;
- (id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2;
- (id)appendNamesAndObjects:(id)arg1;
- (id)appendNamesAndObjects:(id)arg1 args:(char *)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)build;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (void)tryAppendKey:(id)arg1;

@end
