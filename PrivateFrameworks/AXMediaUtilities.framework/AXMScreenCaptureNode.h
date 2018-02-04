/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMScreenCaptureNode : AXMSourceNode {
    AXMScreenGrabber * _screenGrabber;
}

@property (nonatomic, retain) AXMScreenGrabber *screenGrabber;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (id)screenGrabber;
- (void)setScreenGrabber:(id)arg1;
- (void)triggerWithScreenCaptureRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interfaceOrientation:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(id /* block */)arg5;

@end
