/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIOpenURLAction : BSAction

@property (nonatomic, readonly, copy) NSURL *url;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithURL:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)url;

@end
