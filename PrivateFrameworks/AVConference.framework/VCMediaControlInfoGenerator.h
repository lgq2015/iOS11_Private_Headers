/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate> {
    struct __CFDictionary { } * _callbacksDict;
    NSMutableArray * _controlInfoPool;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _controlInfoPoolLock;
    unsigned int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned int type;

- (void)dealloc;
- (int)deregisterCallbacksWithContext:(void*)arg1;
- (void)disposeControlInfo:(id)arg1;
- (id)initWithType:(unsigned int)arg1;
- (void*)newControlInfo;
- (id)newControlInfoFromPool;
- (void*)newControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg3;
- (void*)newMediaControlInfo;
- (void*)newMediaControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg3;
- (int)registerFillBlobCallback:(int (*)arg1 processBlobCallback:(int (*)arg2 context:(void*)arg3;
- (unsigned int)type;

@end
