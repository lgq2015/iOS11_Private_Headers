/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    unsigned int  _CRC;
    <TSPCryptoInfo> * _decryptionInfo;
    unsigned long long  _encodedLength;
    struct { 
        unsigned int didCalculateIsReadable : 1; 
        unsigned int didCalculateEncodedLength : 1; 
        unsigned int didCalculateCRC : 1; 
        unsigned int isReadable : 1; 
        unsigned int isMissingData : 1; 
    }  _flags;
    TSPFilePackage * _package;
    NSString * _path;
}

- (void).cxx_destruct;
- (unsigned int)CRC;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (unsigned long long)encodedLength;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;
- (bool)isInPackage:(id)arg1;
- (bool)isMissingData;
- (bool)isReadable;
- (unsigned long long)length;
- (bool)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(bool)arg3;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)resetFlags;
- (void)setIsMissingData:(bool)arg1;
- (id)streamReadChannel;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg3 preferredFilename:(id)arg4;

@end
