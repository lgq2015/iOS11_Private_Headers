/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFSpringAnimationDelegate : NSObject {
    NSMutableArray * _completionBlocks;
}

@property (nonatomic, readonly) NSMutableArray *completionBlocks;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)completionBlocks;
- (void)dealloc;
- (id)init;

@end
