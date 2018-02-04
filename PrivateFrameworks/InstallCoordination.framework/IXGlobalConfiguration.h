/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXGlobalConfiguration : NSObject {
    unsigned int  _gid;
    NSURL * _mobileHome;
    NSURL * _rootPath;
    NSURL * _systemContainerPath;
    unsigned int  _uid;
}

@property (nonatomic, readonly) NSURL *dataDirectory;
@property (nonatomic, readonly) NSURL *frameworkURL;
@property (nonatomic, readonly) unsigned int gid;
@property (nonatomic, readonly) NSURL *mobileHome;
@property (nonatomic, readonly) NSURL *oldSupportDirectory;
@property (nonatomic, readonly) NSURL *promiseStagingRootDirectory;
@property (nonatomic, readonly) NSURL *rootPath;
@property (nonatomic, readonly) NSURL *systemContainerPath;
@property (nonatomic, readonly) unsigned int uid;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)createDirectories;
- (id)dataDirectory;
- (id)frameworkURL;
- (unsigned int)gid;
- (id)init;
- (id)mobileHome;
- (id)oldSupportDirectory;
- (id)promiseStagingRootDirectory;
- (id)rootPath;
- (id)systemContainerPath;
- (unsigned int)uid;

@end
