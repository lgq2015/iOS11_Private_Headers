/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaItemArtwork : NSObject <MPNowPlayingContentItemArtworkDataSource> {
    struct CGSize { 
        double width; 
        double height; 
    }  _bounds;
    id /* block */  _requestHandler;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageCropRect;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageCropRect;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithBoundsSize:(struct CGSize { double x1; double x2; })arg1 requestHandler:(id /* block */)arg2;
- (id)initWithImage:(id)arg1;
- (id)jpegDataWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (id)pngDataFromImage:(id)arg1;
- (id)pngDataWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
