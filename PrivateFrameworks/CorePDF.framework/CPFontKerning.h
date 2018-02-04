/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontKerning : NSObject <CPDisposable> {
    const char * dataPtr;
    struct __CFDictionary { } * kernDictionary;
    struct __CFData { } * kernTable;
    unsigned int  kernTableLength;
    unsigned int  offset;
    bool  override;
    bool  valid;
}

- (struct __CFDictionary { }*)createKernTable;
- (void)dealloc;
- (void)dispose;
- (void)doKerningPair;
- (void)doOTSubtable;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doTTSubtable;
- (void)doTable;
- (void)finalize;
- (id)initWithCGFont:(struct CGFont { }*)arg1;
- (id)initWithKernData:(struct __CFData { }*)arg1;
- (unsigned char)readByte;
- (short)readShort;
- (unsigned int)readUnsignedLong;
- (unsigned short)readUnsignedShort;

@end
