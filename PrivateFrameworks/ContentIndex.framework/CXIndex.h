/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentIndex.framework/ContentIndex
 */

@interface CXIndex : NSObject {
    int  _cancel;
    NSString * _path;
    struct __SI { } * _skRef;
}

@property (nonatomic) int cancel;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) struct __SI { }*skRef;

+ (void)initialize;

- (bool)addContent:(id)arg1 metadata:(id)arg2 doc:(unsigned int)arg3 transaction:(unsigned int*)arg4;
- (bool)addContent:(id)arg1 metadata:(id)arg2 docName:(id)arg3 transaction:(unsigned int*)arg4;
- (bool)addContent:(id)arg1 transaction:(unsigned int*)arg2;
- (int)cancel;
- (int*)cancelPtr;
- (void)close:(unsigned int)arg1;
- (bool)commit;
- (bool)compact:(unsigned int)arg1;
- (bool)create:(unsigned int)arg1;
- (void)dealloc;
- (void)deleteDocument:(unsigned int)arg1;
- (void)deleteDocumentByName:(id)arg1;
- (bool)flush:(unsigned int)arg1;
- (id)initWithPath:(id)arg1;
- (bool)open:(unsigned int)arg1 recoveredTransactionId:(unsigned int*)arg2;
- (id)path;
- (void)setCancel:(int)arg1;
- (struct __SI {}**)siIndexPtr;
- (struct __SI { }*)skRef;

@end
