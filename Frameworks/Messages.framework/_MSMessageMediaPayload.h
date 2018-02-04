/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageMediaPayload : NSObject <NSSecureCoding> {
    NSString * _accessibilityLabel;
    NSDictionary * _attributionInfo;
    NSData * _data;
    UIImage * _image;
    bool  _isSticker;
    NSData * _mediaData;
    NSString * _mediaFilename;
    NSString * _mediaType;
    NSURL * _mediaURL;
    NSString * _text;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSDictionary *attributionInfo;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isSticker;
@property (nonatomic, copy) NSData *mediaData;
@property (nonatomic, copy) NSString *mediaFilename;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSURL *mediaURL;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)attributionInfo;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSticker:(id)arg1;
- (bool)isSticker;
- (id)mediaData;
- (id)mediaFilename;
- (id)mediaType;
- (id)mediaURL;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAttributionInfo:(id)arg1;
- (void)setData:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsSticker:(bool)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaFilename:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
