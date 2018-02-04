/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFUUDecoder : MFBaseFilterDataConsumer {
    unsigned long long  _begin;
    bool  _beginComplete;
    bool  _dataComplete;
    unsigned char  _encoded;
    unsigned long long  _end;
    unsigned long long  _length;
    bool  _lineComplete;
    bool  _passthrough;
    unsigned long long  _readBytes;
    bool  _validLength;
}

- (long long)appendData:(id)arg1;
- (void)done;

@end
