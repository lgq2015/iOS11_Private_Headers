/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRTimestamp : NSObject <CRCoding, CRDataType, CREquatable, NSCopying> {
    long long  _counter;
    NSUUID * _replica;
}

@property (nonatomic) long long counter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *replica;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)counter;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)earlierTimestamp:(id)arg1;
- (void)encodeIntoProtobufTimestamp:(struct Timestamp { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; long long x6; }*)arg1 coder:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithProtobufTimestamp:(const struct Timestamp { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; long long x6; }*)arg1 decoder:(id)arg2;
- (id)initWithReplica:(id)arg1 andCounter:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimestamp:(id)arg1;
- (id)laterTimestamp:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)nextTimestamp;
- (id)nextTimestampForReplica:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)replica;
- (void)setCounter:(long long)arg1;
- (void)setDocument:(id)arg1;
- (void)setReplica:(id)arg1;
- (id)shortDescription;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
