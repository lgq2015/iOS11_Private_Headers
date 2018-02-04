/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker> {
    unsigned long long  _selectionAffinity;
    struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { 
        struct pair<TopoID, TopoID> {} *__begin_; 
        struct pair<TopoID, TopoID> {} *__end_; 
        struct __compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { 
            struct pair<TopoID, TopoID> {} *__first_; 
        } __end_cap_; 
    }  _selectionRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectionAffinity;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Selection { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<topotext::Selection_Range> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; int x7; }*)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct Selection { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<topotext::Selection_Range> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; int x7; }*)arg1;
- (unsigned long long)selectionAffinity;
- (struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> {} *x1; struct pair<TopoID, TopoID> {} *x2; struct __compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> {} *x_3_1_1; } x3; }*)selectionRanges;
- (id)serialize;
- (void)setSelectionAffinity:(unsigned long long)arg1;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg2;

@end
