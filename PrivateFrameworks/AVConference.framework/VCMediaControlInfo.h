/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaControlInfo : NSObject {
    unsigned char  _bitmap;
    <VCMediaControlInfoDelegate> * _delegate;
    unsigned long long  _serializedSize;
}

@property <VCMediaControlInfoDelegate> *delegate;
@property (readonly) unsigned long long serializedSize;

- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg3;
- (id)delegate;
- (void)dispose;
- (int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned int)arg4;
- (bool)hasInfoType:(unsigned int)arg1;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg3;
- (void)invalidate;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3;
- (unsigned long long)serializedSize;
- (void)setDelegate:(id)arg1;
- (int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;

@end
