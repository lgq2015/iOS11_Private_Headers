/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardPINFormat : NSObject <NSCopying, NSSecureCoding> {
    long long  _PINBitOffset;
    long long  _PINBlockByteLength;
    long long  _PINJustification;
    long long  _PINLengthBitOffset;
    long long  _PINLengthBitSize;
    long long  _charset;
    long long  _encoding;
    long long  _maxPINLength;
    long long  _minPINLength;
}

@property long long PINBitOffset;
@property long long PINBlockByteLength;
@property long long PINJustification;
@property long long PINLengthBitOffset;
@property long long PINLengthBitSize;
@property long long charset;
@property long long encoding;
@property long long maxPINLength;
@property long long minPINLength;

+ (void)_writeNumber:(unsigned long long)arg1 into:(id)arg2 bitOffset:(long long)arg3 bitLength:(long long)arg4;
+ (bool)supportsSecureCoding;

- (long long)PINBitOffset;
- (long long)PINBlockByteLength;
- (long long)PINJustification;
- (long long)PINLengthBitOffset;
- (long long)PINLengthBitSize;
- (long long)charset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)encoding;
- (bool)fillPIN:(id)arg1 intoAPDUTemplate:(id)arg2 PINByteOffset:(long long)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)maxPINLength;
- (long long)minPINLength;
- (void)setCharset:(long long)arg1;
- (void)setEncoding:(long long)arg1;
- (void)setMaxPINLength:(long long)arg1;
- (void)setMinPINLength:(long long)arg1;
- (void)setPINBitOffset:(long long)arg1;
- (void)setPINBlockByteLength:(long long)arg1;
- (void)setPINJustification:(long long)arg1;
- (void)setPINLengthBitOffset:(long long)arg1;
- (void)setPINLengthBitSize:(long long)arg1;

@end
