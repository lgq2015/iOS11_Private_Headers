/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpEnum : NSObject {
    NSMutableDictionary * mNameToValueMap;
    NSString * mTypeName;
    NSMutableDictionary * mValueToNameMap;
}

- (void)dealloc;
- (id)initWithTypeName:(id)arg1 pairs:(/* Warning: unhandled struct encoding: '{TCDumpEnumPair=i@}' */ struct TCDumpEnumPair { int x1; id x2; }*)arg2;
- (id)nameForValue:(int)arg1;
- (id)typeName;
- (id)valueForName:(id)arg1;

@end
