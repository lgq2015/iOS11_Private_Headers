/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPObjectInfoDataset : NSObject {
    unsigned int  _associationDesc;
    unsigned short  _associationType;
    NSString * _captureDate;
    NSString * _filename;
    unsigned int  _imageBitDepth;
    unsigned int  _imagePixHeight;
    unsigned int  _imagePixWidth;
    NSString * _keywords;
    NSString * _modificationDate;
    unsigned long long  _objectCompressedSize;
    unsigned short  _objectFormat;
    unsigned int  _objectHandle;
    unsigned int  _parentObject;
    unsigned short  _protectionStatus;
    unsigned int  _sequenceNumber;
    unsigned int  _storageID;
    unsigned int  _thmFileSize;
    unsigned int  _thumbCompressedSize;
    unsigned short  _thumbFormat;
    unsigned int  _thumbOffset;
    unsigned int  _thumbPixHeight;
    unsigned int  _thumbPixWidth;
}

- (unsigned int)associationDesc;
- (unsigned short)associationType;
- (id)captureDate;
- (id)content;
- (id)content:(int)arg1;
- (void)contentLength:(unsigned int*)arg1 bufferLength:(unsigned int*)arg2 contentType:(int)arg3;
- (bool)contentLengthValid:(unsigned int)arg1 forContentType:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)filename;
- (unsigned int)imageBitDepth;
- (unsigned int)imagePixHeight;
- (unsigned int)imagePixWidth;
- (id)init;
- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2 contentType:(int)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(int)arg2;
- (id)keywords;
- (id)modificationDate;
- (unsigned int)objectBufferSizeForContentType:(int)arg1;
- (unsigned int)objectCompressedSize;
- (unsigned long long)objectCompressedSize64;
- (unsigned int)objectContentSizeForContentType:(int)arg1;
- (unsigned short)objectFormat;
- (unsigned int)objectHandle;
- (unsigned int)parentObject;
- (unsigned short)protectionStatus;
- (unsigned int)sequenceNumber;
- (void)setAssociationDesc:(unsigned int)arg1;
- (void)setAssociationType:(unsigned short)arg1;
- (void)setCaptureDate:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setImageBitDepth:(unsigned int)arg1;
- (void)setImagePixHeight:(unsigned int)arg1;
- (void)setImagePixWidth:(unsigned int)arg1;
- (void)setKeywords:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setObjectCompressedSize:(unsigned long long)arg1;
- (void)setObjectFormat:(unsigned short)arg1;
- (void)setObjectHandle:(unsigned int)arg1;
- (void)setParentObject:(unsigned int)arg1;
- (void)setProtectionStatus:(unsigned short)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStorageID:(unsigned int)arg1;
- (void)setThmFileSize:(unsigned int)arg1;
- (void)setThumbCompressedSize:(unsigned int)arg1;
- (void)setThumbFormat:(unsigned short)arg1;
- (void)setThumbOffset:(unsigned int)arg1;
- (void)setThumbPixHeight:(unsigned int)arg1;
- (void)setThumbPixWidth:(unsigned int)arg1;
- (unsigned int)storageID;
- (unsigned int)thmFileSize;
- (unsigned int)thumbCompressedSize;
- (unsigned short)thumbFormat;
- (unsigned int)thumbOffset;
- (unsigned int)thumbPixHeight;
- (unsigned int)thumbPixWidth;

@end
