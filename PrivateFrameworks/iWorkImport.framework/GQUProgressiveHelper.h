/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUProgressiveHelper : NSObject {
    struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * mCallBacks;
    const void * mClient;
    struct __CFString { } * mNumbersSheetUri;
    float  mPreviewHeight;
    float  mPreviewWidth;
    bool  mStartedMainHTML;
    unsigned char  started;
}

- (void)appendDataToAttachment:(struct __CFURL { }*)arg1 chunk:(struct __CFData { }*)arg2;
- (void)closeAttachment:(struct __CFURL { }*)arg1;
- (struct __CFURL { }*)createAttachment:(struct __CFString { }*)arg1 options:(struct __CFDictionary { }*)arg2;
- (void)dealloc;
- (void)displayGenericError:(struct __CFError { }*)arg1;
- (struct __CFString { }*)getNumbersSheetUri;
- (float)getPreviewHeight;
- (float)getPreviewWidth;
- (id)initWithClient:(const void*)arg1 andCallbacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (bool)previewHasStreamedMainHTML;
- (bool)progressiveStreamStarted;
- (void)setNumbersSheetUri:(struct __CFString { }*)arg1;
- (void)setPreviewHeight:(float)arg1 andWidth:(float)arg2;
- (void)startDataWithOptions:(struct __CFDictionary { }*)arg1;

@end
