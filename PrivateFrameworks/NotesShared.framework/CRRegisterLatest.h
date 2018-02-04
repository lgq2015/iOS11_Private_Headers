/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRRegisterLatest : CRRegister {
    <CRDataType> * _contents;
    CRTimestamp * _timestamp;
}

@property (nonatomic, retain) CRTimestamp *timestamp;

- (void).cxx_destruct;
- (void)_setContents:(id)arg1;
- (id)contents;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeIntoProtobufRegisterLatest:(struct RegisterLatest { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Timestamp {} *x5; struct ObjectID {} *x6; }*)arg1 coder:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (id)initWithContents:(id)arg1 timestamp:(id)arg2 document:(id)arg3;
- (id)initWithProtobufRegisterLatest:(const struct RegisterLatest { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Timestamp {} *x5; struct ObjectID {} *x6; }*)arg1 decoder:(id)arg2;
- (bool)isEqualContents:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)mergeWithRegisterLatest:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)walkGraph:(id /* block */)arg1;

@end
