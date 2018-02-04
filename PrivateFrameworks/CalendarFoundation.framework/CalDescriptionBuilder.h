/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDescriptionBuilder : NSObject {
    NSMutableDictionary * _descriptionUnderConstruction;
    NSString * _keyDelimiter;
    bool  _sortedByKey;
    NSString * _superclassDescription;
}

@property (nonatomic, retain) NSMutableDictionary *descriptionUnderConstruction;
@property (nonatomic, copy) NSString *keyDelimiter;
@property (nonatomic) bool sortedByKey;
@property (nonatomic, copy) NSString *superclassDescription;

- (void).cxx_destruct;
- (id)build;
- (id)description;
- (id)descriptionUnderConstruction;
- (id)init;
- (id)initWithSuperclassDescription:(id)arg1;
- (id)keyDelimiter;
- (void)setDescriptionUnderConstruction:(id)arg1;
- (void)setKey:(id)arg1 withArray:(id)arg2;
- (void)setKey:(id)arg1 withBoolean:(bool)arg2;
- (void)setKey:(id)arg1 withChar:(BOOL)arg2;
- (void)setKey:(id)arg1 withCharArray:(const char *)arg2;
- (void)setKey:(id)arg1 withClass:(Class)arg2;
- (void)setKey:(id)arg1 withDate:(id)arg2;
- (void)setKey:(id)arg1 withDictionary:(id)arg2;
- (void)setKey:(id)arg1 withDispatchQueue:(id)arg2;
- (void)setKey:(id)arg1 withDispatchSource:(id)arg2;
- (void)setKey:(id)arg1 withDouble:(double)arg2;
- (void)setKey:(id)arg1 withEnumNumericalValue:(long long)arg2 andStringValue:(id)arg3;
- (void)setKey:(id)arg1 withFloat:(float)arg2;
- (void)setKey:(id)arg1 withInt:(int)arg2;
- (void)setKey:(id)arg1 withInteger:(long long)arg2;
- (void)setKey:(id)arg1 withLong:(long long)arg2;
- (void)setKey:(id)arg1 withLongLong:(long long)arg2;
- (void)setKey:(id)arg1 withMachPort:(unsigned int)arg2;
- (void)setKey:(id)arg1 withObject:(id)arg2;
- (void)setKey:(id)arg1 withPointerAddress:(const void*)arg2;
- (void)setKey:(id)arg1 withProcessID:(int)arg2;
- (void)setKey:(id)arg1 withSelector:(SEL)arg2;
- (void)setKey:(id)arg1 withSet:(id)arg2;
- (void)setKey:(id)arg1 withShort:(short)arg2;
- (void)setKey:(id)arg1 withSize:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withString:(id)arg2;
- (void)setKey:(id)arg1 withTimeInterval:(double)arg2;
- (void)setKey:(id)arg1 withUnsignedChar:(unsigned char)arg2;
- (void)setKey:(id)arg1 withUnsignedInt:(unsigned int)arg2;
- (void)setKey:(id)arg1 withUnsignedInteger:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withUnsignedLong:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withUnsignedLongLong:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withUnsignedShort:(unsigned short)arg2;
- (void)setKeyDelimiter:(id)arg1;
- (void)setSortedByKey:(bool)arg1;
- (void)setSuperclassDescription:(id)arg1;
- (bool)sortedByKey;
- (id)superclassDescription;

@end
