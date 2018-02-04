/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface TopoNumberBadge : CALayer {
    long long  _count;
    UIFont * _font;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    id  _owningView;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
}

@property (nonatomic) long long count;
@property (nonatomic) id owningView;

+ (void)deallocImageCache;
+ (id)imageBadgeForCount:(long long)arg1;
+ (int)initImageCache;

- (void)calculateBadgeMetrics;
- (long long)count;
- (void)dealloc;
- (id)initWithOwningView:(id)arg1;
- (void)layoutSublayers;
- (struct CGImage { }*)newNumberBadge;
- (id)owningView;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (void)setCount:(long long)arg1;
- (void)setOwningView:(id)arg1;

@end
