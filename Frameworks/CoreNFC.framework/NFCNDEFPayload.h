/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCNDEFPayload : NSObject <NSSecureCoding> {
    NSData * _identifier;
    NSData * _payload;
    NSData * _type;
    unsigned char  _typeNameFormat;
}

@property (nonatomic, copy) NSData *identifier;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic, copy) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatType:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (id)payload;
- (void)setIdentifier:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setType:(id)arg1;
- (void)setTypeNameFormat:(unsigned char)arg1;
- (id)type;
- (unsigned char)typeNameFormat;

@end
