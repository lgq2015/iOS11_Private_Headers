/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKFileUploadItem : NSObject {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _fileURL;
}

@property (nonatomic, readonly) UIImage *displayImage;
@property (nonatomic, readonly) NSURL *fileURL;
@property (getter=isVideo, nonatomic, readonly) bool video;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)displayImage;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (bool)isVideo;

@end
