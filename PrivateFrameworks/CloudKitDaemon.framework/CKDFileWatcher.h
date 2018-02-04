/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFileWatcher : NSObject {
    int  _fd;
    NSString * _path;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic) int fd;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *source;

+ (id)queue;

- (void).cxx_destruct;
- (void)dealloc;
- (int)fd;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setFd:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
