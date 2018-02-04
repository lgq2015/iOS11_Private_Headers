/* made by EzioChiu
   Image: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
 */

@interface NKLibrary : NSObject {
    NSURL * _appSupportURL;
    NSArray * _assetsFromLaunch;
    NSURL * _contentURL;
    NKIssue * _currentlyReadingIssue;
    NSFileManager * _fileManager;
    bool  _inited;
    NSArray * _issues;
    NSMapTable * _issuesByDirectory;
    NSMapTable * _issuesByName;
    NSURL * _libraryURL;
    int  _needsSaving;
    int  _savePending;
}

@property (retain) NKIssue *currentlyReadingIssue;
@property (readonly) NSArray *downloadingAssets;
@property (readonly) NSArray *issues;

+ (bool)_isNewsstandApp;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedLibrary;

- (void)__actuallySave;
- (id)_appSupportURL;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (bool)_canPerformBackgroundDownloads;
- (id)_contentURL;
- (void)_didFinishLaunchingWasCalled;
- (id)_fileManager;
- (void)_issueChanged:(id)arg1;
- (id)_issueForDirectory:(id)arg1;
- (id)_libraryURL;
- (void)_load;
- (void)_markAsDirtyAndSave;
- (void)_markIssuesAndSave;
- (void)_performBackgroundTask:(id /* block */)arg1 withDescription:(id)arg2;
- (void)_saveIfNeeded;
- (void)_saveIfNeededAfterDelay:(double)arg1;
- (void)_saveNowIfNeeded;
- (void)_setIssues:(id)arg1;
- (id)addIssueWithName:(id)arg1 date:(id)arg2;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentlyReadingIssue;
- (id)description;
- (id)downloadingAssets;
- (id)init;
- (id)issueWithName:(id)arg1;
- (id)issues;
- (oneway void)release;
- (void)removeIssue:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setCurrentlyReadingIssue:(id)arg1;

@end
