/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICEvernoteResource : NSObject <NSSecureCoding> {
    NSData * _data;
    double  _duration;
    NSString * _fileName;
    double  _imageHeight;
    double  _imageWidth;
    bool  _isAttachment;
    NSString * _md5Hash;
    NSString * _mime;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (nonatomic) bool isAttachment;
@property (nonatomic, retain) NSString *md5Hash;
@property (nonatomic, retain) NSString *mime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (double)imageHeight;
- (double)imageWidth;
- (id)initWithCoder:(id)arg1;
- (bool)isAttachment;
- (id)md5Hash;
- (id)mime;
- (void)setData:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFileName:(id)arg1;
- (void)setImageHeight:(double)arg1;
- (void)setImageWidth:(double)arg1;
- (void)setIsAttachment:(bool)arg1;
- (void)setMd5Hash:(id)arg1;
- (void)setMime:(id)arg1;

@end
