/* made by EzioChiu
   Image: /usr/lib/libprequelite.dylib
 */

@interface PQLResultSet : NSObject <PQLEnumeration> {
    unsigned long long  _columns;
    PQLConnection * _db;
    NSSet * _defaultUnarchivingAllowedClasses;
    NSError * _error;
    bool  _hasValuable;
    bool  _inTransaction;
    id  _lastEnumeratedObject;
    Class  _objectsClass;
    SEL  _objectsClassInitializer;
    id /* block */  _objectsConstructor;
    bool  _requiresSecureCoding;
    unsigned long long  _rowNumber;
    PQLStatement * _stmt;
}

@property (nonatomic, readonly) unsigned long long columns;
@property (nonatomic, readonly) PQLConnection *db;
@property (nonatomic, retain) NSSet *defaultUnarchivingAllowedClasses;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) bool requiresSecureCoding;
@property (nonatomic, readonly) unsigned long long rowNumber;
@property (nonatomic, readonly) struct sqlite3_stmt { }*stmt;

- (void).cxx_destruct;
- (const char *)UTF8StringAtIndex:(int)arg1;
- (bool)_next:(bool)arg1;
- (id)archivedObjectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)archivedObjectOfClasses:(id)arg1 atIndex:(int)arg2;
- (bool)boolAtIndex:(int)arg1;
- (BOOL)charAtIndex:(int)arg1;
- (void)close;
- (id)columnNameAtIndex:(int)arg1;
- (unsigned long long)columns;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dataAtIndex:(int)arg1;
- (id)dataAtIndex:(int)arg1 noCopy:(bool)arg2;
- (id)dateAtIndex:(int)arg1;
- (id)db;
- (void)dealloc;
- (id)defaultUnarchivingAllowedClasses;
- (id)description;
- (double)doubleAtIndex:(int)arg1;
- (/* Warning: unhandled struct encoding: '{PQLResultSet=#@#:B@?@BB@@QQ@}' */ struct PQLResultSet { Class x1; id x2; SEL x3; bool x4; id /* block */ x5; id x6; bool x7; id x8; unsigned long long x9; unsigned long long x10; id x11; }*)enumerateObjects:(id /* block */)arg1;
- (/* Warning: unhandled struct encoding: '{PQLResultSet=#@#:B@?@BB@@QQ@}' */ struct PQLResultSet { Class x1; id x2; SEL x3; bool x4; id /* block */ x5; id x6; bool x7; id x8; unsigned long long x9; unsigned long long x10; id x11; }*)enumerateObjectsOfClass:(Class)arg1;
- (/* Warning: unhandled struct encoding: '{PQLResultSet=#@#:B@?@BB@@QQ@}' */ struct PQLResultSet { Class x1; id x2; SEL x3; bool x4; id /* block */ x5; id x6; bool x7; id x8; unsigned long long x9; unsigned long long x10; id x11; }*)enumerateObjectsOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)error;
- (float)floatAtIndex:(int)arg1;
- (id)initWithStatement:(id)arg1 usingDatabase:(id)arg2;
- (int)intAtIndex:(int)arg1;
- (long long)integerAtIndex:(int)arg1;
- (bool)isNullAtIndex:(int)arg1;
- (long long)longAtIndex:(int)arg1;
- (long long)longLongAtIndex:(int)arg1;
- (bool)next;
- (id)nextObject;
- (id)numberAtIndex:(int)arg1;
- (id)object:(id /* block */)arg1;
- (id)objectAtIndex:(int)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectOfClass:(Class)arg1;
- (id)objectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)objectOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)onlyObject:(id /* block */)arg1;
- (id)onlyObjectOfClass:(Class)arg1;
- (id)onlyObjectOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)plistAtIndex:(int)arg1;
- (bool)requiresSecureCoding;
- (unsigned long long)rowNumber;
- (void)setDefaultUnarchivingAllowedClasses:(id)arg1;
- (void)setRequiresSecureCoding:(bool)arg1;
- (short)shortAtIndex:(int)arg1;
- (struct sqlite3_value { }*)sqliteValueAtIndex:(int)arg1;
- (struct sqlite3_stmt { }*)stmt;
- (id)stringAtIndex:(int)arg1;
- (id)unarchivedObjectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)unarchivedObjectOfClasses:(id)arg1 atIndex:(int)arg2;
- (unsigned char)unsignedCharAtIndex:(int)arg1;
- (unsigned int)unsignedIntAtIndex:(int)arg1;
- (unsigned long long)unsignedIntegerAtIndex:(int)arg1;
- (unsigned long long)unsignedLongAtIndex:(int)arg1;
- (unsigned long long)unsignedLongLongAtIndex:(int)arg1;
- (unsigned short)unsignedShortAtIndex:(int)arg1;
- (id)uuidAtIndex:(int)arg1;

@end
