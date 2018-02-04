/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {
    unsigned int  _generationID;
    NSData * _signature;
}

@property (nonatomic, readonly) const char *UTF8String;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *fsGenerationID;
@property (nonatomic, readonly) NSString *generationIDString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *signature;
@property (readonly) Class superclass;

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (const char *)UTF8String;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fsGenerationID;
- (id)generationIDString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFSGenerationID:(unsigned int)arg1;
- (id)initWithRelativePath:(id)arg1;
- (id)initWithSignature:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFSGenerationID:(unsigned int)arg1;
- (bool)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2;
- (id)signature;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
