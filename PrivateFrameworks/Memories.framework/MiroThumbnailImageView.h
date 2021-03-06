/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroThumbnailImageView : UIImageView {
    NSArray * _containerViewConstraints;
    int  _frameTime;
}

@property (nonatomic, retain) NSArray *containerViewConstraints;
@property (nonatomic) int frameTime;

- (void).cxx_destruct;
- (id)containerViewConstraints;
- (int)frameTime;
- (void)setContainerViewConstraints:(id)arg1;
- (void)setFrameTime:(int)arg1;

@end
