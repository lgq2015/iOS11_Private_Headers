/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemDataThumbnailGenerator : NSObject {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_executeCompletionHandlerWithImage:(id)arg1;
- (id /* block */)completionHandler;
- (void)generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4 completionBlock:(id /* block */)arg5;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
