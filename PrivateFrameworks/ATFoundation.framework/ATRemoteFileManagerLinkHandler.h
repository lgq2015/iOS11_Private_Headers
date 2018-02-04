/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATRemoteFileManagerLinkHandler : NSObject <ATMessageLinkRequestHandler> {
    NSFileManager * _fm;
    NSString * _rootPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *rootPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyItems:(id)arg1;
- (id)_createDirectory:(id)arg1;
- (id)_directoryContents:(id)arg1;
- (id)_downloadFile:(id)arg1;
- (id)_freeSpace:(id)arg1;
- (id)_moveItems:(id)arg1;
- (id)_path:(id)arg1;
- (id)_progress:(id)arg1;
- (id)_removeItems:(id)arg1;
- (id)_uploadFile:(id)arg1;
- (id)_usage:(id)arg1;
- (id)initWithRootPath:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)rootPath;
- (void)setRootPath:(id)arg1;

@end
