/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSATemplateInfo : NSObject {
    NSString * _displayName;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSURL *documentURL;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isAvailable;
@property (nonatomic, readonly) bool isUserTemplate;
@property (nonatomic, readonly) NSBundle *localizationBundle;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) NSURL *previewImageURL;
@property (nonatomic, readonly, copy) NSSet *tags;

- (void)dealloc;
- (id)displayName;
- (id)documentURL;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDisplayName:(id)arg1;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTemplateInfo:(id)arg1;
- (bool)isUserTemplate;
- (id)localizationBundle;
- (id)makeIdentifier;
- (void)prepareWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)previewImage;
- (id)previewImageURL;
- (void)setDisplayName:(id)arg1;
- (id)tags;

@end
