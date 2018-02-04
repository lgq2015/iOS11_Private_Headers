/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICLetterpressImageCache : NSObject {
    NSMutableDictionary * _imageCache;
}

@property (nonatomic, retain) NSMutableDictionary *imageCache;

+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)imageCache;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2;
- (id)init;
- (void)setImageCache:(id)arg1;

@end
