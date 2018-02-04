/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface ImageRefSaver : NSObject {
    struct CGImage { } * imageRef;
    NSString * savePath;
}

@property (nonatomic) struct CGImage { }*imageRef;
@property (nonatomic, retain) NSString *savePath;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGImage { }*)imageRef;
- (void)saveImageAndRelease:(bool)arg1;
- (id)savePath;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setSavePath:(id)arg1;

@end
