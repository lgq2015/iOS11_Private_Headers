/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMProgressiveArchiveManager : CMStylingArchiveManager {
    struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * mCallBacks;
    const void * mClient;
    NSMutableDictionary * mDataCache;
    NSMutableString * mHtmlLogString;
    NSDate * mLastCommitDate;
    bool  mMainDataInited;
    NSDate * mStartDate;
}

- (void).cxx_destruct;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (id)initWithClient:(const void*)arg1 andCallBacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (bool)isCancelled;
- (bool)isProgressive;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;

@end
