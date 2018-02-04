/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowContextRegistry : NSObject {
    NSMutableArray * __displayContexts;
}

@property (setter=_setDisplayContexts:, nonatomic, retain) NSMutableArray *_displayContexts;
@property (nonatomic, readonly) <PUSlideshowDisplayContext> *currentDisplayContext;
@property (nonatomic, readonly, copy) NSArray *displayContexts;

- (void).cxx_destruct;
- (id)_displayContexts;
- (void)_setDisplayContexts:(id)arg1;
- (bool)addDisplayContext:(id)arg1;
- (id)currentDisplayContext;
- (id)displayContexts;
- (id)init;
- (bool)removeDisplayContext:(id)arg1;

@end
