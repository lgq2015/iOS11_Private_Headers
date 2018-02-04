/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterAbsoluteVerdict : NEFilterVerdict <NSCopying, NSSecureCoding> {
    unsigned long long  _inboundPassOffset;
    unsigned long long  _inboundPeekOffset;
    unsigned long long  _outboundPassOffset;
    unsigned long long  _outboundPeekOffset;
}

@property unsigned long long inboundPassOffset;
@property unsigned long long inboundPeekOffset;
@property unsigned long long outboundPassOffset;
@property unsigned long long outboundPeekOffset;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)inboundPassOffset;
- (unsigned long long)inboundPeekOffset;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrop:(bool)arg1 inboundPassOffset:(unsigned long long)arg2 inboundPeekOffset:(unsigned long long)arg3 outboundPassOffset:(unsigned long long)arg4 outboundPeekOffset:(unsigned long long)arg5;
- (unsigned long long)outboundPassOffset;
- (unsigned long long)outboundPeekOffset;
- (void)setInboundPassOffset:(unsigned long long)arg1;
- (void)setInboundPeekOffset:(unsigned long long)arg1;
- (void)setOutboundPassOffset:(unsigned long long)arg1;
- (void)setOutboundPeekOffset:(unsigned long long)arg1;

@end
