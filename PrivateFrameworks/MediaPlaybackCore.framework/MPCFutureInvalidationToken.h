/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCFutureInvalidationToken : NSObject <NSCopying> {
    MPCFuture * _future;
}

@property (nonatomic, retain) MPCFuture *future;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)future;
- (void)setFuture:(id)arg1;

@end
