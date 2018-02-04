/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLMicroBlogStatus : NSObject <NSSecureCoding> {
    NSArray * _imageAssetURLs;
    NSArray * _imageData;
    NSString * _inReplyToStatusID;
    NSString * _maskedApplicationID;
    NSString * _statusText;
}

@property (nonatomic, retain) NSArray *imageAssetURLs;
@property (nonatomic, retain) NSArray *imageData;
@property (nonatomic, retain) NSString *inReplyToStatusID;
@property (nonatomic, retain) NSString *maskedApplicationID;
@property (nonatomic, retain) NSString *statusText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageAssetURLs;
- (id)imageData;
- (id)inReplyToStatusID;
- (id)initWithCoder:(id)arg1;
- (void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)maskedApplicationID;
- (void)setImageAssetURLs:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setInReplyToStatusID:(id)arg1;
- (void)setMaskedApplicationID:(id)arg1;
- (void)setStatusText:(id)arg1;
- (id)statusText;

@end
