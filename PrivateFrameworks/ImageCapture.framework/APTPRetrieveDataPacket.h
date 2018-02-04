/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface APTPRetrieveDataPacket : NSObject {
    NSMutableDictionary * _objectData;
    unsigned short  _operationCode;
    NSMutableIndexSet * _operationCommands;
}

@property (readonly) unsigned short commandCount;
@property (readonly) unsigned long long objectCount;
@property (readonly, copy) NSDictionary *objectData;
@property (readonly) unsigned short operationCode;
@property (readonly, copy) NSIndexSet *operationCommands;

- (void)addData:(id)arg1 ofType:(unsigned short)arg2 forObjectHandle:(unsigned int)arg3;
- (void)clearData;
- (unsigned short)commandCount;
- (id)content;
- (void)dealloc;
- (id)init;
- (id)initWithContent:(id)arg1;
- (unsigned long long)objectCount;
- (id)objectData;
- (unsigned short)operationCode;
- (id)operationCommands;

@end
