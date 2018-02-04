/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLTFileThumbnailRequest : QLTThumbnailRequest {
    NSURL * _url;
}

@property (readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4;
- (id)url;

@end
