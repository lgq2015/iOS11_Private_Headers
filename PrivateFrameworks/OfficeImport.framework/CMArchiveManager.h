/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMArchiveManager : NSObject <TCCancelDelegate> {
    bool  mAutoCommit;
    double  mCommitInterval;
    NSMutableDictionary * mDrawableCache;
    int  mHeight;
    bool  mIsOnPhone;
    bool  mIsThumbnail;
    unsigned long long  mPageCount;
    NSString * mPassphrase;
    NSMutableSet * mPausedPaths;
    NSString * mResourcePathPrefix;
    NSCache * mStyleObjectCache;
    int  mWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *passphrase;
@property (readonly) Class superclass;

+ (int)blipTypeToResourceType:(int)arg1;
+ (id)resourceTypeToExtension:(int)arg1;
+ (id)resourceTypeToMIME:(int)arg1;

- (void).cxx_destruct;
- (id)_validateData:(id)arg1 withType:(int*)arg2;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withName:(id)arg2 type:(int)arg3;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)addStyle:(id)arg1;
- (id)appendResourcePathToName:(id)arg1;
- (id)cachedPathForDrawable:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (id)copyResourceWithType:(int)arg1;
- (id)cssStylesheetString;
- (id)init;
- (bool)isCancelled;
- (bool)isOnPhone;
- (bool)isProgressive;
- (bool)isThumbnail;
- (unsigned long long)pageCount;
- (id)passphrase;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (bool)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (unsigned long long)resourceCount;
- (id)resourcePathPrefix;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)setAutoCommit:(bool)arg1;
- (void)setCommitInterval:(double)arg1;
- (void)setHTMLHeight:(int)arg1;
- (void)setHTMLWidth:(int)arg1;
- (void)setIsOnPhone:(bool)arg1;
- (void)setIsThumbnail:(bool)arg1;
- (void)setPageCount:(unsigned long long)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setResourcePathPrefix:(id)arg1;

@end
