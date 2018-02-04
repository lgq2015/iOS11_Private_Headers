/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBReader : OCBReader {
    const void * mBuffer;
    bool  mIsFileStructuredStorage;
    NSString * mTemporaryDirectory;
    bool  mUseStringOptimization;
    struct XlObjectFactory { int (**x1)(); struct XlEshObjectFactory {} *x2; } * mXlObjectFactory;
}

@property (nonatomic) bool isFileStructuredStorage;
@property (nonatomic, retain) NSString *temporaryDirectory;
@property (nonatomic) bool useStringOptimization;
@property (nonatomic, readonly) struct XlBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct SsrwOORootStorage {} *x4; struct SsrwOOStorage {} *x5; struct XlEshBinaryReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; struct XlReadStgStream {} *x_6_1_13; } x6; struct XlStringExtractor {} *x7; struct XlSheetInfoTable {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; }*xlReader;

- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (void)dealloc;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (bool)isFileStructuredStorage;
- (id)read;
- (void)setIsFileStructuredStorage:(bool)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (void)setUseStringOptimization:(bool)arg1;
- (bool)start;
- (id)temporaryDirectory;
- (bool)useStringOptimization;
- (struct XlBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct SsrwOORootStorage {} *x4; struct SsrwOOStorage {} *x5; struct XlEshBinaryReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; struct XlReadStgStream {} *x_6_1_13; } x6; struct XlStringExtractor {} *x7; struct XlSheetInfoTable {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; }*)xlReader;

@end
