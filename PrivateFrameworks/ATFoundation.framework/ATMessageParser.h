/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATMessageParser : NSObject {
    unsigned long long  _curObjectLength;
    Class  _messageClass;
    void * _objectDataBuffer;
    unsigned long long  _objectDataLen;
    id /* block */  _objectParsedBlock;
    NSMutableData * _parserData;
    NSError * _parserError;
    BOOL  _varIntBuf;
    unsigned long long  _varIntDataLen;
}

@property (nonatomic, readonly) Class messageClass;
@property (nonatomic, copy) id /* block */ objectParsedBlock;
@property (nonatomic, readonly) NSError *parserError;

- (void).cxx_destruct;
- (bool)_parseObjectFromData:(id)arg1;
- (bool)_parseObjectLength:(const char *)arg1 length:(unsigned long long)arg2 bytesConsumed:(unsigned long long*)arg3;
- (void)dealloc;
- (id)initWithMessageClass:(Class)arg1;
- (Class)messageClass;
- (id /* block */)objectParsedBlock;
- (id)parserError;
- (bool)processData:(const char *)arg1 length:(long long)arg2;
- (void)setObjectParsedBlock:(id /* block */)arg1;

@end
