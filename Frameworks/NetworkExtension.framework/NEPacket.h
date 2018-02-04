/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPacket : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NEFlowMetaData * _metadata;
    unsigned char  _protocolFamily;
}

@property (readonly, copy) NSData *data;
@property (readonly) NEFlowMetaData *metadata;
@property (readonly) unsigned char protocolFamily;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 metadata:(id)arg3;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 signingIdentifier:(id)arg3 processUUID:(id)arg4;
- (id)metadata;
- (unsigned char)protocolFamily;

@end
