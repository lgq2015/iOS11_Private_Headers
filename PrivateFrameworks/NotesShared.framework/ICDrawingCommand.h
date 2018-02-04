/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingCommand : NSObject {
    ICDrawingCommandData * _data;
    bool  _hidden;
    struct TopoID { 
        NSUUID *replicaID; 
        unsigned int clock; 
    }  _timestamp;
}

@property (nonatomic, readonly) ICDrawingCommandData *data;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) struct TopoID { id x1; } timestamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (bool)hidden;
- (id)initWithArchive:(const struct Command { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CommandID {} *x5; struct Color {} *x6; struct Point {} *x7; struct RepeatedPtrField<drawing::Point> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CommandID {} *x9; struct Rectangle {} *x10; struct Point {} *x11; struct Point {} *x12; struct Parameters {} *x13; unsigned int x14; }*)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (id)initWithCommand:(id)arg1 hidden:(bool)arg2 timestamp:(struct TopoID { id x1; })arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualDrawingCommand:(id)arg1;
- (unsigned int)saveToArchive:(struct Command { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CommandID {} *x5; struct Color {} *x6; struct Point {} *x7; struct RepeatedPtrField<drawing::Point> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CommandID {} *x9; struct Rectangle {} *x10; struct Point {} *x11; struct Point {} *x12; struct Parameters {} *x13; unsigned int x14; }*)arg1 sortedUUIDs:(id)arg2 withPathData:(bool)arg3;
- (struct TopoID { id x1; })timestamp;

@end
