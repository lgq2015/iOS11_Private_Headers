/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDAttachmentHandler : NSObject {
    bool  _compressOnAttach;
    NSObject<OS_os_log> * _log;
}

@property bool compressOnAttach;
@property (retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)_createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4 withRootDir:(id)arg5;
- (id)_processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3 rootDir:(id)arg4;
- (id)collectedGroupsForSession:(id)arg1 matchingExtensinos:(id)arg2;
- (bool)compressOnAttach;
- (id)createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4;
- (id)dedDirectory;
- (id)directoryForBugSession:(id)arg1;
- (id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3;
- (id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 createIfNeeded:(bool)arg4;
- (id)directoryForBugSession:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(bool)arg3;
- (unsigned long long)directorySizeForBugSession:(id)arg1;
- (id)init;
- (id)log;
- (id)processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3;
- (void)removeDEFiles:(id)arg1 inSession:(id)arg2;
- (void)removeDirectoryForBugSession:(id)arg1;
- (void)setCompressOnAttach:(bool)arg1;
- (void)setLog:(id)arg1;

@end
