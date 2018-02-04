/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPRemoteCommandTarget : NSObject {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithTargetBlock:(id /* block */)arg1;
- (long long)invokeWithRemoteCommandEvent:(id)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
