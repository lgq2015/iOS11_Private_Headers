/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUClientQueueSession : NSObject {
    long long  _count;
    NSArray * _downloadKinds;
    SSDownloadManagerOptions * _managerOptions;
    id  _queue;
}

@property (nonatomic) long long count;
@property (nonatomic, copy) NSArray *downloadKinds;
@property (nonatomic, copy) SSDownloadManagerOptions *managerOptions;
@property (nonatomic, retain) id queue;

- (long long)count;
- (void)dealloc;
- (id)downloadKinds;
- (id)initWithQueue:(id)arg1;
- (id)managerOptions;
- (id)queue;
- (void)setCount:(long long)arg1;
- (void)setDownloadKinds:(id)arg1;
- (void)setManagerOptions:(id)arg1;
- (void)setQueue:(id)arg1;

@end
