/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFrameContext : NSObject <ARResultDataContext> {
    ARImageData * _imageData;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _sessionOriginTransform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARImageData *imageData;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } sessionOriginTransform;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)imageData;
- (id)initWithImageData:(id)arg1;
- (id)resultDataOfClass:(Class)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })sessionOriginTransform;
- (void)setSessionOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
