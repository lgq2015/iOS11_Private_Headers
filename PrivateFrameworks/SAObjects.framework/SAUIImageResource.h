/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic) double pixelHeight;
@property (nonatomic) double pixelWidth;
@property (nonatomic) double pointHeight;
@property (nonatomic) double pointWidth;
@property (nonatomic, copy) NSURL *resourceUrl;
@property (nonatomic) double scaleFactor;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *urlFormatString;
@property (nonatomic, copy) NSString *userAgent;

+ (id)imageResource;
+ (id)imageResourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageData;
- (double)pixelHeight;
- (double)pixelWidth;
- (double)pointHeight;
- (double)pointWidth;
- (id)resourceUrl;
- (double)scaleFactor;
- (void)setImageData:(id)arg1;
- (void)setPixelHeight:(double)arg1;
- (void)setPixelWidth:(double)arg1;
- (void)setPointHeight:(double)arg1;
- (void)setPointWidth:(double)arg1;
- (void)setResourceUrl:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setUrlFormatString:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)urlFormatString;
- (id)userAgent;

@end
