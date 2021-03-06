/* made by EzioChiu.
 */

@protocol _CPValue <NSObject>

@required

- (bool)bool_value;
- (NSData *)bytes_value;
- (bool)hasBool_value;
- (bool)hasBytes_value;
- (bool)hasList_value;
- (bool)hasNull_value;
- (bool)hasNumber_value;
- (bool)hasString_value;
- (bool)hasStruct_value;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPListValue *)list_value;
- (int)null_value;
- (double)number_value;
- (void)setBool_value:(bool)arg1;
- (void)setBytes_value:(NSData *)arg1;
- (void)setList_value:(_CPListValue *)arg1;
- (void)setNull_value:(int)arg1;
- (void)setNumber_value:(double)arg1;
- (void)setString_value:(NSString *)arg1;
- (void)setStruct_value:(_CPStruct *)arg1;
- (NSString *)string_value;
- (_CPStruct *)struct_value;
- (unsigned long long)whichKind;

@end
