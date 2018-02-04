/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkResizeUtility : NSObject {
    NSObject<OS_dispatch_queue> * _artworkResizingAccessQueue;
    NSOperationQueue * _artworkResizingOperationQueue;
    NSMapTable * _artworkResizingOperations;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue;
@property (nonatomic, retain) NSOperationQueue *artworkResizingOperationQueue;
@property (nonatomic, retain) NSMapTable *artworkResizingOperations;

- (void).cxx_destruct;
- (id)artworkResizingAccessQueue;
- (id)artworkResizingOperationQueue;
- (id)artworkResizingOperations;
- (void)cancelResizeImage:(id)arg1;
- (id)init;
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2 useExactFittingSizeAsDestinationSize:(bool)arg3 saveToDestinationURL:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setArtworkResizingAccessQueue:(id)arg1;
- (void)setArtworkResizingOperationQueue:(id)arg1;
- (void)setArtworkResizingOperations:(id)arg1;

@end
