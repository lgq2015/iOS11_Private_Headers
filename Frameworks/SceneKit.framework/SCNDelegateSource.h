/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNDelegateSource : SCNImageSource {
    id  _delegate;
}

@property (nonatomic, retain) id delegate;

- (void)dealloc;
- (id)delegate;
- (bool)isOpaque;
- (void)setDelegate:(id)arg1;
- (id)textureSource;

@end
