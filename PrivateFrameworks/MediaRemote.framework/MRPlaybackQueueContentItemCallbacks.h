/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueueContentItemCallbacks : NSObject {
    NSMutableArray * _callbacks;
}

@property (nonatomic, readonly) NSArray *callbacks;
@property (nonatomic, readonly) unsigned long long count;

- (void*)addCallback:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)callbacks;
- (unsigned long long)count;
- (void)dealloc;
- (bool)remove:(void*)arg1;

@end
