/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNClassicThemeRecord : TSPObject {
    NSString * _UUID;
    NSMutableArray * _masters;
    KNClassicStylesheetRecord * _stylesheetRecord;
}

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, readonly) NSArray *masters;
@property (nonatomic, retain) KNClassicStylesheetRecord *stylesheetRecord;

- (void).cxx_destruct;
- (id)UUID;
- (void)addMaster:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromArchive:(const struct ClassicThemeRecordArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)masters;
- (void)saveToArchive:(struct ClassicThemeRecordArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setStylesheetRecord:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)stylesheetRecord;

@end
