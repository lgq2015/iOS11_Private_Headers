/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface APTPRequestDataPacket : NSObject {
    NSMutableArray * _objectHandles;
    unsigned short  _operationCode;
    NSMutableDictionary * _operationCommandParamaters;
    NSMutableIndexSet * _operationCommands;
}

@property (readonly) unsigned short commandCount;
@property (readonly) unsigned long long objectCount;
@property (readonly, copy) NSArray *objectHandles;
@property (readonly) unsigned short operationCode;
@property (readonly, copy) NSIndexSet *operationCommands;

- (void)addCommand:(id)arg1;
- (void)addObjectHandle:(unsigned int)arg1;
- (void)clearCommands;
- (void)clearObjectHandles;
- (unsigned short)commandCount;
- (id)content;
- (void)dealloc;
- (id)init;
- (id)initWithContent:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)objectCount;
- (id)objectHandles;
- (unsigned short)operationCode;
- (id)operationCommands;

@end
