/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPackageManifestWriter : NSObject {
    BRCClientZone * _clientZone;
    NSError * _error;
    NSString * _stageID;
    NSOutputStream * _stream;
    NSURL * _url;
    PBMessageStreamWriter * _writer;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (void)_handleStreamError;
- (bool)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (bool)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (bool)addItem:(id)arg1;
- (bool)addLocalItem:(id)arg1;
- (bool)done;
- (id)error;
- (id)initWithZone:(id)arg1 stageID:(id)arg2 url:(id)arg3;
- (bool)stagePackageWithReader:(id)arg1 package:(id)arg2 xattrsPackage:(id)arg3 stageItemURL:(id)arg4 livefd:(int)arg5 recordName:(id)arg6;
- (id)url;

@end
