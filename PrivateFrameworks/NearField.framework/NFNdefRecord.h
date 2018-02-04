/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFNdefRecord : NSObject <NFNdefRecord, NSSecureCoding> {
    unsigned char  _firstOctet;
    NSData * _identifier;
    NSData * _payload;
    NSData * _type;
}

@property (nonatomic) bool chunked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char header;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic) bool messageBegin;
@property (nonatomic) bool messageEnd;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) bool shortRecord;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;

+ (id)emptyRecord;
+ (id)recordWithTelephone:(id)arg1;
+ (id)recordWithText:(id)arg1 lang:(id)arg2;
+ (id)recordWithURI:(id)arg1;
+ (id)recordsFromBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (bool)_idLengthPresent;
- (void)_setIdLengthPresent:(bool)arg1;
- (id)asData;
- (bool)chunked;
- (void)dealloc;
- (id)decode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)header;
- (id)identifier;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNDEFRecord:(id)arg1;
- (bool)isURIRecord;
- (bool)messageBegin;
- (bool)messageEnd;
- (id)payload;
- (void)setChunked:(bool)arg1;
- (void)setHeader:(unsigned char)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageBegin:(bool)arg1;
- (void)setMessageEnd:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setShortRecord:(bool)arg1;
- (void)setType:(id)arg1;
- (void)setTypeNameFormat:(unsigned char)arg1;
- (bool)shortRecord;
- (id)type;
- (unsigned char)typeNameFormat;

@end
