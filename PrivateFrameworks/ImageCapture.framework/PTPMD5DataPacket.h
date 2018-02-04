/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPMD5DataPacket : NSObject {
    long long  _bufferSize;
    long long  _bytesTransferred;
    id  _data;
    <PTPDataPacketDataSource> * _dataSource;
    int  _fd;
    NSString * _filepath;
    NSData * _md5;
    long long  _offsetInBuffer;
    unsigned short  _operationCode;
    struct _PTPRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned int  _transactionID;
}

- (long long)bufferSize;
- (long long)bytesTransferred;
- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned int)arg2;
- (long long)copyFromBuffer:(void*)arg1 numBytes:(long long)arg2;
- (long long)copyToBuffer:(void*)arg1 numBytes:(long long)arg2;
- (long long)copyToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)filepath;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 andData:(id)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 andDataSource:(id)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 andFilepath:(id)arg3;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (long long)offsetInBuffer;
- (unsigned short)operationCode;
- (struct _PTPRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setBytesTransferred:(long long)arg1;
- (void)setData:(id)arg1;
- (void)setOperationCode:(unsigned short)arg1;
- (int)setRange:(struct _PTPRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;

@end
