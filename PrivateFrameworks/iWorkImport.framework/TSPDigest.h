/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDigest : NSObject <NSCopying> {
    struct array<unsigned char, 20> { 
        unsigned char __elems_[20]; 
    }  _digestData;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{array<unsigned char' */ struct *digestData; /* unknown property attribute:  20>=[20C]} */
@property (nonatomic, readonly) NSString *digestString;

+ (id)digestFromNSData:(id)arg1;
+ (id)digestWithDigestString:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (const struct array<unsigned char, 20> { unsigned char x1[20]; }*)digestData;
- (id)digestString;
- (unsigned long long)hash;
- (id)init;
- (id)initFromBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initFromNSData:(id)arg1;
- (id)initFromProtobufString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
- (id)initFromSHA1Context:(struct CC_SHA1state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[16]; int x9; }*)arg1;
- (id)initWithDigestString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;

@end
