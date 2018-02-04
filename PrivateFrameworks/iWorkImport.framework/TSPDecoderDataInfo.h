/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo> {
    TSPDataMetadata * _dataMetadata;
    TSPDigest * _digest;
    NSString * _documentResourceLocator;
    NSString * _externalFilePath;
    long long  _identifier;
    NSString * _preferredFilename;
}

@property (nonatomic, retain) TSPDataMetadata *dataMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSPDigest *digest;
@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) NSString *externalFilePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) NSString *preferredFilename;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataMetadata;
- (id)digest;
- (id)documentResourceLocator;
- (id)externalFilePath;
- (long long)identifier;
- (id)init;
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5;
- (id)initWithMessage:(const struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1;
- (id)preferredFilename;
- (void)setDataMetadata:(id)arg1;

@end
