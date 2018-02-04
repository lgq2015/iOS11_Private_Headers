/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXContentType : NSObject {
    NSString * mContentType;
    NSString * mExtension;
    NSString * mPath;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *path;

- (id)contentType;
- (void)dealloc;
- (id)initWithContentType:(id)arg1 extension:(id)arg2;
- (id)initWithContentType:(id)arg1 path:(id)arg2;
- (bool)isOverride;
- (id)path;
- (void)writeToStreamWriter:(id)arg1;

@end
