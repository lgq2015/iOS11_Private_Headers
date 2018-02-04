/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSScreenCapturerPresentationOptions : NSObject {
    unsigned long long  _presentationMode;
}

@property (nonatomic) unsigned long long presentationMode;

- (id)description;
- (unsigned long long)presentationMode;
- (void)setPresentationMode:(unsigned long long)arg1;

@end
