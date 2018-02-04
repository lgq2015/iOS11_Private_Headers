/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioArtwork : NSObject <NSCopying> {
    NSURL * _URL;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pointSize;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithArtworkURL:(id)arg1 pixelSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (struct CGSize { double x1; double x2; })pointSize;

@end
