/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSQLiteVirtualTable : NSObject {
    NSString * _name;
}

@property (readonly) NSString *columnDefinitions;
@property (readonly) struct sqlite3_module { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); }*module;
@property (readonly) NSString *name;
@property (readonly) unsigned long long rowCount;

- (void).cxx_destruct;
- (id)columnDefinitions;
- (void)fetchValueForContext:(struct sqlite3_context { }*)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (id)init;
- (id)initWithName:(id)arg1;
- (struct sqlite3_module { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); }*)module;
- (id)name;
- (unsigned long long)rowCount;

@end
