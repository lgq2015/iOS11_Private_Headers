/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSGlobalLinkMessage : NSObject {
    struct IDSGlobalLinkAttribute { 
        unsigned short type; 
        unsigned short len; 
        union { 
            struct sockaddr_storage { 
                unsigned char ss_len; 
                unsigned char ss_family; 
                BOOL __ss_pad1[6]; 
                long long __ss_align; 
                BOOL __ss_pad2[112]; 
            } ss; 
            unsigned short u16; 
            unsigned int u32; 
            unsigned long long u64; 
            struct IDSGLAttrBinaryData_ { 
                int len; 
                unsigned char data[512]; 
            } binaryData; 
        } value; 
    }  _attributes;
    long long  _command;
    NSData * _hmacKeyData;
    int  _numAttribute;
}

@property (nonatomic, readonly) long long command;
@property (readonly) NSData *hmacKeyData;

+ (id)messageWithBuffer:(char *)arg1 length:(int)arg2;
+ (id)messageWithCommand:(long long)arg1 attributes:(id)arg2;

- (void).cxx_destruct;
- (void)_addAddressAttribute:(long long)arg1 value:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2;
- (bool)_addAttribute:(struct IDSGlobalLinkAttribute { unsigned short x1; unsigned short x2; union { struct sockaddr_storage { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[6]; long long x_1_2_4; BOOL x_1_2_5[112]; } x_3_1_1; unsigned short x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; struct IDSGLAttrBinaryData_ { int x_5_2_1; unsigned char x_5_2_2[512]; } x_3_1_5; } x3; }*)arg1;
- (void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2;
- (void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2;
- (void)_addUInt32Attribute:(long long)arg1 value:(unsigned int)arg2;
- (void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2;
- (long long)command;
- (void)dealloc;
- (bool)getAttribute:(long long)arg1 attribute:(struct IDSGlobalLinkAttribute { unsigned short x1; unsigned short x2; union { struct sockaddr_storage { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[6]; long long x_1_2_4; BOOL x_1_2_5[112]; } x_3_1_1; unsigned short x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; struct IDSGLAttrBinaryData_ { int x_5_2_1; unsigned char x_5_2_2[512]; } x_3_1_5; } x3; }*)arg2;
- (id)hmacKeyData;
- (id)initWithCommand:(long long)arg1;
- (bool)read:(char *)arg1 inputLength:(int)arg2;
- (void)setAttributes:(id)arg1;
- (bool)verifyHMacDigestWithKey:(id)arg1 inputBuffer:(char *)arg2 inputLength:(int)arg3;
- (bool)write:(char *)arg1 outputLength:(int*)arg2;

@end
