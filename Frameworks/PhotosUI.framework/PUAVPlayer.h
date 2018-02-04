/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAVPlayer : AVPlayer {
    <PUAVPlayerDelegate> * _delegate;
    struct { 
        bool respondsToRateDidChange; 
        bool respondsToStatusDidChange; 
        bool respondsToDidDeallocate; 
    }  _delegateFlags;
}

@property (nonatomic) <PUAVPlayerDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;

@end
