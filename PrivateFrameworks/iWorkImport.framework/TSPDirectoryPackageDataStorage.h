/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {
    unsigned long long  _cachedEncodedLength;
    <TSPCryptoInfo> * _decryptionInfo;
    bool  _gilligan_isRemote;
    bool  _isMissingData;
    TSPDirectoryPackage * _package;
    unsigned char  _packageIdentifier;
    NSString * _path;
}

@property (nonatomic, readonly) TSPDirectoryPackage *package;

- (void).cxx_destruct;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (unsigned long long)encodedLength;
- (bool)gilligan_isRemote;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;
- (bool)isInPackage:(id)arg1;
- (bool)isMissingData;
- (unsigned long long)length;
- (bool)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(bool)arg3;
- (id)package;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (void)setGilligan_isRemote:(bool)arg1;
- (void)setIsMissingData:(bool)arg1;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg3 preferredFilename:(id)arg4;

@end
